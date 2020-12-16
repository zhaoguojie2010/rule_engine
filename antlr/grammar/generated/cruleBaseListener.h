
// Generated from crule.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "cruleListener.h"


namespace rule_engine {

/**
 * This class provides an empty implementation of cruleListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  cruleBaseListener : public cruleListener {
public:

  virtual void enterCrl(cruleParser::CrlContext * /*ctx*/) override { }
  virtual void exitCrl(cruleParser::CrlContext * /*ctx*/) override { }

  virtual void enterRuleEntry(cruleParser::RuleEntryContext * /*ctx*/) override { }
  virtual void exitRuleEntry(cruleParser::RuleEntryContext * /*ctx*/) override { }

  virtual void enterSalience(cruleParser::SalienceContext * /*ctx*/) override { }
  virtual void exitSalience(cruleParser::SalienceContext * /*ctx*/) override { }

  virtual void enterRuleName(cruleParser::RuleNameContext * /*ctx*/) override { }
  virtual void exitRuleName(cruleParser::RuleNameContext * /*ctx*/) override { }

  virtual void enterRuleDescription(cruleParser::RuleDescriptionContext * /*ctx*/) override { }
  virtual void exitRuleDescription(cruleParser::RuleDescriptionContext * /*ctx*/) override { }

  virtual void enterIfScope(cruleParser::IfScopeContext * /*ctx*/) override { }
  virtual void exitIfScope(cruleParser::IfScopeContext * /*ctx*/) override { }

  virtual void enterThenScope(cruleParser::ThenScopeContext * /*ctx*/) override { }
  virtual void exitThenScope(cruleParser::ThenScopeContext * /*ctx*/) override { }

  virtual void enterThenExpressionList(cruleParser::ThenExpressionListContext * /*ctx*/) override { }
  virtual void exitThenExpressionList(cruleParser::ThenExpressionListContext * /*ctx*/) override { }

  virtual void enterThenExpression(cruleParser::ThenExpressionContext * /*ctx*/) override { }
  virtual void exitThenExpression(cruleParser::ThenExpressionContext * /*ctx*/) override { }

  virtual void enterAssignment(cruleParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(cruleParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExpression(cruleParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(cruleParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterMulDivOperators(cruleParser::MulDivOperatorsContext * /*ctx*/) override { }
  virtual void exitMulDivOperators(cruleParser::MulDivOperatorsContext * /*ctx*/) override { }

  virtual void enterAddMinusOperators(cruleParser::AddMinusOperatorsContext * /*ctx*/) override { }
  virtual void exitAddMinusOperators(cruleParser::AddMinusOperatorsContext * /*ctx*/) override { }

  virtual void enterComparisonOperator(cruleParser::ComparisonOperatorContext * /*ctx*/) override { }
  virtual void exitComparisonOperator(cruleParser::ComparisonOperatorContext * /*ctx*/) override { }

  virtual void enterAndLogicOperator(cruleParser::AndLogicOperatorContext * /*ctx*/) override { }
  virtual void exitAndLogicOperator(cruleParser::AndLogicOperatorContext * /*ctx*/) override { }

  virtual void enterOrLogicOperator(cruleParser::OrLogicOperatorContext * /*ctx*/) override { }
  virtual void exitOrLogicOperator(cruleParser::OrLogicOperatorContext * /*ctx*/) override { }

  virtual void enterExpressionAtom(cruleParser::ExpressionAtomContext * /*ctx*/) override { }
  virtual void exitExpressionAtom(cruleParser::ExpressionAtomContext * /*ctx*/) override { }

  virtual void enterConstant(cruleParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(cruleParser::ConstantContext * /*ctx*/) override { }

  virtual void enterVariable(cruleParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(cruleParser::VariableContext * /*ctx*/) override { }

  virtual void enterArrayMapSelector(cruleParser::ArrayMapSelectorContext * /*ctx*/) override { }
  virtual void exitArrayMapSelector(cruleParser::ArrayMapSelectorContext * /*ctx*/) override { }

  virtual void enterMemberVariable(cruleParser::MemberVariableContext * /*ctx*/) override { }
  virtual void exitMemberVariable(cruleParser::MemberVariableContext * /*ctx*/) override { }

  virtual void enterFunctionCall(cruleParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(cruleParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterMethodCall(cruleParser::MethodCallContext * /*ctx*/) override { }
  virtual void exitMethodCall(cruleParser::MethodCallContext * /*ctx*/) override { }

  virtual void enterArgumentList(cruleParser::ArgumentListContext * /*ctx*/) override { }
  virtual void exitArgumentList(cruleParser::ArgumentListContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(cruleParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(cruleParser::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterDecimalFloatLiteral(cruleParser::DecimalFloatLiteralContext * /*ctx*/) override { }
  virtual void exitDecimalFloatLiteral(cruleParser::DecimalFloatLiteralContext * /*ctx*/) override { }

  virtual void enterHexadecimalFloatLiteral(cruleParser::HexadecimalFloatLiteralContext * /*ctx*/) override { }
  virtual void exitHexadecimalFloatLiteral(cruleParser::HexadecimalFloatLiteralContext * /*ctx*/) override { }

  virtual void enterIntegerLiteral(cruleParser::IntegerLiteralContext * /*ctx*/) override { }
  virtual void exitIntegerLiteral(cruleParser::IntegerLiteralContext * /*ctx*/) override { }

  virtual void enterDecimalLiteral(cruleParser::DecimalLiteralContext * /*ctx*/) override { }
  virtual void exitDecimalLiteral(cruleParser::DecimalLiteralContext * /*ctx*/) override { }

  virtual void enterHexadecimalLiteral(cruleParser::HexadecimalLiteralContext * /*ctx*/) override { }
  virtual void exitHexadecimalLiteral(cruleParser::HexadecimalLiteralContext * /*ctx*/) override { }

  virtual void enterOctalLiteral(cruleParser::OctalLiteralContext * /*ctx*/) override { }
  virtual void exitOctalLiteral(cruleParser::OctalLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(cruleParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(cruleParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterBooleanLiteral(cruleParser::BooleanLiteralContext * /*ctx*/) override { }
  virtual void exitBooleanLiteral(cruleParser::BooleanLiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace rule_engine
