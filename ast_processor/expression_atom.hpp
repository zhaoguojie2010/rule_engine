#ifndef _RULE_ENGINE_EXP_ATOM_
#define _RULE_ENGINE_EXP_ATOM_

#include <string>

#include "node.hpp"
#include "constant.hpp"
//#include "variable.hpp"
#include "function.hpp"
//#include "array_map_selector.hpp"

namespace rule_engine {

class ArrayMapSelector;
class Variable;

class ExpressionAtom: public Node {
public:
    ExpressionAtom() {}
private:
    std::shared_ptr<Constant> expression_;
    std::shared_ptr<Variable> variable_;
    std::shared_ptr<Function> function_;
    std::shared_ptr<ArrayMapSelector> selector_;
    bool negation_;
};

}

#endif