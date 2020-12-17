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
    BOOLEAN
};

class Var {
public:
    VAR_TYPE get_type() const {
        return T_;
    }

    Var(const std::string& s): string_(s), T_(STRING) {}
    Var(const int& i): int_(i), T_(INT) {}
    Var(const float& f): float_(f), T_(FLOAT) {}
    Var(const bool& b): bool_(b), T_(BOOLEAN) {}

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

    std::string get_string() const {return string_;};
    int get_int() const {return int_;};
    float get_float() const {return float_;}
    bool get_boolean() const {return bool_;}

    bool operator==(const Var& other) {
        if(T_ != other.get_type()) return false; 
        switch(T_) {
            case INT:
                return int_ == other.get_int();
            case STRING:
                return string_ == other.get_string();
            case FLOAT:
                return float_ == other.get_float();
            case BOOLEAN:
                return bool_ == other.get_boolean();
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
    void accept_string_literal(std::shared_ptr<Node> child) {
        v_.set_string(dynamic_cast<StringLiteral*>(child.get())->string_);
    }
    void accept_int_literal(std::shared_ptr<Node> child) {
        v_.set_int(dynamic_cast<IntegerLiteral*>(child.get())->int_);
    }
    void accept_float_literal(std::shared_ptr<Node> child) {
        v_.set_float(dynamic_cast<FloatLiteral*>(child.get())->float_);
    }
    void accept_bool_literal(std::shared_ptr<Node> child) {
        v_.set_bool(dynamic_cast<BooleanLiteral*>(child.get())->bool_);
    }
private:
    Var v_;
    // std::shared_ptr<StringLiteral> string_;
    // std::shared_ptr<IntegerLiteral> int_;
    // std::shared_ptr<FloatLiteral> float_;
    // std::shared_ptr<BooleanLiteral> bool_;
};

}

#endif