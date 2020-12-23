#ifndef _RULE_ENGINE_FUNCTION_
#define _RULE_ENGINE_FUNCTION_

#include <string>

#include "node.hpp"
#include "arguments.hpp"

namespace rule_engine {

class Function: public Node {
public:
    Function() {}
private:
    std::string name_;
    std::shared_ptr<Arguments> args_;
};

}

#endif