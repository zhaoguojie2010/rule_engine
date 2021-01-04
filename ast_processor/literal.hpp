#ifndef _RULE_ENGINE_LITERAL_
#define _RULE_ENGINE_LITERAL_

#include "node.hpp"

namespace rule_engine {

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