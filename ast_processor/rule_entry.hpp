#ifndef _RULE_ENGINE_RULE_ENTRY_
#define _RULE_ENGINE_RULE_ENTRY_

#include <string>

#include "node.hpp"
#include "if_scope.hpp"
#include "then_scope.hpp"

namespace rule_engine {

class IDataContext {
    virtual void add(const std::string& name, void* obj) = 0;
    virtual void remove(const std::string& name) = 0;
    virtual void* get(const std::string& name) = 0;
};

class RuleEntry: public Node {
public:
    RuleEntry() {}
    bool evaluate(IDataContext* dctx) {
        return true;
    }
    void execute(IDataContext* dctx) {}
private:
    std::string name_;
    std::string description_;
    int salience_;

    std::shared_ptr<IfScope> if_scope_;
    std::shared_ptr<ThenScope> then_scope_;
};

}

#endif