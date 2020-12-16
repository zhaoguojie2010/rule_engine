
// Generated from crule.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "cruleParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by cruleParser.
 */
class  cruleVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by cruleParser.
   */
    virtual antlrcpp::Any visitCrl(cruleParser::CrlContext *context) = 0;

    virtual antlrcpp::Any visitRuleEntry(cruleParser::RuleEntryContext *context) = 0;

    virtual antlrcpp::Any visitSalience(cruleParser::SalienceContext *context) = 0;

    virtual antlrcpp::Any visitRuleName(cruleParser::RuleNameContext *context) = 0;

    virtual antlrcpp::Any visitRuleDescription(cruleParser::RuleDescriptionContext *context) = 0;

    virtual antlrcpp::Any visitIfScope(cruleParser::IfScopeContext *context) = 0;

    virtual antlrcpp::Any visitThenScope(cruleParser::ThenScopeContext *context) = 0;

    virtual antlrcpp::Any visitThenExpressionList(cruleParser::ThenExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitThenExpression(cruleParser::ThenExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(cruleParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitExpression(cruleParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMulDivOperators(cruleParser::MulDivOperatorsContext *context) = 0;

    virtual antlrcpp::Any visitAddMinusOperators(cruleParser::AddMinusOperatorsContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperator(cruleParser::ComparisonOperatorContext *context) = 0;

    virtual antlrcpp::Any visitAndLogicOperator(cruleParser::AndLogicOperatorContext *context) = 0;

    virtual antlrcpp::Any visitOrLogicOperator(cruleParser::OrLogicOperatorContext *context) = 0;

    virtual antlrcpp::Any visitExpressionAtom(cruleParser::ExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitConstant(cruleParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitVariable(cruleParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitArrayMapSelector(cruleParser::ArrayMapSelectorContext *context) = 0;

    virtual antlrcpp::Any visitMemberVariable(cruleParser::MemberVariableContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(cruleParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitMethodCall(cruleParser::MethodCallContext *context) = 0;

    virtual antlrcpp::Any visitArgumentList(cruleParser::ArgumentListContext *context) = 0;

    virtual antlrcpp::Any visitFloatLiteral(cruleParser::FloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitDecimalFloatLiteral(cruleParser::DecimalFloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitHexadecimalFloatLiteral(cruleParser::HexadecimalFloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(cruleParser::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitDecimalLiteral(cruleParser::DecimalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitHexadecimalLiteral(cruleParser::HexadecimalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitOctalLiteral(cruleParser::OctalLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(cruleParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(cruleParser::BooleanLiteralContext *context) = 0;


};

