#ifndef _RULE_ENGINE_VARIABLE_
#define _RULE_ENGINE_VARIABLE_

#include "node.hpp"
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
class Variable: public Node, public IVariableAcceptor, public IMemberVariableAcceptor {
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
        if(!has_parent()) {
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

    void assign(IDataContext* dctx, rttr::variant var) {
        if(!has_parent()) {
            // TODO: 
        } else {
            // TODO: this is too slow
            if(parent_->has_parent()) {
                auto parent_var = parent_->evaluate(dctx);
                rttr::property prop = parent_var.get_type().get_property(name_);
                prop.set_value(parent_var, var);
                parent_->assign(dctx, parent_var);
            } else {
                auto inst = parent_->instance(dctx);
                rttr::property prop = inst.get_type().get_property(name_);
                prop.set_value(inst, var);
            }
        }
    }
private:
    std::string name_;
    std::shared_ptr<Variable> parent_;
    std::shared_ptr<ArrayMapSelector> selector_;
    bool is_top_level_;
};

}

#endif