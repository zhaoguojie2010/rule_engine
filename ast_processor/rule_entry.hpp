#ifndef _RULE_ENGINE_RULE_ENTRY_
#define _RULE_ENGINE_RULE_ENTRY_

#include <string>

#include "node.hpp"
#include "if_scope.hpp"
#include "then_scope.hpp"

namespace rule_engine {

class RuleEntry: public Node, 
    public IIfScopeAcceptor, public IThenScopeAcceptor {
public:
    RuleEntry() {}
    bool evaluate(IDataContext* dctx) {
        return if_scope_->evaluate(dctx);
    }
    void execute(IDataContext* dctx) {
        then_scope_->execute(dctx);
    }

    virtual void accept_if_scope(std::shared_ptr<IfScope> node) {
        if_scope_ = node;
    }
    virtual void accept_then_scope(std::shared_ptr<ThenScope> node) {
        then_scope_ = node;
    } 
    const std::string& get_name() {return name_;}
private:
    std::string name_;
    std::string description_;
    int salience_;

    std::shared_ptr<IfScope> if_scope_;
    std::shared_ptr<ThenScope> then_scope_;
};

}

#endif