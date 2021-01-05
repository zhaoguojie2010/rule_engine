#ifndef _RULE_ENGINE_THEN_EXPRESSIONS_
#define _RULE_ENGINE_THEN_EXPRESSIONS_

#include <string>
#include <vector>

#include "then_expression.hpp"
#include "node.hpp"

namespace rule_engine {

class ThenExpressions: public Node, public IThenExpressionAcceptor {
public:
    ThenExpressions() {}
    virtual void accept_then_expression(std::shared_ptr<ThenExpression> expr) {
        expressions_.push_back(expr);
    }
private:
    std::vector<std::shared_ptr<ThenExpression>> expressions_;
};

}

#endif