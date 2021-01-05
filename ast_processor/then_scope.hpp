#ifndef _RULE_ENGINE_THEN_SCOPE_
#define _RULE_ENGINE_THEN_SCOPE_

#include <string>

#include "then_expressions.hpp"
#include "node.hpp"

namespace rule_engine {

class ThenScope: public Node, public IThenExpressionsAcceptor {
public:
    ThenScope() {}
    virtual void accept_then_expressions(std::shared_ptr<ThenExpressions> exprs) {
        then_expressions_ = exprs;
    }
private:
    std::shared_ptr<ThenExpressions> then_expressions_;
};

}

#endif