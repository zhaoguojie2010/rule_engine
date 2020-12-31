#ifndef _RULE_ENGINE_LISTENER_
#define _RULE_ENGINE_LISTENER_

#include <stack>
#include <memory>

#include "ANTLRInputStream.h"
#include "CommonTokenStream.h"
#include "generated/cruleBaseListener.h"
#include "ast_processor/node.hpp"
#include "ast_processor/literal.hpp"
#include "ast_processor/constant.hpp"
#include "ast_processor/variable.hpp"
#include "ast_processor/crl.hpp"
#include "log/logger.hpp"

namespace rule_engine {

class CruleListener: public cruleBaseListener {
public:
    void enterCrl(cruleParser::CrlContext * ctx) override { }
    void exitCrl(cruleParser::CrlContext * ctx) override { }

    void enterRuleEntry(cruleParser::RuleEntryContext * ctx) override { }
    void exitRuleEntry(cruleParser::RuleEntryContext * ctx) override { }

    void enterSalience(cruleParser::SalienceContext * ctx) override { }
    void exitSalience(cruleParser::SalienceContext * ctx) override { }

    void enterRuleName(cruleParser::RuleNameContext * ctx) override { }
    void exitRuleName(cruleParser::RuleNameContext * ctx) override { }

    void enterRuleDescription(cruleParser::RuleDescriptionContext * ctx) override { }
    void exitRuleDescription(cruleParser::RuleDescriptionContext * ctx) override { }

    void enterIfScope(cruleParser::IfScopeContext * ctx) override { 
        auto if_scope = std::make_shared<IfScope>();
        if_scope->set_crl_text(ctx->getText());
        st_.push(if_scope);
    }
    void exitIfScope(cruleParser::IfScopeContext * ctx) override { 
        std::shared_ptr<Node> if_scope = st_.top();
        assert_type<IfScope>(if_scope, "bad cast to IfScope: " + ctx->getText());
        st_.pop();

        std::shared_ptr<Node> acceptor = st_.top();
        assert_type<IIfScopeAcceptor>(acceptor, "bad cast to IIfScopeAcceptor: " + ctx->getText());
        auto acc = std::dynamic_pointer_cast<IIfScopeAcceptor>(acceptor);
        acc->accept_if_scope(std::dynamic_pointer_cast<IfScope>(if_scope));
    }

    void enterThenScope(cruleParser::ThenScopeContext * ctx) override { }
    void exitThenScope(cruleParser::ThenScopeContext * ctx) override { }

    void enterThenExpressionList(cruleParser::ThenExpressionListContext * ctx) override { }
    void exitThenExpressionList(cruleParser::ThenExpressionListContext * ctx) override { }

    void enterThenExpression(cruleParser::ThenExpressionContext * ctx) override { }
    void exitThenExpression(cruleParser::ThenExpressionContext * ctx) override { }

    void enterAssignment(cruleParser::AssignmentContext * ctx) override { }
    void exitAssignment(cruleParser::AssignmentContext * ctx) override { }

    void enterExpression(cruleParser::ExpressionContext * ctx) override { 
        auto expr = std::make_shared<Expression>();
        expr->set_crl_text(ctx->getText());
        st_.push(expr);
    }
    void exitExpression(cruleParser::ExpressionContext * ctx) override { 
        auto expr = std::dynamic_pointer_cast<Expression>(st_.top());
        st_.pop();
        if(ctx->LR_BRACKET() && ctx->RR_BRACKET() && ctx->NEGATION()) {
            expr->set_negation();
        }
        
        auto acceptor = st_.top();
        assert_type<IExpressionAcceptor>(acceptor, "bad cast to IExpressionAcceptor");
        std::dynamic_pointer_cast<IExpressionAcceptor>(acceptor)->accept_expression(expr);
    }

    void enterMulDivOperators(cruleParser::MulDivOperatorsContext * ctx) override { 
        auto expr = std::dynamic_pointer_cast<Expression>(st_.top());
        auto c = ctx->getText();
        if(c=="*") expr->set_op_type(MUL);
        else if(c=="/") expr->set_op_type(DIV);
        else if(c=="%") expr->set_op_type(MOD);
    }
    void exitMulDivOperators(cruleParser::MulDivOperatorsContext * ctx) override { }

    void enterAddMinusOperators(cruleParser::AddMinusOperatorsContext * ctx) override { 
        auto expr = std::dynamic_pointer_cast<Expression>(st_.top());
        auto c = ctx->getText();
        if(c=="+") expr->set_op_type(ADD);
        else if(c=="-") expr->set_op_type(SUB);
        else if(c=="|") expr->set_op_type(BITOR);
        else if(c=="&") expr->set_op_type(BITAND);
    }
    void exitAddMinusOperators(cruleParser::AddMinusOperatorsContext * ctx) override { }

    void enterComparisonOperator(cruleParser::ComparisonOperatorContext * ctx) override { 
        auto expr = std::dynamic_pointer_cast<Expression>(st_.top());
        auto c = ctx->getText();
        if(c=="<") expr->set_op_type(LT);
        else if(c==">") expr->set_op_type(GT);
        else if(c=="<=") expr->set_op_type(LET);
        else if(c==">=") expr->set_op_type(GET);
        else if(c=="==") expr->set_op_type(EQ);
        else if(c=="!=") expr->set_op_type(NEQ);
    }
    void exitComparisonOperator(cruleParser::ComparisonOperatorContext * ctx) override { }

    void enterAndLogicOperator(cruleParser::AndLogicOperatorContext * ctx) override { 
        auto expr = std::dynamic_pointer_cast<Expression>(st_.top());
        expr->set_op_type(AND);
    }
    void exitAndLogicOperator(cruleParser::AndLogicOperatorContext * ctx) override { }

    void enterOrLogicOperator(cruleParser::OrLogicOperatorContext * ctx) override { 
        auto expr = std::dynamic_pointer_cast<Expression>(st_.top());
        expr->set_op_type(OR);
    }
    void exitOrLogicOperator(cruleParser::OrLogicOperatorContext * ctx) override { }

    void enterExpressionAtom(cruleParser::ExpressionAtomContext * ctx) override { }
    void exitExpressionAtom(cruleParser::ExpressionAtomContext * ctx) override { }

    void enterConstant(cruleParser::ConstantContext * ctx) override {
        auto c = std::make_shared<Constant>();
        c->set_crl_text(ctx->getText());
        st_.push(c);
    }
    void exitConstant(cruleParser::ConstantContext * ctx) override {
        auto c = st_.top();
        st_.pop();
        auto acceptor = st_.top();
        acceptor->accept(c);
    }

    void enterVariable(cruleParser::VariableContext * ctx) override { }
    void exitVariable(cruleParser::VariableContext * ctx) override { }

    void enterArrayMapSelector(cruleParser::ArrayMapSelectorContext * ctx) override { }
    void exitArrayMapSelector(cruleParser::ArrayMapSelectorContext * ctx) override { }

    void enterMemberVariable(cruleParser::MemberVariableContext * ctx) override { }
    void exitMemberVariable(cruleParser::MemberVariableContext * ctx) override { }

    void enterFunctionCall(cruleParser::FunctionCallContext * ctx) override { }
    void exitFunctionCall(cruleParser::FunctionCallContext * ctx) override { }

    void enterMethodCall(cruleParser::MethodCallContext * ctx) override { }
    void exitMethodCall(cruleParser::MethodCallContext * ctx) override { }

    void enterArgumentList(cruleParser::ArgumentListContext * ctx) override { }
    void exitArgumentList(cruleParser::ArgumentListContext * ctx) override { }

    void enterFloatLiteral(cruleParser::FloatLiteralContext * ctx) override { }
    void exitFloatLiteral(cruleParser::FloatLiteralContext * ctx) override {
        auto l = std::make_shared<FloatLiteral>();
        l->float_ = std::stof(ctx->getText());
        std::shared_ptr<Node> acceptor = st_.top();
        auto p = dynamic_cast<IFloatLiteralAcceptor*>(acceptor.get());
        if(p==nullptr) {
            error("bad cast to IFloatLiteralAcceptor: " + ctx->getText());
        }
        p->accept_float_literal(l);
    }

    void enterDecimalFloatLiteral(cruleParser::DecimalFloatLiteralContext * ctx) override { }
    void exitDecimalFloatLiteral(cruleParser::DecimalFloatLiteralContext * ctx) override { }

    void enterHexadecimalFloatLiteral(cruleParser::HexadecimalFloatLiteralContext * ctx) override { }
    void exitHexadecimalFloatLiteral(cruleParser::HexadecimalFloatLiteralContext * ctx) override { }

    void enterIntegerLiteral(cruleParser::IntegerLiteralContext * ctx) override { }
    void exitIntegerLiteral(cruleParser::IntegerLiteralContext * ctx) override {
        auto l = std::make_shared<IntegerLiteral>();
        l->int_ = std::stoi(ctx->getText());
        std::shared_ptr<Node> acceptor = st_.top();
        auto p = dynamic_cast<IIntegerLiteralAcceptor*>(acceptor.get());
        if(p==nullptr) {
            error("bad cast to IIntegerLiteralAcceptor: " + ctx->getText());
        }
        p->accept_int_literal(l);
    }

    void enterDecimalLiteral(cruleParser::DecimalLiteralContext * ctx) override { }
    void exitDecimalLiteral(cruleParser::DecimalLiteralContext * ctx) override { }

    void enterHexadecimalLiteral(cruleParser::HexadecimalLiteralContext * ctx) override { }
    void exitHexadecimalLiteral(cruleParser::HexadecimalLiteralContext * ctx) override { }

    void enterOctalLiteral(cruleParser::OctalLiteralContext * ctx) override { }
    void exitOctalLiteral(cruleParser::OctalLiteralContext * ctx) override { }

    void enterStringLiteral(cruleParser::StringLiteralContext * ctx) override { }
    void exitStringLiteral(cruleParser::StringLiteralContext * ctx) override {
        auto l = std::make_shared<StringLiteral>();
        l->string_ = ctx->getText();
        std::shared_ptr<Node> acceptor = st_.top();
        auto p = dynamic_cast<IStringLiteralAcceptor*>(acceptor.get());
        if(p==nullptr) {
            error("bad cast to IStringLiteralAcceptor: " + ctx->getText());
        }
        p->accept_string_literal(l);
    }

    void enterBooleanLiteral(cruleParser::BooleanLiteralContext * ctx) override { }
    void exitBooleanLiteral(cruleParser::BooleanLiteralContext * ctx) override {
        auto l = std::make_shared<BooleanLiteral>();
        l->bool_ = ctx->getText()=="true";
        std::shared_ptr<Node> acceptor = st_.top();
        auto p = dynamic_cast<IBooleanLiteralAcceptor*>(acceptor.get());
        if(p==nullptr) {
            error("bad cast to IBooleanLiteralAcceptor: " + ctx->getText());
        }
        p->accept_bool_literal(l);
    }


    void enterEveryRule(antlr4::ParserRuleContext * ctx) override { }
    void exitEveryRule(antlr4::ParserRuleContext * ctx) override { }
    void visitTerminal(antlr4::tree::TerminalNode * node) override { }
    void visitErrorNode(antlr4::tree::ErrorNode * node) override {
        error("Visiting error Node: " + node->getText());
    }
    std::shared_ptr<Crl> get_crl() {
        return crl_;
    }
private:
    std::stack<std::shared_ptr<Node>> st_;
    std::shared_ptr<Crl> crl_;
};

}

#endif