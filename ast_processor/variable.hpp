#ifndef _RULE_ENGINE_VARIABLE_
#define _RULE_ENGINE_VARIABLE_

#include "node.hpp"
#include "variable.hpp"
#include "array_map_selector.hpp"

namespace rule_engine {

class Variable {
public:
    Variable() {}
private:
    std::shared_ptr<Variable> variable_;
    std::shared_ptr<ArrayMapSelector> selector_;
};

}

#endif