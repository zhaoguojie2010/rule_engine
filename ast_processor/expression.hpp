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

class Expression: public Node {
public:
    Expression() {}
private:
    std::shared_ptr<Expression> left_;
    std::shared_ptr<Expression> right_;
    std::shared_ptr<ExpressionAtom> atom_;
    OP_TYPE op_type_;
    bool negation_;
};

}

#endif