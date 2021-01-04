#ifndef _RULE_ENGINE_VARIABLE_
#define _RULE_ENGINE_VARIABLE_

#include "node.hpp"
#include "variable.hpp"
#include "array_map_selector.hpp"

namespace rule_engine {

class Variable: public Node, public IVariableAcceptor {
public:
    Variable() {}
    void accept_variable(std::shared_ptr<Variable> var) {
        variable_ = var;
    }
    void set_name(const std::string& name) {name_ = name;}
    std::string get_name() {return name_;}
private:
    std::string name_;
    std::shared_ptr<Variable> variable_;
    std::shared_ptr<ArrayMapSelector> selector_;
};

}

#endif