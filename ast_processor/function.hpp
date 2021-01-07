#ifndef _RULE_ENGINE_FUNCTION_
#define _RULE_ENGINE_FUNCTION_

#include <string>

#include "node.hpp"
#include "arguments.hpp"

namespace rule_engine {

class Function: public Node, public IArgumentsAcceptor {
public:
    Function() {}

    virtual void accept_arguments(std::shared_ptr<Arguments> args) {
        args_ = args;
    }
    void set_name(const std::string& name) {name_ = name;}
    std::string get_name() {return name_;}
    std::shared_ptr<std::vector<rttr::argument>> evaluate_args(IDataContext* dctx) {
        if(!args_) return std::make_shared<std::vector<rttr::argument>>();
        return args_->evaluate(dctx);
    }
    void execute(IDataContext* dctx) {
        
    }

    rttr::variant evaluate(IDataContext* dctx) {
        // TODO:
        return rttr::variant();
    }
private:
    std::string name_;
    std::shared_ptr<Arguments> args_;
};

}

#endif