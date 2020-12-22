#ifndef _RULE_ENGINE_IF_SCOPE_
#define _RULE_ENGINE_IF_SCOPE_

#include <string>

#include "node.hpp"
#include "expression.hpp"

namespace rule_engine {

class IfScope: public Node {
private:
    std::shared_ptr<Expression> expression_;
};

}

#endif