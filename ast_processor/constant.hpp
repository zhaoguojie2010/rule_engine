#ifndef _RULE_ENGINE_CONSTANT_
#define _RULE_ENGINE_CONSTANT_

#include <typeinfo>

#include "node.hpp"
#include "log/logger.hpp"
#include "literal.hpp"

namespace rule_engine {

enum VAR_TYPE {
    INT,
    STRING,
    FLOAT,
    BOOLEAN,
    UNDEFINED
};

class Var {
public:
    VAR_TYPE get_type() const {
        return T_;
    }

    Var(): T_(UNDEFINED) {}

    Var(const std::string& s): T_(STRING), string_(s)  {}
    Var(const int& i): T_(INT), int_(i)  {}
    Var(const float& f): T_(FLOAT), float_(f) {}
    Var(const bool& b): T_(BOOLEAN), bool_(b) {}

    virtual ~Var() {}
    void set_string(const std::string& s) {
        T_ = STRING;
        string_ = s;
    }
    void set_int(const int& i) {
        T_ = INT;
        int_ = i;
    }
    void set_float(const float& f) {
        T_ = FLOAT;
        float_ = f;
    }
    void set_bool(const bool& b) {
        T_ = BOOLEAN;
        bool_ = b;
    }

    std::string to_string() const {return string_;};
    int to_int() const {return int_;};
    float to_float() const {return float_;}
    bool to_boolean() const {return bool_;}

    bool operator==(const Var& other) {
        if(T_ != other.get_type()) return false; 
        switch(T_) {
            case INT:
                return int_ == other.to_int();
            case STRING:
                return string_ == other.to_string();
            case FLOAT:
                return float_ == other.to_float();
            case BOOLEAN:
                return bool_ == other.to_boolean();
            case UNDEFINED:
                return false;
        }
        return false;
    }
private:
    VAR_TYPE T_;
    union {
        std::string string_;
        int int_;
        float float_;
        bool bool_;
    };
};

class Constant: public Node {
public:
    Constant():Node() {}
    void accept_string_literal(std::shared_ptr<Node> child) {
        v_ = dynamic_cast<StringLiteral*>(child.get())->string_;
    }
    void accept_int_literal(std::shared_ptr<Node> child) {
        v_ = dynamic_cast<IntegerLiteral*>(child.get())->int_;
    }
    void accept_float_literal(std::shared_ptr<Node> child) {
        v_ = dynamic_cast<FloatLiteral*>(child.get())->float_;
    }
    void accept_bool_literal(std::shared_ptr<Node> child) {
        v_ = dynamic_cast<BooleanLiteral*>(child.get())->bool_;
    }
    virtual ~Constant() {}

    rttr::variant evaluate() {
        return v_;
    }
private:
    rttr::variant v_;

};

}

#endif