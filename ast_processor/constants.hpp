#ifndef _RULE_ENGINE_CONSTANTS_
#define _RULE_ENGINE_CONSTANTS_

#include <typeinfo>

#include "node.hpp"
#include "log/logger.hpp"
#include "constant.hpp"

namespace rule_engine {

class Constants: public Node {
public:
    Constants() {}
private:
    std::vector<Constant> constants_;
};

}

#endif