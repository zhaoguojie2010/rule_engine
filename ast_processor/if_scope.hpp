#ifndef _RULE_ENGINE_IF_SCOPE_
#define _RULE_ENGINE_IF_SCOPE_

#include <string>

#include "node.hpp"
#include "expression.hpp"

namespace rule_engine {

class IfScope: public Node, public IExpressionAcceptor {
public:
    IfScope() {}
    bool evaluate(IDataContext* dctx) {
        return true;
        //auto result = expression_->evaluate(dctx);
    }
    void accept_expression(std::shared_ptr<Expression> expr) {
        expression_ = expr;
    }
private:
    std::shared_ptr<Expression> expression_;
};

struct IIfScopeAcceptor {
    virtual void accept_if_scope(std::shared_ptr<IfScope>) = 0;
};

}

#endif