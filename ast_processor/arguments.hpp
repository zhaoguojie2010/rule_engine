#ifndef _RULE_ENGINE_ARGS_
#define _RULE_ENGINE_ARGS_

#include <string>

#include "node.hpp"
#include "expression.hpp"

namespace rule_engine {

class Arguments: public Node {
private:
    std::shared_ptr<Expression> args_;
};

}

#endif