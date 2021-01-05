#ifndef _RULE_ENGINE_LOG_
#define _RULE_ENGINE_LOG_

#include <stack>
#include <memory>
#include <string>


namespace rule_engine {

void info(const std::string& s) {
    std::cout << s << std::endl;
}

void warn(const std::string& s) {

}

void error(const std::string& s) {
    std::cout << s << std::endl;
}

template<typename T>
void assert_type_semantic(std::shared_ptr<Node> ptr, const std::string& s) {
    if(dynamic_cast<T*>(ptr.get()) == nullptr) {
        error(s);
    }
}

template<typename T>
void assert_type(std::shared_ptr<Node> ptr, const std::string& s) {
    if(dynamic_cast<T*>(ptr.get()) == nullptr) {
        error(s);
    }
}

template<typename T>
void assert_type(std::unique_ptr<Node>& ptr, const std::string& s) {
    if(dynamic_cast<T*>(ptr.get()) == nullptr) {
        error(s);
    }
}

}
#endif