#ifndef _RULE_ENGINE_NODE_
#define _RULE_ENGINE_NODE_

#include <string>
#include <memory>
#include <rttr/registration>
#include <rttr/type>

namespace rule_engine {


class Node {
public:
    Node() {}
    std::string get_crl_text() {
        return crl_text_;
    }
    std::string get_ast_id() {
        return ast_id_;
    }
    void set_crl_text(const std::string& s) {
        crl_text_ = s;
    }
    void set_ast_id(const std::string& s) {
        ast_id_ = s;
    }

    // accept child node
    virtual void accept(std::shared_ptr<Node> child) {}
private:
    std::string crl_text_;
    std::string ast_id_;
};

class IDataContext {
    virtual void add(const std::string& name, rttr::instance obj) = 0;
    virtual void remove(const std::string& name) = 0;
    virtual rttr::instance get(const std::string& name) = 0;
};

}
#endif