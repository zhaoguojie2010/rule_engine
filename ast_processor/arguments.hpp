#ifndef _RULE_ENGINE_ARGS_
#define _RULE_ENGINE_ARGS_

#include <string>
#include <vector>

#include "node.hpp"

namespace rule_engine {

class Expression;
class Arguments: public Node, public IExpressionAcceptor {
public:
    Arguments() {}
    virtual void accept_expression(std::shared_ptr<Expression> expr) {
        args_.push_back(std::dynamic_pointer_cast<IEvaluable>(expr));
    }
    std::shared_ptr<std::vector<rttr::argument>> evaluate(IDataContext* dctx) {
        auto ans = std::make_shared<std::vector<rttr::argument>>();
        if(args_.empty()) return ans;
        for(auto& arg:args_) {
            ans->push_back(arg->evaluate(dctx));
        }
        return ans;
    }
private:
    std::vector<std::shared_ptr<IEvaluable>> args_;
};

}

#endif