#ifndef _RULE_ENGINE_EXP_ATOM_
#define _RULE_ENGINE_EXP_ATOM_

#include <string>

#include "node.hpp"
#include "constant.hpp"
//#include "variable.hpp"
#include "function.hpp"
//#include "array_map_selector.hpp"

namespace rule_engine {

class ArrayMapSelector;
class Variable;

class ExpressionAtom: public Node, public IExpressionAtomAcceptor, 
    public IVariableAcceptor, public IConstantAcceptor {
public:
    ExpressionAtom():negation_(false), evaluated_(false) {}

    rttr::variant evaluate(IDataContext *dctx) {
        return rttr::variant();
    }

    virtual void accept_expression_atom(std::shared_ptr<ExpressionAtom> atom) {
        atom_ = atom;
    }
    virtual void accept_variable(std::shared_ptr<Variable> var) {
        variable_ = var;
    }
    virtual void accept_constant(std::shared_ptr<Constant> c) {
        constant_ = c;
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