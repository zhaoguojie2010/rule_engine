#ifndef _RULE_ENGINE_THEN_SCOPE_
#define _RULE_ENGINE_THEN_SCOPE_

#include <string>

#include "then_expressions.hpp"
#include "node.hpp"

namespace rule_engine {

class ThenScope: public Node {
private:
    std::shared_ptr<ThenExpressions> expression_;
};

}

#endif