#ifndef _RULE_ENGINE_THEN_EXPRESSION_
#define _RULE_ENGINE_THEN_EXPRESSION_

#include <string>

#include "assignment.hpp"
#include "expression_atom.hpp"
#include "node.hpp"

namespace rule_engine {

class ThenExpression: public Node {
private:
    std::shared_ptr<Assignment> expression_;
    std::shared_ptr<ExpressionAtom> expression_;
};

}

#endif