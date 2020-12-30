#ifndef _RULE_ENGINE_DATA_CTX_
#define _RULE_ENGINE_DATA_CTX_

#include <string>
#include <unordered_map>

#include "ast_processor/rule_entry.hpp"

namespace rule_engine {

// DataContext holds the data to be manipulated by crule, usually structs.
class DataContext: public IDataContext {
public:
    DataContext() {}

    void add(const std::string& name, rttr::instance obj) {
        map_.insert(std::make_pair(name, obj));
    }
    void remove(const std::string& name) {
        map_.erase(name);
    }

    rttr::instance get(const std::string& name) {
        return map_[name];
    }
private:
    std::unordered_map<std::string, rttr::instance> map_;
};

}

#endif