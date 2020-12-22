#ifndef _RULE_ENGINE_SELECTOR_
#define _RULE_ENGINE_SELECTOR_

#include "node.hpp"
#include "expression.hpp"

namespace rule_engine {

class Variable {
private:
    std::shared_ptr<Expression> expression_;
};

}

#endif