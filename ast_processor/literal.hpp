#ifndef _RULE_ENGINE_LITERAL_
#define _RULE_ENGINE_LITERAL_

#include "node.hpp"

namespace rule_engine {

class IStringLiteralAcceptor {
public:
    virtual void accept_string_literal(std::shared_ptr<Node>) = 0;
};

class IIntegerLiteralAcceptor {
public:
    virtual void accept_int_literal(std::shared_ptr<Node>) = 0;
};

class IFloatLiteralAcceptor {
public:
    virtual void accept_float_literal(std::shared_ptr<Node>) = 0;
};

class IBooleanLiteralAcceptor {
public:
    virtual void accept_bool_literal(std::shared_ptr<Node>) = 0;
};

class StringLiteral: public Node {
public:
    std::string string_;
    virtual ~StringLiteral() {}
};

class IntegerLiteral: public Node {
public:
    int int_;
    virtual ~IntegerLiteral() {}
};

class FloatLiteral: public Node {
public:
    float float_;
    virtual ~FloatLiteral() {}
};

class BooleanLiteral: public Node {
public:
    bool bool_;
    virtual ~BooleanLiteral() {}
};

}

#endif