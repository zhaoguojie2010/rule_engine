#ifndef _RULE_ENGINE_THEN_SCOPE_
#define _RULE_ENGINE_THEN_SCOPE_

#include <string>

#include "then_expressions.hpp"
#include "node.hpp"

namespace rule_engine {

class ThenScope: public Node {
public:
    ThenScope() {}
private:
    std::shared_ptr<ThenExpressions> then_expression_;
};

struct IThenScopeAcceptor {
    virtual void accept_then_scope(std::shared_ptr<ThenScope>) = 0;
};

}

#endif