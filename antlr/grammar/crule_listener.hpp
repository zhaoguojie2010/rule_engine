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
    void enterCrl(cruleParser::CrlContext * ctx) override { 
        auto crl = std::make_shared<Crl>();
        st_.push(crl);
    }
    void exitCrl(cruleParser::CrlContext * ctx) override { 
        auto crl = st_.top();
        st_.pop();

        crl_ = std::dynamic_pointer_cast<Crl>(crl);
    }

    void enterRuleEntry(cruleParser::RuleEntryContext * ctx) override { 
        auto entry = std::make_shared<RuleEntry>();
        entry->set_crl_text(ctx->getText());
        st_.push(entry);
    }
    void exitRuleEntry(cruleParser::RuleEntryContext * ctx) override { 
        std::shared_ptr<Node> entry = st_.top();
        st_.pop();

        std::shared_ptr<Node> acceptor = st_.top();
        assert_type_semantic<IRuleEntryAcceptor>(acceptor, "bad cast to IRuleEntryAcceptor: " + ctx->getText());
        auto acc = std::dynamic_pointer_cast<IRuleEntryAcceptor>(acceptor);
        acc->accept_rule_entry(std::dynamic_pointer_cast<RuleEntry>(entry));
    }

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
        st_.pop();

        std::shared_ptr<Node> acceptor = st_.top();
        assert_type_semantic<IIfScopeAcceptor>(acceptor, "bad cast to IIfScopeAcceptor: " + ctx->getText());
        auto acc = std::dynamic_pointer_cast<IIfScopeAcceptor>(acceptor);
        acc->accept_if_scope(std::dynamic_pointer_cast<IfScope>(if_scope));
    }

    void enterThenScope(cruleParser::ThenScopeContext * ctx) override { 
        auto then_scope = std::make_shared<ThenScope>();
        then_scope->set_crl_text(ctx->getText());
        st_.push(then_scope);
    }
    void exitThenScope(cruleParser::ThenScopeContext * ctx) override { 
        std::shared_ptr<Node> then_scope = st_.top();
        st_.pop();

        std::shared_ptr<Node> acceptor = st_.top();
        assert_type_semantic<IThenScopeAcceptor>(acceptor, "bad cast to IThenScopeAcceptor: " + ctx->getText());
        auto acc = std::dynamic_pointer_cast<IThenScopeAcceptor>(acceptor);
        acc->accept_then_scope(std::dynamic_pointer_cast<ThenScope>(then_scope));
    }

    void enterThenExpressionList(cruleParser::ThenExpressionListContext * ctx) override { 
        auto expressions = std::make_shared<ThenExpressions>();
        expressions->set_crl_text(ctx->getText());
        st_.push(expressions);
    }
    void exitThenExpressionList(cruleParser::ThenExpressionListContext * ctx) override { 
        std::shared_ptr<Node> expressions = st_.top();
        st_.pop();

        std::shared_ptr<Node> acceptor = st_.top();
        assert_type_semantic<IThenExpressionsAcceptor>(acceptor, "bad cast to IThenExpressionsAcceptor: " + ctx->getText());
        auto acc = std::dynamic_pointer_cast<IThenExpressionsAcceptor>(acceptor);
        acc->accept_then_expressions(std::dynamic_pointer_cast<ThenExpressions>(expressions));
    }

    void enterThenExpression(cruleParser::ThenExpressionContext * ctx) override { 
        auto expression = std::make_shared<ThenExpression>();
        expression->set_crl_text(ctx->getText());
        st_.push(expression);
    }
    void exitThenExpression(cruleParser::ThenExpressionContext * ctx) override { 
        std::shared_ptr<Node> expression = st_.top();
        st_.pop();

        std::shared_ptr<Node> acceptor = st_.top();
        assert_type_semantic<IThenExpressionAcceptor>(acceptor, "bad cast to IThenExpressionAcceptor: " + ctx->getText());
        auto acc = std::dynamic_pointer_cast<IThenExpressionAcceptor>(acceptor);
        acc->accept_then_expression(std::dynamic_pointer_cast<ThenExpression>(expression));
    }

    void enterAssignment(cruleParser::AssignmentContext * ctx) override { 
        auto assignment = std::make_shared<Assignment>();
        assignment->set_crl_text(ctx->getText());
        st_.push(assignment);
    }
    void exitAssignment(cruleParser::AssignmentContext * ctx) override { 
        std::shared_ptr<Node> assignment = st_.top();
        st_.pop();

        std::shared_ptr<Node> acceptor = st_.top();
        assert_type_semantic<IAssignmentAcceptor>(acceptor, "bad cast to IAssignmentAcceptor: " + ctx->getText());
        auto acc = std::dynamic_pointer_cast<IAssignmentAcceptor>(acceptor);
        acc->accept_assignment(std::dynamic_pointer_cast<Assignment>(assignment));
    }

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
        assert_type_semantic<IExpressionAcceptor>(acceptor, "bad cast to IExpressionAcceptor");
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

    void enterExpressionAtom(cruleParser::ExpressionAtomContext * ctx) override { 
        auto expr_atom = std::make_shared<ExpressionAtom>();
        expr_atom->set_crl_text(ctx->getText());
        st_.push(expr_atom);
    }
    void exitExpressionAtom(cruleParser::ExpressionAtomContext * ctx) override { 
        auto atom = std::dynamic_pointer_cast<ExpressionAtom>(st_.top());
        st_.pop();

        auto acceptor = st_.top();
        assert_type_semantic<IExpressionAtomAcceptor>(acceptor, "bad cast to IExpressionAtomAcceptor");
        std::dynamic_pointer_cast<IExpressionAtomAcceptor>(acceptor)->accept_expression_atom(atom);
    }

    void enterConstant(cruleParser::ConstantContext * ctx) override {
        auto c = std::make_shared<Constant>();
        c->set_crl_text(ctx->getText());
        st_.push(c);
    }
    void exitConstant(cruleParser::ConstantContext * ctx) override {
        auto c = std::dynamic_pointer_cast<Constant>(st_.top());
        st_.pop();

        auto acceptor = st_.top();
        assert_type_semantic<IConstantAcceptor>(acceptor, "bad cast to IConstantAcceptor");
        std::dynamic_pointer_cast<IConstantAcceptor>(acceptor)->accept_constant(c);
    }

    void enterVariable(cruleParser::VariableContext * ctx) override { 
        auto var = std::make_shared<Variable>();
        var->set_crl_text(ctx->getText());
        if(ctx->SIMPLENAME() && !ctx->SIMPLENAME()->getText().empty()) {
            var->set_name(ctx->SIMPLENAME()->getText());
        }
        st_.push(var);
    }
    void exitVariable(cruleParser::VariableContext * ctx) override { 
        auto var = std::dynamic_pointer_cast<Variable>(st_.top());
        st_.pop();

        auto acceptor = st_.top();
        assert_type_semantic<IVariableAcceptor>(acceptor, "bad cast to IVariableAcceptor");
        std::dynamic_pointer_cast<IVariableAcceptor>(acceptor)->accept_variable(var);
    }

    void enterArrayMapSelector(cruleParser::ArrayMapSelectorContext * ctx) override { }
    void exitArrayMapSelector(cruleParser::ArrayMapSelectorContext * ctx) override { }

    void enterMemberVariable(cruleParser::MemberVariableContext * ctx) override { }
    void exitMemberVariable(cruleParser::MemberVariableContext * ctx) override { 
        auto acceptor = st_.top();
        assert_type_semantic<IMemberVariableAcceptor>(acceptor, "bad cast to IVariableAcceptor");
        std::dynamic_pointer_cast<IMemberVariableAcceptor>(acceptor)->accept_member_variable(ctx->SIMPLENAME()->getText());
    }

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
        l->string_ = l->string_.substr(1, l->string_.size()-2);
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