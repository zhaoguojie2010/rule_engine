
// Generated from crule.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"


namespace rule_engine {


class  cruleParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, PLUS = 2, MINUS = 3, DIV = 4, MUL = 5, MOD = 6, DOT = 7, SEMICOLON = 8, 
    LR_BRACE = 9, RR_BRACE = 10, LR_BRACKET = 11, RR_BRACKET = 12, LS_BRACKET = 13, 
    RS_BRACKET = 14, RULE = 15, IF = 16, IN = 17, THEN = 18, AND = 19, OR = 20, 
    TRUE = 21, FALSE = 22, NIL_LITERAL = 23, NEGATION = 24, SALIENCE = 25, 
    EQUALS = 26, ASSIGN = 27, PLUS_ASIGN = 28, MINUS_ASIGN = 29, DIV_ASIGN = 30, 
    MUL_ASIGN = 31, GT = 32, LT = 33, GTE = 34, LTE = 35, NOTEQUALS = 36, 
    BITAND = 37, BITOR = 38, SIMPLENAME = 39, DQUOTA_STRING = 40, SQUOTA_STRING = 41, 
    DECIMAL_FLOAT_LIT = 42, DECIMAL_EXPONENT = 43, HEX_FLOAT_LIT = 44, HEX_EXPONENT = 45, 
    DEC_LIT = 46, HEX_LIT = 47, OCT_LIT = 48, SPACE = 49, COMMENT = 50, 
    LINE_COMMENT = 51
  };

  enum {
    RuleCrl = 0, RuleRuleEntry = 1, RuleSalience = 2, RuleRuleName = 3, 
    RuleRuleDescription = 4, RuleIfScope = 5, RuleThenScope = 6, RuleThenExpressionList = 7, 
    RuleThenExpression = 8, RuleAssignment = 9, RuleExpression = 10, RuleMulDivOperators = 11, 
    RuleAddMinusOperators = 12, RuleComparisonOperator = 13, RuleAndLogicOperator = 14, 
    RuleOrLogicOperator = 15, RuleExpressionAtom = 16, RuleConstant = 17, 
    RuleVariable = 18, RuleArrayMapSelector = 19, RuleMemberVariable = 20, 
    RuleFunctionCall = 21, RuleMethodCall = 22, RuleArgumentList = 23, RuleFloatLiteral = 24, 
    RuleDecimalFloatLiteral = 25, RuleHexadecimalFloatLiteral = 26, RuleIntegerLiteral = 27, 
    RuleDecimalLiteral = 28, RuleHexadecimalLiteral = 29, RuleOctalLiteral = 30, 
    RuleStringLiteral = 31, RuleBooleanLiteral = 32
  };

  explicit cruleParser(antlr4::TokenStream *input);
  ~cruleParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class CrlContext;
  class RuleEntryContext;
  class SalienceContext;
  class RuleNameContext;
  class RuleDescriptionContext;
  class IfScopeContext;
  class ThenScopeContext;
  class ThenExpressionListContext;
  class ThenExpressionContext;
  class AssignmentContext;
  class ExpressionContext;
  class MulDivOperatorsContext;
  class AddMinusOperatorsContext;
  class ComparisonOperatorContext;
  class AndLogicOperatorContext;
  class OrLogicOperatorContext;
  class ExpressionAtomContext;
  class ConstantContext;
  class VariableContext;
  class ArrayMapSelectorContext;
  class MemberVariableContext;
  class FunctionCallContext;
  class MethodCallContext;
  class ArgumentListContext;
  class FloatLiteralContext;
  class DecimalFloatLiteralContext;
  class HexadecimalFloatLiteralContext;
  class IntegerLiteralContext;
  class DecimalLiteralContext;
  class HexadecimalLiteralContext;
  class OctalLiteralContext;
  class StringLiteralContext;
  class BooleanLiteralContext; 

  class  CrlContext : public antlr4::ParserRuleContext {
  public:
    CrlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<RuleEntryContext *> ruleEntry();
    RuleEntryContext* ruleEntry(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CrlContext* crl();

  class  RuleEntryContext : public antlr4::ParserRuleContext {
  public:
    RuleEntryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RULE();
    RuleNameContext *ruleName();
    antlr4::tree::TerminalNode *LR_BRACE();
    IfScopeContext *ifScope();
    ThenScopeContext *thenScope();
    antlr4::tree::TerminalNode *RR_BRACE();
    RuleDescriptionContext *ruleDescription();
    SalienceContext *salience();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuleEntryContext* ruleEntry();

  class  SalienceContext : public antlr4::ParserRuleContext {
  public:
    SalienceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SALIENCE();
    IntegerLiteralContext *integerLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SalienceContext* salience();

  class  RuleNameContext : public antlr4::ParserRuleContext {
  public:
    RuleNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLENAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuleNameContext* ruleName();

  class  RuleDescriptionContext : public antlr4::ParserRuleContext {
  public:
    RuleDescriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DQUOTA_STRING();
    antlr4::tree::TerminalNode *SQUOTA_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuleDescriptionContext* ruleDescription();

  class  IfScopeContext : public antlr4::ParserRuleContext {
  public:
    IfScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfScopeContext* ifScope();

  class  ThenScopeContext : public antlr4::ParserRuleContext {
  public:
    ThenScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THEN();
    ThenExpressionListContext *thenExpressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThenScopeContext* thenScope();

  class  ThenExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ThenExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ThenExpressionContext *> thenExpression();
    ThenExpressionContext* thenExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThenExpressionListContext* thenExpressionList();

  class  ThenExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentContext *assignment();
    ExpressionAtomContext *expressionAtom();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThenExpressionContext* thenExpression();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *PLUS_ASIGN();
    antlr4::tree::TerminalNode *MINUS_ASIGN();
    antlr4::tree::TerminalNode *DIV_ASIGN();
    antlr4::tree::TerminalNode *MUL_ASIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *NEGATION();
    ExpressionAtomContext *expressionAtom();
    MulDivOperatorsContext *mulDivOperators();
    AddMinusOperatorsContext *addMinusOperators();
    ComparisonOperatorContext *comparisonOperator();
    AndLogicOperatorContext *andLogicOperator();
    OrLogicOperatorContext *orLogicOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  MulDivOperatorsContext : public antlr4::ParserRuleContext {
  public:
    MulDivOperatorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulDivOperatorsContext* mulDivOperators();

  class  AddMinusOperatorsContext : public antlr4::ParserRuleContext {
  public:
    AddMinusOperatorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *BITAND();
    antlr4::tree::TerminalNode *BITOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddMinusOperatorsContext* addMinusOperators();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GTE();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *NOTEQUALS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  AndLogicOperatorContext : public antlr4::ParserRuleContext {
  public:
    AndLogicOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndLogicOperatorContext* andLogicOperator();

  class  OrLogicOperatorContext : public antlr4::ParserRuleContext {
  public:
    OrLogicOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrLogicOperatorContext* orLogicOperator();

  class  ExpressionAtomContext : public antlr4::ParserRuleContext {
  public:
    ExpressionAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    VariableContext *variable();
    FunctionCallContext *functionCall();
    antlr4::tree::TerminalNode *NEGATION();
    ExpressionAtomContext *expressionAtom();
    MethodCallContext *methodCall();
    MemberVariableContext *memberVariable();
    ArrayMapSelectorContext *arrayMapSelector();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionAtomContext* expressionAtom();
  ExpressionAtomContext* expressionAtom(int precedence);
  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringLiteralContext *stringLiteral();
    IntegerLiteralContext *integerLiteral();
    FloatLiteralContext *floatLiteral();
    BooleanLiteralContext *booleanLiteral();
    antlr4::tree::TerminalNode *NIL_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLENAME();
    VariableContext *variable();
    MemberVariableContext *memberVariable();
    ArrayMapSelectorContext *arrayMapSelector();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();
  VariableContext* variable(int precedence);
  class  ArrayMapSelectorContext : public antlr4::ParserRuleContext {
  public:
    ArrayMapSelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LS_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RS_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayMapSelectorContext* arrayMapSelector();

  class  MemberVariableContext : public antlr4::ParserRuleContext {
  public:
    MemberVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *SIMPLENAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberVariableContext* memberVariable();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIMPLENAME();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ArgumentListContext *argumentList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class  MethodCallContext : public antlr4::ParserRuleContext {
  public:
    MethodCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    FunctionCallContext *functionCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodCallContext* methodCall();

  class  ArgumentListContext : public antlr4::ParserRuleContext {
  public:
    ArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentListContext* argumentList();

  class  FloatLiteralContext : public antlr4::ParserRuleContext {
  public:
    FloatLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecimalFloatLiteralContext *decimalFloatLiteral();
    HexadecimalFloatLiteralContext *hexadecimalFloatLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatLiteralContext* floatLiteral();

  class  DecimalFloatLiteralContext : public antlr4::ParserRuleContext {
  public:
    DecimalFloatLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_FLOAT_LIT();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecimalFloatLiteralContext* decimalFloatLiteral();

  class  HexadecimalFloatLiteralContext : public antlr4::ParserRuleContext {
  public:
    HexadecimalFloatLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX_FLOAT_LIT();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HexadecimalFloatLiteralContext* hexadecimalFloatLiteral();

  class  IntegerLiteralContext : public antlr4::ParserRuleContext {
  public:
    IntegerLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecimalLiteralContext *decimalLiteral();
    HexadecimalLiteralContext *hexadecimalLiteral();
    OctalLiteralContext *octalLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerLiteralContext* integerLiteral();

  class  DecimalLiteralContext : public antlr4::ParserRuleContext {
  public:
    DecimalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC_LIT();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecimalLiteralContext* decimalLiteral();

  class  HexadecimalLiteralContext : public antlr4::ParserRuleContext {
  public:
    HexadecimalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX_LIT();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HexadecimalLiteralContext* hexadecimalLiteral();

  class  OctalLiteralContext : public antlr4::ParserRuleContext {
  public:
    OctalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OCT_LIT();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OctalLiteralContext* octalLiteral();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DQUOTA_STRING();
    antlr4::tree::TerminalNode *SQUOTA_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  BooleanLiteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanLiteralContext* booleanLiteral();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool expressionAtomSempred(ExpressionAtomContext *_localctx, size_t predicateIndex);
  bool variableSempred(VariableContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace rule_engine
