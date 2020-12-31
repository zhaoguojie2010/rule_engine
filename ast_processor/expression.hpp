#ifndef _RULE_ENGINE_EXPRESSION_
#define _RULE_ENGINE_EXPRESSION_

#include <string>

#include "node.hpp"
#include "expression_atom.hpp"

namespace rule_engine {

enum OP_TYPE {
    MUL,
    DIV,
    MOD,
    ADD,
    SUB,
    AND,
    OR,
    GT,
    GET,
    LT,
    LET,
    BITAND,
    BITOR,
    EQ,
    NEQ
};

struct IExpressionAcceptor {
    virtual void accept_expression(std::shared_ptr<Expression>) = 0;
};

class Expression: public Node, public IExpressionAcceptor {
public:
    Expression() {}
    void set_negation() {
        negation_ = true;
    }
    void accept_expression(std::shared_ptr<Expression> expr) {
        if(!left_) {
            left_ = expr;
        } else {
            right_ = expr;
        }
    }
    void set_op_type(OP_TYPE t) {
        op_type_ = t;
    }
private:
    std::shared_ptr<Expression> left_;
    std::shared_ptr<Expression> right_;
    std::shared_ptr<ExpressionAtom> atom_;
    OP_TYPE op_type_;
    bool negation_;
};

}

#endif