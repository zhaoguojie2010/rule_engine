#ifndef _RULE_ENGINE_VARIABLE_
#define _RULE_ENGINE_VARIABLE_

#include "node.hpp"
#include "op.hpp"
#include "variable.hpp"
#include "array_map_selector.hpp"

namespace rule_engine {

/* 
 * Variable holds the structs and members to be manipulated by rule engine.
 * e.g. my_struct.a.b
 * the corresponding ast is as follow
 *            my_struct.a.b   <-- top_level
 *             /         \
 *       my_struct.a      b
 *         /     \
 *   my_struct    a
 *       ^
 *       |
 *    this is a terminal node, the obj "my_struct" is registered in data_context
 */
class Variable: public Node, public IVariableAcceptor, 
    public IMemberVariableAcceptor, public IArrayMapSelector {
public:
    Variable():is_top_level_(false) {}

    virtual void accept_variable(std::shared_ptr<Variable> var) {
        parent_ = var;
    }

    virtual void accept_member_variable(const std::string& var_name) {
        name_ = var_name;
    }

    void set_name(const std::string& name) {name_ = name;}
    std::string get_name() {return name_;}

    void set_top_level() {is_top_level_ = true;}
    bool is_top_level() {return is_top_level_;}

    bool has_parent() {
        return parent_?true:false;
    }

    // TODO: cache intermediate variant
    rttr::variant evaluate(IDataContext* dctx) {
        // info("evaluate " + get_crl_text() + " " + name_);
        rttr::variant var;

        if(selector_) {
            // in this case, parent_ is not really the parent of the selector
            // e.g. for obj.m["a"], parent_ is obj.m
            if(!parent_) {
                syntax_error("invalid selector " + get_crl_text() + ", preceeding selector name is required");
            }
            auto selector = parent_->evaluate(dctx);
            auto key = selector_->evaluate(dctx);
            if(selector.is_sequential_container()) {
                // vector
                auto view = selector.create_sequential_view();
                auto key_type = key.get_type();
                if(!key_type.is_arithmetic() || key_type == rttr::type::get<float>() ||
                    key_type == rttr::type::get<double>()) {
                    runtime_error("invalid index of array, must be integer type. " + get_crl_text());
                }
                std::size_t vec_size = view.get_size();
                int index = key.to_uint32();
                if(index >= vec_size) {
                    runtime_error("index out of range. " + get_crl_text());
                }
                var = view.get_value(index).extract_wrapped_value();
            } else if(selector.is_associative_container()) {
                // map, unordered_map
                auto view = selector.create_associative_view();
                if(view.is_key_only_type()) {
                    // set, unordered_set
                } else {
                    auto it = view.find(key);
                    if(it != view.end()) {
                        var = (*it).second.extract_wrapped_value();
                    }
                }
            }
        } else if(!has_parent()) {
            // TODO: simple name variable
        } else {
            if(parent_->has_parent()) {
                auto parent_var = parent_->evaluate(dctx);
                rttr::property prop = parent_var.get_type().get_property(name_);
                var = prop.get_value(parent_var);
            } else {
                auto inst = parent_->instance(dctx);
                rttr::property prop = inst.get_type().get_property(name_);
                var = prop.get_value(inst);
            }
        }
        return var;
    }
    rttr::instance instance(IDataContext* dctx) {
        // info("instance " + get_crl_text() + " " + name_);
        return dctx->get(name_);
    }

    void assign(IDataContext* dctx, rttr::variant var, ASSIGN_TYPE t = ASSIGN) {
        if(!has_parent()) {
            // TODO: 
        } else {
            // TODO: this is too slow
            if(parent_->has_parent()) {
                auto parent_var = parent_->evaluate(dctx);
                rttr::property prop = parent_var.get_type().get_property(name_);
                var = actual_assigned_value(parent_var, prop, var, t);
                prop.set_value(parent_var, var);
                parent_->assign(dctx, parent_var);
            } else {
                auto inst = parent_->instance(dctx);
                rttr::property prop = inst.get_type().get_property(name_);
                var = actual_assigned_value(inst, prop, var, t);
                prop.set_value(inst, var);
            }
        }
    }
    rttr::variant actual_assigned_value(rttr::instance V, rttr::property prop, rttr::variant var, ASSIGN_TYPE t) {
        if(is_top_level_) {
            auto original_var = prop.get_value(V);
            switch(t) {
                case PLUS_ASSIGN:
                    var = process_addition(original_var, var);
                    break;
                case MINUS_ASSIGN:
                    var = process_subtraction(original_var, var);
                    break;
                case MUL_ASSIGN:
                    var = process_multiplication(original_var, var);
                    break;
                case DIV_ASSIGN:
                    var = process_division(original_var, var);
                    break;
                case MOD_ASSIGN:
                    var = process_mod(original_var, var);
                    break;
                default:
                    break;
            }
        }
        return var;
    }

    rttr::type type() {
        return *type_;
    }

    virtual void accept_selector(std::shared_ptr<ArrayMapSelector> selector) {
        selector_ = selector;
    }
private:
    std::string name_;
    std::shared_ptr<Variable> parent_;
    std::shared_ptr<ArrayMapSelector> selector_;
    bool is_top_level_;
    std::shared_ptr<rttr::type> type_;
};

}

#endif