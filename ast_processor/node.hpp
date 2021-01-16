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
public:
    virtual void add(const std::string& name, rttr::instance obj) = 0;
    virtual void remove(const std::string& name) = 0;
    virtual rttr::instance get(const std::string& name) = 0;
};

class Expression;
class ExpressionAtom;
class Variable;
class Constant;
class RuleEntry;
class ThenScope;
class ThenExpressions;
class ThenExpression;
class Assignment;
class Function;
class Arguments;
class ArrayMapSelector;

struct IExecutable {
    virtual void execute(IDataContext*) = 0;
};

struct IEvaluable {
    virtual rttr::variant evaluate(IDataContext*) = 0;
};
struct IRuleEntryAcceptor {
    virtual void accept_rule_entry(std::shared_ptr<RuleEntry>) = 0;
};
struct IExpressionAcceptor {
    virtual void accept_expression(std::shared_ptr<Expression>) = 0;
};

struct IExpressionAtomAcceptor {
    virtual void accept_expression_atom(std::shared_ptr<ExpressionAtom>) = 0;
};

struct IVariableAcceptor {
    virtual void accept_variable(std::shared_ptr<Variable>) = 0;
};

struct IFunctionAcceptor {
    virtual void accept_function(std::shared_ptr<Function>) = 0;
};

struct IArgumentsAcceptor {
    virtual void accept_arguments(std::shared_ptr<Arguments>) = 0;
};

struct IAssignmentAcceptor {
    virtual void accept_assignment(std::shared_ptr<Assignment>) = 0;
};

struct IArrayMapSelector {
    virtual void accept_selector(std::shared_ptr<ArrayMapSelector>) = 0;
};

struct IMemberVariableAcceptor {
    virtual void accept_member_variable(const std::string&) = 0;
};

struct IConstantAcceptor {
    virtual void accept_constant(std::shared_ptr<Constant>) = 0;
};

struct IThenScopeAcceptor {
    virtual void accept_then_scope(std::shared_ptr<ThenScope>) = 0;
};

struct IThenExpressionsAcceptor {
    virtual void accept_then_expressions(std::shared_ptr<ThenExpressions>) = 0;
};

struct IThenExpressionAcceptor {
    virtual void accept_then_expression(std::shared_ptr<ThenExpression>) = 0;
};

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


enum ASSIGN_TYPE {
    ASSIGN,
    PLUS_ASSIGN,
    MINUS_ASSIGN,
    MUL_ASSIGN,
    DIV_ASSIGN,
    MOD_ASSIGN
};

}
#endif