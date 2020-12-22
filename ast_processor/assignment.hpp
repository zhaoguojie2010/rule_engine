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

class Assignment: public Node {
private:
    std::shared_ptr<Variable> expression_;
    std::shared_ptr<Expression> expression_;
};

}

#endif