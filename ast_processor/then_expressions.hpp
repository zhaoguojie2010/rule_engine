#ifndef _RULE_ENGINE_THEN_EXPRESSIONS_
#define _RULE_ENGINE_THEN_EXPRESSIONS_

#include <string>

#include "then_expression.hpp"
#include "node.hpp"

namespace rule_engine {

class ThenExpressions: public Node {
public:
    ThenExpressions() {}
private:
    std::shared_ptr<ThenExpression> expression_;
};

}

#endif