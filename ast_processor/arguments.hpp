#ifndef _RULE_ENGINE_ARGS_
#define _RULE_ENGINE_ARGS_

#include <string>
#include <vector>

#include "node.hpp"
//#include "expression.hpp"

namespace rule_engine {

class Expression;
class Arguments: public Node, public IExpressionAcceptor {
public:
    Arguments() {}
    virtual void accept_expression(std::shared_ptr<Expression> expr) {
        args_.push_back(expr);
    }
private:
    std::vector<std::shared_ptr<Expression>> args_;
};

}

#endif