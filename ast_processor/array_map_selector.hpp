#ifndef _RULE_ENGINE_SELECTOR_
#define _RULE_ENGINE_SELECTOR_

#include "node.hpp"

namespace rule_engine {
class ArrayMapSelector: public Node, public IExpressionAcceptor {
public:
    ArrayMapSelector() {}
    void accept_expression(std::shared_ptr<Expression> expr) {
        expression_ = std::dynamic_pointer_cast<IEvaluable>(expr);
    }

    rttr::variant evaluate(IDataContext* dctx) {
        return expression_->evaluate(dctx);
    }
private:
    std::shared_ptr<IEvaluable> expression_;
};

}

#endif