#ifndef _RULE_ENGINE_ENGINE_
#define _RULE_ENGINE_ENGINE_

#include <string>
#include <memory>
#include "data_context.hpp"
#include "knowledge_base.hpp"

namespace rule_engine {

class Engine {
public:
    Engine() {
        // TODO:
    }
    void load_rules(const std::string& rules) {
        // TODO:
    }
    void execute() {
        // TODO:
    }
    void add(const std::string& name, void* obj) {
        dctx_.add(name, obj);
    }
    void remove(const std::string& name) {
        dctx_.remove(name);
    }
private:
    DataContext dctx_;
    KnowledgeBase kb_;
};

}

#endif