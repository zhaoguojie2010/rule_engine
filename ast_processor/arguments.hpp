#ifndef _RULE_ENGINE_ARGS_
#define _RULE_ENGINE_ARGS_

#include <string>
#include <vector>

#include "node.hpp"
//#include "expression.hpp"

namespace rule_engine {

class Expression;
class Arguments: public Node {
public:
    Arguments() {}
private:
    std::vector<std::shared_ptr<Expression>> args_;
};

}

#endif