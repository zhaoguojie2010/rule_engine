#include <string>
#include <unordered_map>

#ifndef _RULE_ENGINE_DATA_CTX_
#define _RULE_ENGINE_DATA_CTX_

namespace rule_engine {

// DataContext holds the data to be manipulated by crule, usually structs.
class DataContext {
public:
    DataContext() {}

    // add might add multiple type of object
    void add(const std::string& name, void* obj) {
        // TODO:
    }
    void remove(const std::string& name) {
        // TODO:
    }

    // TODO: should be able to deduct the returned type
    void* get(const std::string& name) {
        // TODO:
        return 0;
    }
private:
    std::unordered_map<std::string, void*> map_;
};

}

#endif