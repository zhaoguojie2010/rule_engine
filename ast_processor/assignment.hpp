#ifndef _RULE_ENGINE_ASSIGNMENT_
#define _RULE_ENGINE_ASSIGNMENT_

#include <string>

#include "node.hpp"
#include "variable.hpp"
#include "expression.hpp"

namespace rule_engine {

enum ASSGN_TYPE {
    ASSIGN,
    PLUS_ASSIGN,
    MINUS_ASSIGN,
    MUL_ASSIGN,
    DIV_ASSIGN,
    MOD_ASSIGN
};

class Assignment: public Node, public IExpressionAcceptor, public IVariableAcceptor {
public:
    Assignment() {}
    void accept_expression(std::shared_ptr<Expression> expr) {
        expression_ = expr;
    }
    virtual void accept_variable(std::shared_ptr<Variable> var) {
        var->set_top_level();
        variable_ = var;
    }

    void execute(IDataContext* dctx) {
        auto right = expression_->evaluate(dctx);
        variable_->assign(dctx, right);
    }
private:
    std::shared_ptr<Variable> variable_;
    std::shared_ptr<Expression> expression_;
};

}

#endif