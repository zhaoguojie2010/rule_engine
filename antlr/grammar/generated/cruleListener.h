
// Generated from crule.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "cruleParser.h"


namespace rule_engine {

/**
 * This interface defines an abstract listener for a parse tree produced by cruleParser.
 */
class  cruleListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCrl(cruleParser::CrlContext *ctx) = 0;
  virtual void exitCrl(cruleParser::CrlContext *ctx) = 0;

  virtual void enterRuleEntry(cruleParser::RuleEntryContext *ctx) = 0;
  virtual void exitRuleEntry(cruleParser::RuleEntryContext *ctx) = 0;

  virtual void enterSalience(cruleParser::SalienceContext *ctx) = 0;
  virtual void exitSalience(cruleParser::SalienceContext *ctx) = 0;

  virtual void enterRuleName(cruleParser::RuleNameContext *ctx) = 0;
  virtual void exitRuleName(cruleParser::RuleNameContext *ctx) = 0;

  virtual void enterRuleDescription(cruleParser::RuleDescriptionContext *ctx) = 0;
  virtual void exitRuleDescription(cruleParser::RuleDescriptionContext *ctx) = 0;

  virtual void enterIfScope(cruleParser::IfScopeContext *ctx) = 0;
  virtual void exitIfScope(cruleParser::IfScopeContext *ctx) = 0;

  virtual void enterThenScope(cruleParser::ThenScopeContext *ctx) = 0;
  virtual void exitThenScope(cruleParser::ThenScopeContext *ctx) = 0;

  virtual void enterThenExpressionList(cruleParser::ThenExpressionListContext *ctx) = 0;
  virtual void exitThenExpressionList(cruleParser::ThenExpressionListContext *ctx) = 0;

  virtual void enterThenExpression(cruleParser::ThenExpressionContext *ctx) = 0;
  virtual void exitThenExpression(cruleParser::ThenExpressionContext *ctx) = 0;

  virtual void enterAssignment(cruleParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(cruleParser::AssignmentContext *ctx) = 0;

  virtual void enterExpression(cruleParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(cruleParser::ExpressionContext *ctx) = 0;

  virtual void enterMulDivOperators(cruleParser::MulDivOperatorsContext *ctx) = 0;
  virtual void exitMulDivOperators(cruleParser::MulDivOperatorsContext *ctx) = 0;

  virtual void enterAddMinusOperators(cruleParser::AddMinusOperatorsContext *ctx) = 0;
  virtual void exitAddMinusOperators(cruleParser::AddMinusOperatorsContext *ctx) = 0;

  virtual void enterComparisonOperator(cruleParser::ComparisonOperatorContext *ctx) = 0;
  virtual void exitComparisonOperator(cruleParser::ComparisonOperatorContext *ctx) = 0;

  virtual void enterAndLogicOperator(cruleParser::AndLogicOperatorContext *ctx) = 0;
  virtual void exitAndLogicOperator(cruleParser::AndLogicOperatorContext *ctx) = 0;

  virtual void enterOrLogicOperator(cruleParser::OrLogicOperatorContext *ctx) = 0;
  virtual void exitOrLogicOperator(cruleParser::OrLogicOperatorContext *ctx) = 0;

  virtual void enterExpressionAtom(cruleParser::ExpressionAtomContext *ctx) = 0;
  virtual void exitExpressionAtom(cruleParser::ExpressionAtomContext *ctx) = 0;

  virtual void enterConstants(cruleParser::ConstantsContext *ctx) = 0;
  virtual void exitConstants(cruleParser::ConstantsContext *ctx) = 0;

  virtual void enterConstant(cruleParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(cruleParser::ConstantContext *ctx) = 0;

  virtual void enterVariable(cruleParser::VariableContext *ctx) = 0;
  virtual void exitVariable(cruleParser::VariableContext *ctx) = 0;

  virtual void enterArrayMapSelector(cruleParser::ArrayMapSelectorContext *ctx) = 0;
  virtual void exitArrayMapSelector(cruleParser::ArrayMapSelectorContext *ctx) = 0;

  virtual void enterMemberVariable(cruleParser::MemberVariableContext *ctx) = 0;
  virtual void exitMemberVariable(cruleParser::MemberVariableContext *ctx) = 0;

  virtual void enterFunctionCall(cruleParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(cruleParser::FunctionCallContext *ctx) = 0;

  virtual void enterMethodCall(cruleParser::MethodCallContext *ctx) = 0;
  virtual void exitMethodCall(cruleParser::MethodCallContext *ctx) = 0;

  virtual void enterArgumentList(cruleParser::ArgumentListContext *ctx) = 0;
  virtual void exitArgumentList(cruleParser::ArgumentListContext *ctx) = 0;

  virtual void enterFloatLiteral(cruleParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(cruleParser::FloatLiteralContext *ctx) = 0;

  virtual void enterDecimalFloatLiteral(cruleParser::DecimalFloatLiteralContext *ctx) = 0;
  virtual void exitDecimalFloatLiteral(cruleParser::DecimalFloatLiteralContext *ctx) = 0;

  virtual void enterHexadecimalFloatLiteral(cruleParser::HexadecimalFloatLiteralContext *ctx) = 0;
  virtual void exitHexadecimalFloatLiteral(cruleParser::HexadecimalFloatLiteralContext *ctx) = 0;

  virtual void enterIntegerLiteral(cruleParser::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(cruleParser::IntegerLiteralContext *ctx) = 0;

  virtual void enterDecimalLiteral(cruleParser::DecimalLiteralContext *ctx) = 0;
  virtual void exitDecimalLiteral(cruleParser::DecimalLiteralContext *ctx) = 0;

  virtual void enterHexadecimalLiteral(cruleParser::HexadecimalLiteralContext *ctx) = 0;
  virtual void exitHexadecimalLiteral(cruleParser::HexadecimalLiteralContext *ctx) = 0;

  virtual void enterOctalLiteral(cruleParser::OctalLiteralContext *ctx) = 0;
  virtual void exitOctalLiteral(cruleParser::OctalLiteralContext *ctx) = 0;

  virtual void enterStringLiteral(cruleParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(cruleParser::StringLiteralContext *ctx) = 0;

  virtual void enterBooleanLiteral(cruleParser::BooleanLiteralContext *ctx) = 0;
  virtual void exitBooleanLiteral(cruleParser::BooleanLiteralContext *ctx) = 0;


};

}  // namespace rule_engine
