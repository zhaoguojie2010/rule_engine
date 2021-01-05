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
 *    this is a terminal node, the obj "my_struct" is registered by data_context,
 *    hence its evaluate() should return an rttr:instance, NOT rttr::variant
 */
class Variable: public Node, public IVariableAcceptor {
public:
    Variable():is_top_level_(false) {}

    virtual void accept_variable(std::shared_ptr<Variable> var) {
        variable_ = var;
    }

    void set_name(const std::string& name) {name_ = name;}
    std::string get_name() {return name_;}

    void set_top_level() {is_top_level_ = true;}
    bool is_top_level() {return is_top_level_;}

    bool has_parent() {
        return variable_?true:false;
    }

    rttr::variant evaluate(IDataContext* dctx) {
        rttr::variant var;
        if(!has_parent()) {
            // TODO: simple name variable
        } else {
            if(variable_->has_parent()) {
                auto parent_var = variable_->evaluate(dctx);
                rttr::property prop = parent_var.get_type().get_property(name_);
                var = prop.get_value(parent_var);
            } else {
                auto inst = variable_->instance(dctx);
                rttr::property prop = inst.get_type().get_property(name_);
                var = prop.get_value(inst);
            }
        }
        return var;
    }
    rttr::instance instance(IDataContext* dctx) {
        return dctx->get(name_);
    }
private:
    std::string name_;
    std::shared_ptr<Variable> variable_;
    std::shared_ptr<ArrayMapSelector> selector_;
    bool is_top_level_;
};

}

#endif