#ifndef _RULE_ENGINE_LITERAL_
#define _RULE_ENGINE_LITERAL_

#include "node.hpp"

namespace rule_engine {

class IStringLiteral {
public:
    virtual void accept_string_literal(std::shared_ptr<Node>) = 0;
};

class IIntegerLiteral {
public:
    virtual void accept_int_literal(std::shared_ptr<Node>) = 0;
};

class IFloatLiteral {
public:
    virtual void accept_float_literal(std::shared_ptr<Node>) = 0;
};

class IBooleanLiteral {
public:
    virtual void accept_bool_literal(std::shared_ptr<Node>) = 0;
};

class StringLiteral: public Node {
public:
    std::string string_;
};

class IntegerLiteral: public Node {
public:
    int int_;
};

class FloatLiteral: public Node {
public:
    float float_;
};

class BooleanLiteral: public Node {
public:
    bool bool_;
};

}

#endif