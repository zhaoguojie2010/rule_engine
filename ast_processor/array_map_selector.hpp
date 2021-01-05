#ifndef _RULE_ENGINE_SELECTOR_
#define _RULE_ENGINE_SELECTOR_

#include "node.hpp"
//#include "expression.hpp"

namespace rule_engine {
class Expression;
class ArrayMapSelector: public Node, public IExpressionAcceptor {
public:
    ArrayMapSelector() {}
    void accept_expression(std::shared_ptr<Expression> expr) {
        expression_ = expr;
    }
private:
    std::shared_ptr<Expression> expression_;
};

}

#endif