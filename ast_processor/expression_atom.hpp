#ifndef _RULE_ENGINE_EXP_ATOM_
#define _RULE_ENGINE_EXP_ATOM_

#include <string>

#include "node.hpp"
#include "constant.hpp"
#include "variable.hpp"
#include "function.hpp"
#include "array_map_selector.hpp"

namespace rule_engine {

class ExpressionAtom: public Node, public IExpressionAtomAcceptor, 
    public IVariableAcceptor, public IConstantAcceptor,
    public IFunctionAcceptor, public IArrayMapSelector {
public:
    ExpressionAtom():negation_(false), evaluated_(false) {}

    rttr::variant evaluate(IDataContext *dctx) {
        rttr::variant var;
        if(constant_) {
            var =  constant_->evaluate();
        } else if(atom_) {
            if(function_) {
                var = evaluate_method(dctx);
            } else if(variable_) {
                // something like obj.func().var
                // TODO
            } else if(selector_) {
                // obj.get_map()["hello"] || obj.get_array()[3]
                // TODO
            } else {
                // negation atom: !obj.func().m.empty()
                // TODO
            }
        } else if(variable_) {
            var = variable_->evaluate(dctx);
        } else if(function_) {
            var = function_->evaluate(dctx);
        }
        return var;
    }

    // execute the atom only if it's a function or method
    void execute(IDataContext *dctx) {
        if(function_) {
            if(atom_) {
                // method call
                auto ans = evaluate_method(dctx);
                if(!ans.is_valid()) {
                    error("calling method " + function_->get_name() + " failed");
                }
            } else {
                // global function call
                function_->execute(dctx);
            }
        }
    }

    rttr::variant evaluate_method(IDataContext *dctx) {
        rttr::variant ans;
        if(atom_->contain_instance()) {
            rttr::instance inst = atom_->instance(dctx);
            auto func = inst.get_type().get_method(function_->get_name());
            auto args = function_->evaluate_args(dctx);
            ans = func.invoke_variadic(inst, *args);
        } else {
            auto var_atom = atom_->evaluate(dctx);
            rttr::method func = var_atom.get_type().get_method(function_->get_name());
            auto args = function_->evaluate_args(dctx);

            // invoke the method
            ans = func.invoke_variadic(var_atom, *args);

            if(atom_->is_assignable()) {
                // we need to update object instance here caz the method
                // might manipulate member variables
                atom_->assign(dctx, var_atom);
            }
        }
        return ans;
    }

    bool contain_instance() {
        return !atom_ && variable_ && !variable_->has_parent();
    }

    rttr::instance instance(IDataContext *dctx) {
        return variable_->instance(dctx);
    }

    virtual void accept_expression_atom(std::shared_ptr<ExpressionAtom> atom) {
        atom_ = atom;
    }
    virtual void accept_variable(std::shared_ptr<Variable> var) {
        var->set_top_level();
        variable_ = var;
    }
    virtual void accept_constant(std::shared_ptr<Constant> c) {
        constant_ = c;
    }
    virtual void accept_function(std::shared_ptr<Function> func) {
        function_ = func;
    }

    virtual void accept_selector(std::shared_ptr<ArrayMapSelector> selector) {
        selector_ = selector;
    }

    // assignable indicates if a expression atom can be the left oprand of an assignment, 
    // it usually has the following format: 
    //      1. obj.a.b, 
    //      2. obj.ptr->c.
    //      3. obj.m["123"].d
    // while obj.func().b is not assignable, as obj.func() might return a
    // newly created value, assigning a value to it just don't make any sense.
    // obj.f().m[1].e
    // TODO: what if func() return a ref???
    bool is_assignable() {
        if(!atom_ && variable_) return true;
        if(atom_ && atom_->is_assignable() && (variable_ || selector_)) return true;
        return false;
    }

    // assign is only called when a member object called its method, which might 
    // manipulate its own members. In this case, we need to update the member
    // object's parent object, ultimately the registered instance.
    // e.g. obj.member_obj.increase_cnt(): increase_cnt() add member_obj.cnt by 1,
    // thus obj needs to update its member member_obj
    void assign(IDataContext* dctx, rttr::variant var) {
        if(!atom_ && variable_) {
            // obj.member_obj.increase_cnt()
            variable_->assign(dctx, var);
        } else if(atom_ && variable_) {
            // obj.vec[1].member_obj.increase_cnt()
            // TODO
        } else if(atom_ && selector_) {
            // obj.member[1].increase_cnt()
            // TODO:
        }
    }

    bool is_selector() {
        return !!selector_;
    }
private:
    std::shared_ptr<Constant> constant_;
    std::shared_ptr<Variable> variable_;
    std::shared_ptr<Function> function_;
    std::shared_ptr<ArrayMapSelector> selector_;
    std::shared_ptr<ExpressionAtom> atom_;
    std::string member_variable_name_;
    bool negation_;
    bool evaluated_;
};

}

#endif