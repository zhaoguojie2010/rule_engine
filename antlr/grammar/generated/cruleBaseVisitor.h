
// Generated from crule.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "cruleVisitor.h"


namespace rule_engine {

/**
 * This class provides an empty implementation of cruleVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  cruleBaseVisitor : public cruleVisitor {
public:

  virtual antlrcpp::Any visitCrl(cruleParser::CrlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRuleEntry(cruleParser::RuleEntryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSalience(cruleParser::SalienceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRuleName(cruleParser::RuleNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRuleDescription(cruleParser::RuleDescriptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfScope(cruleParser::IfScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThenScope(cruleParser::ThenScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThenExpressionList(cruleParser::ThenExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThenExpression(cruleParser::ThenExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(cruleParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(cruleParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivOperators(cruleParser::MulDivOperatorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddMinusOperators(cruleParser::AddMinusOperatorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonOperator(cruleParser::ComparisonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndLogicOperator(cruleParser::AndLogicOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrLogicOperator(cruleParser::OrLogicOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionAtom(cruleParser::ExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(cruleParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(cruleParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayMapSelector(cruleParser::ArrayMapSelectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberVariable(cruleParser::MemberVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(cruleParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodCall(cruleParser::MethodCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgumentList(cruleParser::ArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatLiteral(cruleParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimalFloatLiteral(cruleParser::DecimalFloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHexadecimalFloatLiteral(cruleParser::HexadecimalFloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(cruleParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimalLiteral(cruleParser::DecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHexadecimalLiteral(cruleParser::HexadecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOctalLiteral(cruleParser::OctalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiteral(cruleParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanLiteral(cruleParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace rule_engine
