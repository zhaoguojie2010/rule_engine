
// Generated from crule.g4 by ANTLR 4.9


#include "cruleListener.h"
#include "cruleVisitor.h"

#include "cruleParser.h"


using namespace antlrcpp;
using namespace rule_engine;
using namespace antlr4;

cruleParser::cruleParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

cruleParser::~cruleParser() {
  delete _interpreter;
}

std::string cruleParser::getGrammarFileName() const {
  return "crule.g4";
}

const std::vector<std::string>& cruleParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& cruleParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CrlContext ------------------------------------------------------------------

cruleParser::CrlContext::CrlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::CrlContext::EOF() {
  return getToken(cruleParser::EOF, 0);
}

std::vector<cruleParser::RuleEntryContext *> cruleParser::CrlContext::ruleEntry() {
  return getRuleContexts<cruleParser::RuleEntryContext>();
}

cruleParser::RuleEntryContext* cruleParser::CrlContext::ruleEntry(size_t i) {
  return getRuleContext<cruleParser::RuleEntryContext>(i);
}


size_t cruleParser::CrlContext::getRuleIndex() const {
  return cruleParser::RuleCrl;
}

void cruleParser::CrlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCrl(this);
}

void cruleParser::CrlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCrl(this);
}


antlrcpp::Any cruleParser::CrlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitCrl(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::CrlContext* cruleParser::crl() {
  CrlContext *_localctx = _tracker.createInstance<CrlContext>(_ctx, getState());
  enterRule(_localctx, 0, cruleParser::RuleCrl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cruleParser::RULE) {
      setState(68);
      ruleEntry();
      setState(73);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(74);
    match(cruleParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleEntryContext ------------------------------------------------------------------

cruleParser::RuleEntryContext::RuleEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::RuleEntryContext::RULE() {
  return getToken(cruleParser::RULE, 0);
}

cruleParser::RuleNameContext* cruleParser::RuleEntryContext::ruleName() {
  return getRuleContext<cruleParser::RuleNameContext>(0);
}

tree::TerminalNode* cruleParser::RuleEntryContext::LR_BRACE() {
  return getToken(cruleParser::LR_BRACE, 0);
}

cruleParser::IfScopeContext* cruleParser::RuleEntryContext::ifScope() {
  return getRuleContext<cruleParser::IfScopeContext>(0);
}

cruleParser::ThenScopeContext* cruleParser::RuleEntryContext::thenScope() {
  return getRuleContext<cruleParser::ThenScopeContext>(0);
}

tree::TerminalNode* cruleParser::RuleEntryContext::RR_BRACE() {
  return getToken(cruleParser::RR_BRACE, 0);
}

cruleParser::RuleDescriptionContext* cruleParser::RuleEntryContext::ruleDescription() {
  return getRuleContext<cruleParser::RuleDescriptionContext>(0);
}

cruleParser::SalienceContext* cruleParser::RuleEntryContext::salience() {
  return getRuleContext<cruleParser::SalienceContext>(0);
}


size_t cruleParser::RuleEntryContext::getRuleIndex() const {
  return cruleParser::RuleRuleEntry;
}

void cruleParser::RuleEntryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleEntry(this);
}

void cruleParser::RuleEntryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleEntry(this);
}


antlrcpp::Any cruleParser::RuleEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitRuleEntry(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::RuleEntryContext* cruleParser::ruleEntry() {
  RuleEntryContext *_localctx = _tracker.createInstance<RuleEntryContext>(_ctx, getState());
  enterRule(_localctx, 2, cruleParser::RuleRuleEntry);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(cruleParser::RULE);
    setState(77);
    ruleName();
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cruleParser::DQUOTA_STRING

    || _la == cruleParser::SQUOTA_STRING) {
      setState(78);
      ruleDescription();
    }
    setState(82);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cruleParser::SALIENCE) {
      setState(81);
      salience();
    }
    setState(84);
    match(cruleParser::LR_BRACE);
    setState(85);
    ifScope();
    setState(86);
    thenScope();
    setState(87);
    match(cruleParser::RR_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SalienceContext ------------------------------------------------------------------

cruleParser::SalienceContext::SalienceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::SalienceContext::SALIENCE() {
  return getToken(cruleParser::SALIENCE, 0);
}

cruleParser::IntegerLiteralContext* cruleParser::SalienceContext::integerLiteral() {
  return getRuleContext<cruleParser::IntegerLiteralContext>(0);
}


size_t cruleParser::SalienceContext::getRuleIndex() const {
  return cruleParser::RuleSalience;
}

void cruleParser::SalienceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSalience(this);
}

void cruleParser::SalienceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSalience(this);
}


antlrcpp::Any cruleParser::SalienceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitSalience(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::SalienceContext* cruleParser::salience() {
  SalienceContext *_localctx = _tracker.createInstance<SalienceContext>(_ctx, getState());
  enterRule(_localctx, 4, cruleParser::RuleSalience);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(cruleParser::SALIENCE);
    setState(90);
    integerLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleNameContext ------------------------------------------------------------------

cruleParser::RuleNameContext::RuleNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::RuleNameContext::SIMPLENAME() {
  return getToken(cruleParser::SIMPLENAME, 0);
}


size_t cruleParser::RuleNameContext::getRuleIndex() const {
  return cruleParser::RuleRuleName;
}

void cruleParser::RuleNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleName(this);
}

void cruleParser::RuleNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleName(this);
}


antlrcpp::Any cruleParser::RuleNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitRuleName(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::RuleNameContext* cruleParser::ruleName() {
  RuleNameContext *_localctx = _tracker.createInstance<RuleNameContext>(_ctx, getState());
  enterRule(_localctx, 6, cruleParser::RuleRuleName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(cruleParser::SIMPLENAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleDescriptionContext ------------------------------------------------------------------

cruleParser::RuleDescriptionContext::RuleDescriptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::RuleDescriptionContext::DQUOTA_STRING() {
  return getToken(cruleParser::DQUOTA_STRING, 0);
}

tree::TerminalNode* cruleParser::RuleDescriptionContext::SQUOTA_STRING() {
  return getToken(cruleParser::SQUOTA_STRING, 0);
}


size_t cruleParser::RuleDescriptionContext::getRuleIndex() const {
  return cruleParser::RuleRuleDescription;
}

void cruleParser::RuleDescriptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleDescription(this);
}

void cruleParser::RuleDescriptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleDescription(this);
}


antlrcpp::Any cruleParser::RuleDescriptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitRuleDescription(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::RuleDescriptionContext* cruleParser::ruleDescription() {
  RuleDescriptionContext *_localctx = _tracker.createInstance<RuleDescriptionContext>(_ctx, getState());
  enterRule(_localctx, 8, cruleParser::RuleRuleDescription);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    _la = _input->LA(1);
    if (!(_la == cruleParser::DQUOTA_STRING

    || _la == cruleParser::SQUOTA_STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfScopeContext ------------------------------------------------------------------

cruleParser::IfScopeContext::IfScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::IfScopeContext::IF() {
  return getToken(cruleParser::IF, 0);
}

cruleParser::ExpressionContext* cruleParser::IfScopeContext::expression() {
  return getRuleContext<cruleParser::ExpressionContext>(0);
}


size_t cruleParser::IfScopeContext::getRuleIndex() const {
  return cruleParser::RuleIfScope;
}

void cruleParser::IfScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfScope(this);
}

void cruleParser::IfScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfScope(this);
}


antlrcpp::Any cruleParser::IfScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitIfScope(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::IfScopeContext* cruleParser::ifScope() {
  IfScopeContext *_localctx = _tracker.createInstance<IfScopeContext>(_ctx, getState());
  enterRule(_localctx, 10, cruleParser::RuleIfScope);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(cruleParser::IF);
    setState(97);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThenScopeContext ------------------------------------------------------------------

cruleParser::ThenScopeContext::ThenScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::ThenScopeContext::THEN() {
  return getToken(cruleParser::THEN, 0);
}

cruleParser::ThenExpressionListContext* cruleParser::ThenScopeContext::thenExpressionList() {
  return getRuleContext<cruleParser::ThenExpressionListContext>(0);
}


size_t cruleParser::ThenScopeContext::getRuleIndex() const {
  return cruleParser::RuleThenScope;
}

void cruleParser::ThenScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThenScope(this);
}

void cruleParser::ThenScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThenScope(this);
}


antlrcpp::Any cruleParser::ThenScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitThenScope(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::ThenScopeContext* cruleParser::thenScope() {
  ThenScopeContext *_localctx = _tracker.createInstance<ThenScopeContext>(_ctx, getState());
  enterRule(_localctx, 12, cruleParser::RuleThenScope);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(cruleParser::THEN);
    setState(100);
    thenExpressionList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThenExpressionListContext ------------------------------------------------------------------

cruleParser::ThenExpressionListContext::ThenExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cruleParser::ThenExpressionContext *> cruleParser::ThenExpressionListContext::thenExpression() {
  return getRuleContexts<cruleParser::ThenExpressionContext>();
}

cruleParser::ThenExpressionContext* cruleParser::ThenExpressionListContext::thenExpression(size_t i) {
  return getRuleContext<cruleParser::ThenExpressionContext>(i);
}

std::vector<tree::TerminalNode *> cruleParser::ThenExpressionListContext::SEMICOLON() {
  return getTokens(cruleParser::SEMICOLON);
}

tree::TerminalNode* cruleParser::ThenExpressionListContext::SEMICOLON(size_t i) {
  return getToken(cruleParser::SEMICOLON, i);
}


size_t cruleParser::ThenExpressionListContext::getRuleIndex() const {
  return cruleParser::RuleThenExpressionList;
}

void cruleParser::ThenExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThenExpressionList(this);
}

void cruleParser::ThenExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThenExpressionList(this);
}


antlrcpp::Any cruleParser::ThenExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitThenExpressionList(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::ThenExpressionListContext* cruleParser::thenExpressionList() {
  ThenExpressionListContext *_localctx = _tracker.createInstance<ThenExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 14, cruleParser::RuleThenExpressionList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(102);
      thenExpression();
      setState(103);
      match(cruleParser::SEMICOLON);
      setState(107); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cruleParser::MINUS)
      | (1ULL << cruleParser::TRUE)
      | (1ULL << cruleParser::FALSE)
      | (1ULL << cruleParser::NIL_LITERAL)
      | (1ULL << cruleParser::NEGATION)
      | (1ULL << cruleParser::SIMPLENAME)
      | (1ULL << cruleParser::DQUOTA_STRING)
      | (1ULL << cruleParser::SQUOTA_STRING)
      | (1ULL << cruleParser::DECIMAL_FLOAT_LIT)
      | (1ULL << cruleParser::HEX_FLOAT_LIT)
      | (1ULL << cruleParser::DEC_LIT)
      | (1ULL << cruleParser::HEX_LIT)
      | (1ULL << cruleParser::OCT_LIT))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThenExpressionContext ------------------------------------------------------------------

cruleParser::ThenExpressionContext::ThenExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cruleParser::AssignmentContext* cruleParser::ThenExpressionContext::assignment() {
  return getRuleContext<cruleParser::AssignmentContext>(0);
}

cruleParser::ExpressionAtomContext* cruleParser::ThenExpressionContext::expressionAtom() {
  return getRuleContext<cruleParser::ExpressionAtomContext>(0);
}


size_t cruleParser::ThenExpressionContext::getRuleIndex() const {
  return cruleParser::RuleThenExpression;
}

void cruleParser::ThenExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThenExpression(this);
}

void cruleParser::ThenExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThenExpression(this);
}


antlrcpp::Any cruleParser::ThenExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitThenExpression(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::ThenExpressionContext* cruleParser::thenExpression() {
  ThenExpressionContext *_localctx = _tracker.createInstance<ThenExpressionContext>(_ctx, getState());
  enterRule(_localctx, 16, cruleParser::RuleThenExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(109);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(110);
      expressionAtom(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

cruleParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cruleParser::VariableContext* cruleParser::AssignmentContext::variable() {
  return getRuleContext<cruleParser::VariableContext>(0);
}

cruleParser::ExpressionContext* cruleParser::AssignmentContext::expression() {
  return getRuleContext<cruleParser::ExpressionContext>(0);
}

tree::TerminalNode* cruleParser::AssignmentContext::ASSIGN() {
  return getToken(cruleParser::ASSIGN, 0);
}

tree::TerminalNode* cruleParser::AssignmentContext::PLUS_ASIGN() {
  return getToken(cruleParser::PLUS_ASIGN, 0);
}

tree::TerminalNode* cruleParser::AssignmentContext::MINUS_ASIGN() {
  return getToken(cruleParser::MINUS_ASIGN, 0);
}

tree::TerminalNode* cruleParser::AssignmentContext::DIV_ASIGN() {
  return getToken(cruleParser::DIV_ASIGN, 0);
}

tree::TerminalNode* cruleParser::AssignmentContext::MUL_ASIGN() {
  return getToken(cruleParser::MUL_ASIGN, 0);
}

tree::TerminalNode* cruleParser::AssignmentContext::MOD_ASIGN() {
  return getToken(cruleParser::MOD_ASIGN, 0);
}


size_t cruleParser::AssignmentContext::getRuleIndex() const {
  return cruleParser::RuleAssignment;
}

void cruleParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void cruleParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


antlrcpp::Any cruleParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::AssignmentContext* cruleParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 18, cruleParser::RuleAssignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    variable(0);
    setState(114);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cruleParser::ASSIGN)
      | (1ULL << cruleParser::PLUS_ASIGN)
      | (1ULL << cruleParser::MINUS_ASIGN)
      | (1ULL << cruleParser::DIV_ASIGN)
      | (1ULL << cruleParser::MUL_ASIGN)
      | (1ULL << cruleParser::MOD_ASIGN))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(115);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

cruleParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::ExpressionContext::LR_BRACKET() {
  return getToken(cruleParser::LR_BRACKET, 0);
}

std::vector<cruleParser::ExpressionContext *> cruleParser::ExpressionContext::expression() {
  return getRuleContexts<cruleParser::ExpressionContext>();
}

cruleParser::ExpressionContext* cruleParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<cruleParser::ExpressionContext>(i);
}

tree::TerminalNode* cruleParser::ExpressionContext::RR_BRACKET() {
  return getToken(cruleParser::RR_BRACKET, 0);
}

tree::TerminalNode* cruleParser::ExpressionContext::NEGATION() {
  return getToken(cruleParser::NEGATION, 0);
}

cruleParser::ExpressionAtomContext* cruleParser::ExpressionContext::expressionAtom() {
  return getRuleContext<cruleParser::ExpressionAtomContext>(0);
}

cruleParser::VariableContext* cruleParser::ExpressionContext::variable() {
  return getRuleContext<cruleParser::VariableContext>(0);
}

tree::TerminalNode* cruleParser::ExpressionContext::IN() {
  return getToken(cruleParser::IN, 0);
}

tree::TerminalNode* cruleParser::ExpressionContext::LS_BRACKET() {
  return getToken(cruleParser::LS_BRACKET, 0);
}

cruleParser::ConstantsContext* cruleParser::ExpressionContext::constants() {
  return getRuleContext<cruleParser::ConstantsContext>(0);
}

tree::TerminalNode* cruleParser::ExpressionContext::RS_BRACKET() {
  return getToken(cruleParser::RS_BRACKET, 0);
}

cruleParser::MulDivOperatorsContext* cruleParser::ExpressionContext::mulDivOperators() {
  return getRuleContext<cruleParser::MulDivOperatorsContext>(0);
}

cruleParser::AddMinusOperatorsContext* cruleParser::ExpressionContext::addMinusOperators() {
  return getRuleContext<cruleParser::AddMinusOperatorsContext>(0);
}

cruleParser::ComparisonOperatorContext* cruleParser::ExpressionContext::comparisonOperator() {
  return getRuleContext<cruleParser::ComparisonOperatorContext>(0);
}

cruleParser::AndLogicOperatorContext* cruleParser::ExpressionContext::andLogicOperator() {
  return getRuleContext<cruleParser::AndLogicOperatorContext>(0);
}

cruleParser::OrLogicOperatorContext* cruleParser::ExpressionContext::orLogicOperator() {
  return getRuleContext<cruleParser::OrLogicOperatorContext>(0);
}


size_t cruleParser::ExpressionContext::getRuleIndex() const {
  return cruleParser::RuleExpression;
}

void cruleParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void cruleParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any cruleParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


cruleParser::ExpressionContext* cruleParser::expression() {
   return expression(0);
}

cruleParser::ExpressionContext* cruleParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  cruleParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  cruleParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, cruleParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(132);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(119);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == cruleParser::NEGATION) {
        setState(118);
        match(cruleParser::NEGATION);
      }
      setState(121);
      match(cruleParser::LR_BRACKET);
      setState(122);
      expression(0);
      setState(123);
      match(cruleParser::RR_BRACKET);
      break;
    }

    case 2: {
      setState(125);
      expressionAtom(0);
      break;
    }

    case 3: {
      setState(126);
      variable(0);
      setState(127);
      match(cruleParser::IN);
      setState(128);
      match(cruleParser::LS_BRACKET);
      setState(129);
      constants();
      setState(130);
      match(cruleParser::RS_BRACKET);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(156);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(154);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(134);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(135);
          mulDivOperators();
          setState(136);
          expression(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(138);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(139);
          addMinusOperators();
          setState(140);
          expression(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(142);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(143);
          comparisonOperator();
          setState(144);
          expression(7);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(146);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(147);
          andLogicOperator();
          setState(148);
          expression(6);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(150);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(151);
          orLogicOperator();
          setState(152);
          expression(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(158);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MulDivOperatorsContext ------------------------------------------------------------------

cruleParser::MulDivOperatorsContext::MulDivOperatorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::MulDivOperatorsContext::MUL() {
  return getToken(cruleParser::MUL, 0);
}

tree::TerminalNode* cruleParser::MulDivOperatorsContext::DIV() {
  return getToken(cruleParser::DIV, 0);
}

tree::TerminalNode* cruleParser::MulDivOperatorsContext::MOD() {
  return getToken(cruleParser::MOD, 0);
}


size_t cruleParser::MulDivOperatorsContext::getRuleIndex() const {
  return cruleParser::RuleMulDivOperators;
}

void cruleParser::MulDivOperatorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDivOperators(this);
}

void cruleParser::MulDivOperatorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDivOperators(this);
}


antlrcpp::Any cruleParser::MulDivOperatorsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitMulDivOperators(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::MulDivOperatorsContext* cruleParser::mulDivOperators() {
  MulDivOperatorsContext *_localctx = _tracker.createInstance<MulDivOperatorsContext>(_ctx, getState());
  enterRule(_localctx, 22, cruleParser::RuleMulDivOperators);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cruleParser::DIV)
      | (1ULL << cruleParser::MUL)
      | (1ULL << cruleParser::MOD))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddMinusOperatorsContext ------------------------------------------------------------------

cruleParser::AddMinusOperatorsContext::AddMinusOperatorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::AddMinusOperatorsContext::PLUS() {
  return getToken(cruleParser::PLUS, 0);
}

tree::TerminalNode* cruleParser::AddMinusOperatorsContext::MINUS() {
  return getToken(cruleParser::MINUS, 0);
}

tree::TerminalNode* cruleParser::AddMinusOperatorsContext::BITAND() {
  return getToken(cruleParser::BITAND, 0);
}

tree::TerminalNode* cruleParser::AddMinusOperatorsContext::BITOR() {
  return getToken(cruleParser::BITOR, 0);
}


size_t cruleParser::AddMinusOperatorsContext::getRuleIndex() const {
  return cruleParser::RuleAddMinusOperators;
}

void cruleParser::AddMinusOperatorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddMinusOperators(this);
}

void cruleParser::AddMinusOperatorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddMinusOperators(this);
}


antlrcpp::Any cruleParser::AddMinusOperatorsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitAddMinusOperators(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::AddMinusOperatorsContext* cruleParser::addMinusOperators() {
  AddMinusOperatorsContext *_localctx = _tracker.createInstance<AddMinusOperatorsContext>(_ctx, getState());
  enterRule(_localctx, 24, cruleParser::RuleAddMinusOperators);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cruleParser::PLUS)
      | (1ULL << cruleParser::MINUS)
      | (1ULL << cruleParser::BITAND)
      | (1ULL << cruleParser::BITOR))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonOperatorContext ------------------------------------------------------------------

cruleParser::ComparisonOperatorContext::ComparisonOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::ComparisonOperatorContext::GT() {
  return getToken(cruleParser::GT, 0);
}

tree::TerminalNode* cruleParser::ComparisonOperatorContext::LT() {
  return getToken(cruleParser::LT, 0);
}

tree::TerminalNode* cruleParser::ComparisonOperatorContext::GTE() {
  return getToken(cruleParser::GTE, 0);
}

tree::TerminalNode* cruleParser::ComparisonOperatorContext::LTE() {
  return getToken(cruleParser::LTE, 0);
}

tree::TerminalNode* cruleParser::ComparisonOperatorContext::EQUALS() {
  return getToken(cruleParser::EQUALS, 0);
}

tree::TerminalNode* cruleParser::ComparisonOperatorContext::NOTEQUALS() {
  return getToken(cruleParser::NOTEQUALS, 0);
}


size_t cruleParser::ComparisonOperatorContext::getRuleIndex() const {
  return cruleParser::RuleComparisonOperator;
}

void cruleParser::ComparisonOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonOperator(this);
}

void cruleParser::ComparisonOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonOperator(this);
}


antlrcpp::Any cruleParser::ComparisonOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitComparisonOperator(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::ComparisonOperatorContext* cruleParser::comparisonOperator() {
  ComparisonOperatorContext *_localctx = _tracker.createInstance<ComparisonOperatorContext>(_ctx, getState());
  enterRule(_localctx, 26, cruleParser::RuleComparisonOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cruleParser::EQUALS)
      | (1ULL << cruleParser::GT)
      | (1ULL << cruleParser::LT)
      | (1ULL << cruleParser::GTE)
      | (1ULL << cruleParser::LTE)
      | (1ULL << cruleParser::NOTEQUALS))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndLogicOperatorContext ------------------------------------------------------------------

cruleParser::AndLogicOperatorContext::AndLogicOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::AndLogicOperatorContext::AND() {
  return getToken(cruleParser::AND, 0);
}


size_t cruleParser::AndLogicOperatorContext::getRuleIndex() const {
  return cruleParser::RuleAndLogicOperator;
}

void cruleParser::AndLogicOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndLogicOperator(this);
}

void cruleParser::AndLogicOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndLogicOperator(this);
}


antlrcpp::Any cruleParser::AndLogicOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitAndLogicOperator(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::AndLogicOperatorContext* cruleParser::andLogicOperator() {
  AndLogicOperatorContext *_localctx = _tracker.createInstance<AndLogicOperatorContext>(_ctx, getState());
  enterRule(_localctx, 28, cruleParser::RuleAndLogicOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(cruleParser::AND);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrLogicOperatorContext ------------------------------------------------------------------

cruleParser::OrLogicOperatorContext::OrLogicOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::OrLogicOperatorContext::OR() {
  return getToken(cruleParser::OR, 0);
}


size_t cruleParser::OrLogicOperatorContext::getRuleIndex() const {
  return cruleParser::RuleOrLogicOperator;
}

void cruleParser::OrLogicOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrLogicOperator(this);
}

void cruleParser::OrLogicOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrLogicOperator(this);
}


antlrcpp::Any cruleParser::OrLogicOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitOrLogicOperator(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::OrLogicOperatorContext* cruleParser::orLogicOperator() {
  OrLogicOperatorContext *_localctx = _tracker.createInstance<OrLogicOperatorContext>(_ctx, getState());
  enterRule(_localctx, 30, cruleParser::RuleOrLogicOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(cruleParser::OR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionAtomContext ------------------------------------------------------------------

cruleParser::ExpressionAtomContext::ExpressionAtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cruleParser::ConstantContext* cruleParser::ExpressionAtomContext::constant() {
  return getRuleContext<cruleParser::ConstantContext>(0);
}

cruleParser::VariableContext* cruleParser::ExpressionAtomContext::variable() {
  return getRuleContext<cruleParser::VariableContext>(0);
}

cruleParser::FunctionCallContext* cruleParser::ExpressionAtomContext::functionCall() {
  return getRuleContext<cruleParser::FunctionCallContext>(0);
}

tree::TerminalNode* cruleParser::ExpressionAtomContext::NEGATION() {
  return getToken(cruleParser::NEGATION, 0);
}

cruleParser::ExpressionAtomContext* cruleParser::ExpressionAtomContext::expressionAtom() {
  return getRuleContext<cruleParser::ExpressionAtomContext>(0);
}

cruleParser::MethodCallContext* cruleParser::ExpressionAtomContext::methodCall() {
  return getRuleContext<cruleParser::MethodCallContext>(0);
}

cruleParser::MemberVariableContext* cruleParser::ExpressionAtomContext::memberVariable() {
  return getRuleContext<cruleParser::MemberVariableContext>(0);
}

cruleParser::ArrayMapSelectorContext* cruleParser::ExpressionAtomContext::arrayMapSelector() {
  return getRuleContext<cruleParser::ArrayMapSelectorContext>(0);
}


size_t cruleParser::ExpressionAtomContext::getRuleIndex() const {
  return cruleParser::RuleExpressionAtom;
}

void cruleParser::ExpressionAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionAtom(this);
}

void cruleParser::ExpressionAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionAtom(this);
}


antlrcpp::Any cruleParser::ExpressionAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitExpressionAtom(this);
  else
    return visitor->visitChildren(this);
}


cruleParser::ExpressionAtomContext* cruleParser::expressionAtom() {
   return expressionAtom(0);
}

cruleParser::ExpressionAtomContext* cruleParser::expressionAtom(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  cruleParser::ExpressionAtomContext *_localctx = _tracker.createInstance<ExpressionAtomContext>(_ctx, parentState);
  cruleParser::ExpressionAtomContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, cruleParser::RuleExpressionAtom, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(175);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(170);
      constant();
      break;
    }

    case 2: {
      setState(171);
      variable(0);
      break;
    }

    case 3: {
      setState(172);
      functionCall();
      break;
    }

    case 4: {
      setState(173);
      match(cruleParser::NEGATION);
      setState(174);
      expressionAtom(1);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(185);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(183);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionAtomContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpressionAtom);
          setState(177);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(178);
          methodCall();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionAtomContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpressionAtom);
          setState(179);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(180);
          memberVariable();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionAtomContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpressionAtom);
          setState(181);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(182);
          arrayMapSelector();
          break;
        }

        default:
          break;
        } 
      }
      setState(187);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstantsContext ------------------------------------------------------------------

cruleParser::ConstantsContext::ConstantsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cruleParser::ConstantContext *> cruleParser::ConstantsContext::constant() {
  return getRuleContexts<cruleParser::ConstantContext>();
}

cruleParser::ConstantContext* cruleParser::ConstantsContext::constant(size_t i) {
  return getRuleContext<cruleParser::ConstantContext>(i);
}


size_t cruleParser::ConstantsContext::getRuleIndex() const {
  return cruleParser::RuleConstants;
}

void cruleParser::ConstantsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstants(this);
}

void cruleParser::ConstantsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstants(this);
}


antlrcpp::Any cruleParser::ConstantsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitConstants(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::ConstantsContext* cruleParser::constants() {
  ConstantsContext *_localctx = _tracker.createInstance<ConstantsContext>(_ctx, getState());
  enterRule(_localctx, 34, cruleParser::RuleConstants);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    constant();
    setState(193);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cruleParser::T__0) {
      setState(189);
      match(cruleParser::T__0);
      setState(190);
      constant();
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

cruleParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cruleParser::StringLiteralContext* cruleParser::ConstantContext::stringLiteral() {
  return getRuleContext<cruleParser::StringLiteralContext>(0);
}

cruleParser::IntegerLiteralContext* cruleParser::ConstantContext::integerLiteral() {
  return getRuleContext<cruleParser::IntegerLiteralContext>(0);
}

cruleParser::FloatLiteralContext* cruleParser::ConstantContext::floatLiteral() {
  return getRuleContext<cruleParser::FloatLiteralContext>(0);
}

cruleParser::BooleanLiteralContext* cruleParser::ConstantContext::booleanLiteral() {
  return getRuleContext<cruleParser::BooleanLiteralContext>(0);
}

tree::TerminalNode* cruleParser::ConstantContext::NIL_LITERAL() {
  return getToken(cruleParser::NIL_LITERAL, 0);
}


size_t cruleParser::ConstantContext::getRuleIndex() const {
  return cruleParser::RuleConstant;
}

void cruleParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void cruleParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


antlrcpp::Any cruleParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::ConstantContext* cruleParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 36, cruleParser::RuleConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(201);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(196);
      stringLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(197);
      integerLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(198);
      floatLiteral();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(199);
      booleanLiteral();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(200);
      match(cruleParser::NIL_LITERAL);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

cruleParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::VariableContext::SIMPLENAME() {
  return getToken(cruleParser::SIMPLENAME, 0);
}

cruleParser::VariableContext* cruleParser::VariableContext::variable() {
  return getRuleContext<cruleParser::VariableContext>(0);
}

cruleParser::MemberVariableContext* cruleParser::VariableContext::memberVariable() {
  return getRuleContext<cruleParser::MemberVariableContext>(0);
}

cruleParser::ArrayMapSelectorContext* cruleParser::VariableContext::arrayMapSelector() {
  return getRuleContext<cruleParser::ArrayMapSelectorContext>(0);
}


size_t cruleParser::VariableContext::getRuleIndex() const {
  return cruleParser::RuleVariable;
}

void cruleParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void cruleParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}


antlrcpp::Any cruleParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}


cruleParser::VariableContext* cruleParser::variable() {
   return variable(0);
}

cruleParser::VariableContext* cruleParser::variable(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  cruleParser::VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, parentState);
  cruleParser::VariableContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, cruleParser::RuleVariable, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(cruleParser::SIMPLENAME);
    _ctx->stop = _input->LT(-1);
    setState(212);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(210);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<VariableContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleVariable);
          setState(206);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(207);
          memberVariable();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<VariableContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleVariable);
          setState(208);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(209);
          arrayMapSelector();
          break;
        }

        default:
          break;
        } 
      }
      setState(214);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArrayMapSelectorContext ------------------------------------------------------------------

cruleParser::ArrayMapSelectorContext::ArrayMapSelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::ArrayMapSelectorContext::LS_BRACKET() {
  return getToken(cruleParser::LS_BRACKET, 0);
}

cruleParser::ExpressionContext* cruleParser::ArrayMapSelectorContext::expression() {
  return getRuleContext<cruleParser::ExpressionContext>(0);
}

tree::TerminalNode* cruleParser::ArrayMapSelectorContext::RS_BRACKET() {
  return getToken(cruleParser::RS_BRACKET, 0);
}


size_t cruleParser::ArrayMapSelectorContext::getRuleIndex() const {
  return cruleParser::RuleArrayMapSelector;
}

void cruleParser::ArrayMapSelectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayMapSelector(this);
}

void cruleParser::ArrayMapSelectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayMapSelector(this);
}


antlrcpp::Any cruleParser::ArrayMapSelectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitArrayMapSelector(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::ArrayMapSelectorContext* cruleParser::arrayMapSelector() {
  ArrayMapSelectorContext *_localctx = _tracker.createInstance<ArrayMapSelectorContext>(_ctx, getState());
  enterRule(_localctx, 40, cruleParser::RuleArrayMapSelector);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    match(cruleParser::LS_BRACKET);
    setState(216);
    expression(0);
    setState(217);
    match(cruleParser::RS_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberVariableContext ------------------------------------------------------------------

cruleParser::MemberVariableContext::MemberVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::MemberVariableContext::DOT() {
  return getToken(cruleParser::DOT, 0);
}

tree::TerminalNode* cruleParser::MemberVariableContext::SIMPLENAME() {
  return getToken(cruleParser::SIMPLENAME, 0);
}


size_t cruleParser::MemberVariableContext::getRuleIndex() const {
  return cruleParser::RuleMemberVariable;
}

void cruleParser::MemberVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberVariable(this);
}

void cruleParser::MemberVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberVariable(this);
}


antlrcpp::Any cruleParser::MemberVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitMemberVariable(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::MemberVariableContext* cruleParser::memberVariable() {
  MemberVariableContext *_localctx = _tracker.createInstance<MemberVariableContext>(_ctx, getState());
  enterRule(_localctx, 42, cruleParser::RuleMemberVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    match(cruleParser::DOT);
    setState(220);
    match(cruleParser::SIMPLENAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

cruleParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::FunctionCallContext::SIMPLENAME() {
  return getToken(cruleParser::SIMPLENAME, 0);
}

tree::TerminalNode* cruleParser::FunctionCallContext::LR_BRACKET() {
  return getToken(cruleParser::LR_BRACKET, 0);
}

tree::TerminalNode* cruleParser::FunctionCallContext::RR_BRACKET() {
  return getToken(cruleParser::RR_BRACKET, 0);
}

cruleParser::ArgumentListContext* cruleParser::FunctionCallContext::argumentList() {
  return getRuleContext<cruleParser::ArgumentListContext>(0);
}


size_t cruleParser::FunctionCallContext::getRuleIndex() const {
  return cruleParser::RuleFunctionCall;
}

void cruleParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void cruleParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


antlrcpp::Any cruleParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::FunctionCallContext* cruleParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 44, cruleParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    match(cruleParser::SIMPLENAME);
    setState(223);
    match(cruleParser::LR_BRACKET);
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << cruleParser::MINUS)
      | (1ULL << cruleParser::LR_BRACKET)
      | (1ULL << cruleParser::TRUE)
      | (1ULL << cruleParser::FALSE)
      | (1ULL << cruleParser::NIL_LITERAL)
      | (1ULL << cruleParser::NEGATION)
      | (1ULL << cruleParser::SIMPLENAME)
      | (1ULL << cruleParser::DQUOTA_STRING)
      | (1ULL << cruleParser::SQUOTA_STRING)
      | (1ULL << cruleParser::DECIMAL_FLOAT_LIT)
      | (1ULL << cruleParser::HEX_FLOAT_LIT)
      | (1ULL << cruleParser::DEC_LIT)
      | (1ULL << cruleParser::HEX_LIT)
      | (1ULL << cruleParser::OCT_LIT))) != 0)) {
      setState(224);
      argumentList();
    }
    setState(227);
    match(cruleParser::RR_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodCallContext ------------------------------------------------------------------

cruleParser::MethodCallContext::MethodCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::MethodCallContext::DOT() {
  return getToken(cruleParser::DOT, 0);
}

cruleParser::FunctionCallContext* cruleParser::MethodCallContext::functionCall() {
  return getRuleContext<cruleParser::FunctionCallContext>(0);
}


size_t cruleParser::MethodCallContext::getRuleIndex() const {
  return cruleParser::RuleMethodCall;
}

void cruleParser::MethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCall(this);
}

void cruleParser::MethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCall(this);
}


antlrcpp::Any cruleParser::MethodCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitMethodCall(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::MethodCallContext* cruleParser::methodCall() {
  MethodCallContext *_localctx = _tracker.createInstance<MethodCallContext>(_ctx, getState());
  enterRule(_localctx, 46, cruleParser::RuleMethodCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(cruleParser::DOT);
    setState(230);
    functionCall();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

cruleParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<cruleParser::ExpressionContext *> cruleParser::ArgumentListContext::expression() {
  return getRuleContexts<cruleParser::ExpressionContext>();
}

cruleParser::ExpressionContext* cruleParser::ArgumentListContext::expression(size_t i) {
  return getRuleContext<cruleParser::ExpressionContext>(i);
}


size_t cruleParser::ArgumentListContext::getRuleIndex() const {
  return cruleParser::RuleArgumentList;
}

void cruleParser::ArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentList(this);
}

void cruleParser::ArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentList(this);
}


antlrcpp::Any cruleParser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::ArgumentListContext* cruleParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 48, cruleParser::RuleArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    expression(0);
    setState(237);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == cruleParser::T__0) {
      setState(233);
      match(cruleParser::T__0);
      setState(234);
      expression(0);
      setState(239);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

cruleParser::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cruleParser::DecimalFloatLiteralContext* cruleParser::FloatLiteralContext::decimalFloatLiteral() {
  return getRuleContext<cruleParser::DecimalFloatLiteralContext>(0);
}

cruleParser::HexadecimalFloatLiteralContext* cruleParser::FloatLiteralContext::hexadecimalFloatLiteral() {
  return getRuleContext<cruleParser::HexadecimalFloatLiteralContext>(0);
}


size_t cruleParser::FloatLiteralContext::getRuleIndex() const {
  return cruleParser::RuleFloatLiteral;
}

void cruleParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}

void cruleParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}


antlrcpp::Any cruleParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::FloatLiteralContext* cruleParser::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 50, cruleParser::RuleFloatLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(242);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(240);
      decimalFloatLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(241);
      hexadecimalFloatLiteral();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecimalFloatLiteralContext ------------------------------------------------------------------

cruleParser::DecimalFloatLiteralContext::DecimalFloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::DecimalFloatLiteralContext::DECIMAL_FLOAT_LIT() {
  return getToken(cruleParser::DECIMAL_FLOAT_LIT, 0);
}

tree::TerminalNode* cruleParser::DecimalFloatLiteralContext::MINUS() {
  return getToken(cruleParser::MINUS, 0);
}


size_t cruleParser::DecimalFloatLiteralContext::getRuleIndex() const {
  return cruleParser::RuleDecimalFloatLiteral;
}

void cruleParser::DecimalFloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimalFloatLiteral(this);
}

void cruleParser::DecimalFloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimalFloatLiteral(this);
}


antlrcpp::Any cruleParser::DecimalFloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitDecimalFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::DecimalFloatLiteralContext* cruleParser::decimalFloatLiteral() {
  DecimalFloatLiteralContext *_localctx = _tracker.createInstance<DecimalFloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 52, cruleParser::RuleDecimalFloatLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cruleParser::MINUS) {
      setState(244);
      match(cruleParser::MINUS);
    }
    setState(247);
    match(cruleParser::DECIMAL_FLOAT_LIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HexadecimalFloatLiteralContext ------------------------------------------------------------------

cruleParser::HexadecimalFloatLiteralContext::HexadecimalFloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::HexadecimalFloatLiteralContext::HEX_FLOAT_LIT() {
  return getToken(cruleParser::HEX_FLOAT_LIT, 0);
}

tree::TerminalNode* cruleParser::HexadecimalFloatLiteralContext::MINUS() {
  return getToken(cruleParser::MINUS, 0);
}


size_t cruleParser::HexadecimalFloatLiteralContext::getRuleIndex() const {
  return cruleParser::RuleHexadecimalFloatLiteral;
}

void cruleParser::HexadecimalFloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHexadecimalFloatLiteral(this);
}

void cruleParser::HexadecimalFloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHexadecimalFloatLiteral(this);
}


antlrcpp::Any cruleParser::HexadecimalFloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitHexadecimalFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::HexadecimalFloatLiteralContext* cruleParser::hexadecimalFloatLiteral() {
  HexadecimalFloatLiteralContext *_localctx = _tracker.createInstance<HexadecimalFloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 54, cruleParser::RuleHexadecimalFloatLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cruleParser::MINUS) {
      setState(249);
      match(cruleParser::MINUS);
    }
    setState(252);
    match(cruleParser::HEX_FLOAT_LIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

cruleParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

cruleParser::DecimalLiteralContext* cruleParser::IntegerLiteralContext::decimalLiteral() {
  return getRuleContext<cruleParser::DecimalLiteralContext>(0);
}

cruleParser::HexadecimalLiteralContext* cruleParser::IntegerLiteralContext::hexadecimalLiteral() {
  return getRuleContext<cruleParser::HexadecimalLiteralContext>(0);
}

cruleParser::OctalLiteralContext* cruleParser::IntegerLiteralContext::octalLiteral() {
  return getRuleContext<cruleParser::OctalLiteralContext>(0);
}


size_t cruleParser::IntegerLiteralContext::getRuleIndex() const {
  return cruleParser::RuleIntegerLiteral;
}

void cruleParser::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerLiteral(this);
}

void cruleParser::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerLiteral(this);
}


antlrcpp::Any cruleParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::IntegerLiteralContext* cruleParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 56, cruleParser::RuleIntegerLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(257);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(254);
      decimalLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(255);
      hexadecimalLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(256);
      octalLiteral();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecimalLiteralContext ------------------------------------------------------------------

cruleParser::DecimalLiteralContext::DecimalLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::DecimalLiteralContext::DEC_LIT() {
  return getToken(cruleParser::DEC_LIT, 0);
}

tree::TerminalNode* cruleParser::DecimalLiteralContext::MINUS() {
  return getToken(cruleParser::MINUS, 0);
}


size_t cruleParser::DecimalLiteralContext::getRuleIndex() const {
  return cruleParser::RuleDecimalLiteral;
}

void cruleParser::DecimalLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimalLiteral(this);
}

void cruleParser::DecimalLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimalLiteral(this);
}


antlrcpp::Any cruleParser::DecimalLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitDecimalLiteral(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::DecimalLiteralContext* cruleParser::decimalLiteral() {
  DecimalLiteralContext *_localctx = _tracker.createInstance<DecimalLiteralContext>(_ctx, getState());
  enterRule(_localctx, 58, cruleParser::RuleDecimalLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cruleParser::MINUS) {
      setState(259);
      match(cruleParser::MINUS);
    }
    setState(262);
    match(cruleParser::DEC_LIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HexadecimalLiteralContext ------------------------------------------------------------------

cruleParser::HexadecimalLiteralContext::HexadecimalLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::HexadecimalLiteralContext::HEX_LIT() {
  return getToken(cruleParser::HEX_LIT, 0);
}

tree::TerminalNode* cruleParser::HexadecimalLiteralContext::MINUS() {
  return getToken(cruleParser::MINUS, 0);
}


size_t cruleParser::HexadecimalLiteralContext::getRuleIndex() const {
  return cruleParser::RuleHexadecimalLiteral;
}

void cruleParser::HexadecimalLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHexadecimalLiteral(this);
}

void cruleParser::HexadecimalLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHexadecimalLiteral(this);
}


antlrcpp::Any cruleParser::HexadecimalLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitHexadecimalLiteral(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::HexadecimalLiteralContext* cruleParser::hexadecimalLiteral() {
  HexadecimalLiteralContext *_localctx = _tracker.createInstance<HexadecimalLiteralContext>(_ctx, getState());
  enterRule(_localctx, 60, cruleParser::RuleHexadecimalLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cruleParser::MINUS) {
      setState(264);
      match(cruleParser::MINUS);
    }
    setState(267);
    match(cruleParser::HEX_LIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OctalLiteralContext ------------------------------------------------------------------

cruleParser::OctalLiteralContext::OctalLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::OctalLiteralContext::OCT_LIT() {
  return getToken(cruleParser::OCT_LIT, 0);
}

tree::TerminalNode* cruleParser::OctalLiteralContext::MINUS() {
  return getToken(cruleParser::MINUS, 0);
}


size_t cruleParser::OctalLiteralContext::getRuleIndex() const {
  return cruleParser::RuleOctalLiteral;
}

void cruleParser::OctalLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOctalLiteral(this);
}

void cruleParser::OctalLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOctalLiteral(this);
}


antlrcpp::Any cruleParser::OctalLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitOctalLiteral(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::OctalLiteralContext* cruleParser::octalLiteral() {
  OctalLiteralContext *_localctx = _tracker.createInstance<OctalLiteralContext>(_ctx, getState());
  enterRule(_localctx, 62, cruleParser::RuleOctalLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == cruleParser::MINUS) {
      setState(269);
      match(cruleParser::MINUS);
    }
    setState(272);
    match(cruleParser::OCT_LIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralContext ------------------------------------------------------------------

cruleParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::StringLiteralContext::DQUOTA_STRING() {
  return getToken(cruleParser::DQUOTA_STRING, 0);
}

tree::TerminalNode* cruleParser::StringLiteralContext::SQUOTA_STRING() {
  return getToken(cruleParser::SQUOTA_STRING, 0);
}


size_t cruleParser::StringLiteralContext::getRuleIndex() const {
  return cruleParser::RuleStringLiteral;
}

void cruleParser::StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteral(this);
}

void cruleParser::StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteral(this);
}


antlrcpp::Any cruleParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::StringLiteralContext* cruleParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 64, cruleParser::RuleStringLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    _la = _input->LA(1);
    if (!(_la == cruleParser::DQUOTA_STRING

    || _la == cruleParser::SQUOTA_STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanLiteralContext ------------------------------------------------------------------

cruleParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* cruleParser::BooleanLiteralContext::TRUE() {
  return getToken(cruleParser::TRUE, 0);
}

tree::TerminalNode* cruleParser::BooleanLiteralContext::FALSE() {
  return getToken(cruleParser::FALSE, 0);
}


size_t cruleParser::BooleanLiteralContext::getRuleIndex() const {
  return cruleParser::RuleBooleanLiteral;
}

void cruleParser::BooleanLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanLiteral(this);
}

void cruleParser::BooleanLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<cruleListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanLiteral(this);
}


antlrcpp::Any cruleParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<cruleVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}

cruleParser::BooleanLiteralContext* cruleParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 66, cruleParser::RuleBooleanLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    _la = _input->LA(1);
    if (!(_la == cruleParser::TRUE

    || _la == cruleParser::FALSE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool cruleParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 10: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 16: return expressionAtomSempred(dynamic_cast<ExpressionAtomContext *>(context), predicateIndex);
    case 19: return variableSempred(dynamic_cast<VariableContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool cruleParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool cruleParser::expressionAtomSempred(ExpressionAtomContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 4);
    case 6: return precpred(_ctx, 3);
    case 7: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool cruleParser::variableSempred(VariableContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 3);
    case 9: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> cruleParser::_decisionToDFA;
atn::PredictionContextCache cruleParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN cruleParser::_atn;
std::vector<uint16_t> cruleParser::_serializedATN;

std::vector<std::string> cruleParser::_ruleNames = {
  "crl", "ruleEntry", "salience", "ruleName", "ruleDescription", "ifScope", 
  "thenScope", "thenExpressionList", "thenExpression", "assignment", "expression", 
  "mulDivOperators", "addMinusOperators", "comparisonOperator", "andLogicOperator", 
  "orLogicOperator", "expressionAtom", "constants", "constant", "variable", 
  "arrayMapSelector", "memberVariable", "functionCall", "methodCall", "argumentList", 
  "floatLiteral", "decimalFloatLiteral", "hexadecimalFloatLiteral", "integerLiteral", 
  "decimalLiteral", "hexadecimalLiteral", "octalLiteral", "stringLiteral", 
  "booleanLiteral"
};

std::vector<std::string> cruleParser::_literalNames = {
  "", "','", "'+'", "'-'", "'/'", "'*'", "'%'", "'.'", "';'", "'{'", "'}'", 
  "'('", "')'", "'['", "']'", "", "", "", "", "'&&'", "'||'", "", "", "", 
  "'!'", "", "'=='", "'='", "'+='", "'-='", "'/='", "'*='", "'%='", "'>'", 
  "'<'", "'>='", "'<='", "'!='", "'&'", "'|'"
};

std::vector<std::string> cruleParser::_symbolicNames = {
  "", "", "PLUS", "MINUS", "DIV", "MUL", "MOD", "DOT", "SEMICOLON", "LR_BRACE", 
  "RR_BRACE", "LR_BRACKET", "RR_BRACKET", "LS_BRACKET", "RS_BRACKET", "RULE", 
  "IF", "IN", "THEN", "AND", "OR", "TRUE", "FALSE", "NIL_LITERAL", "NEGATION", 
  "SALIENCE", "EQUALS", "ASSIGN", "PLUS_ASIGN", "MINUS_ASIGN", "DIV_ASIGN", 
  "MUL_ASIGN", "MOD_ASIGN", "GT", "LT", "GTE", "LTE", "NOTEQUALS", "BITAND", 
  "BITOR", "SIMPLENAME", "DQUOTA_STRING", "SQUOTA_STRING", "DECIMAL_FLOAT_LIT", 
  "DECIMAL_EXPONENT", "HEX_FLOAT_LIT", "HEX_EXPONENT", "DEC_LIT", "HEX_LIT", 
  "OCT_LIT", "SPACE", "COMMENT", "LINE_COMMENT"
};

dfa::Vocabulary cruleParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> cruleParser::_tokenNames;

cruleParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x36, 0x119, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x3, 0x2, 0x7, 0x2, 0x48, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x4b, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x52, 0xa, 0x3, 0x3, 0x3, 0x5, 0x3, 0x55, 0xa, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x6, 0x9, 0x6c, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0x6d, 0x3, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0x72, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x7a, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0x87, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x9d, 0xa, 0xc, 0xc, 0xc, 0xe, 
    0xc, 0xa0, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xb2, 0xa, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x7, 0x12, 0xba, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xbd, 0xb, 0x12, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xc2, 0xa, 0x13, 0xc, 0x13, 0xe, 
    0x13, 0xc5, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x5, 0x14, 0xcc, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0xd5, 0xa, 0x15, 0xc, 
    0x15, 0xe, 0x15, 0xd8, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0xe4, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0xee, 0xa, 0x1a, 
    0xc, 0x1a, 0xe, 0x1a, 0xf1, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 
    0xf5, 0xa, 0x1b, 0x3, 0x1c, 0x5, 0x1c, 0xf8, 0xa, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1d, 0x5, 0x1d, 0xfd, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x104, 0xa, 0x1e, 0x3, 0x1f, 
    0x5, 0x1f, 0x107, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x5, 0x20, 
    0x10c, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x5, 0x21, 0x111, 
    0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 
    0x23, 0x3, 0x23, 0x2, 0x5, 0x16, 0x22, 0x28, 0x24, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
    0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x2, 0x8, 0x3, 0x2, 0x2b, 0x2c, 
    0x3, 0x2, 0x1d, 0x22, 0x3, 0x2, 0x6, 0x8, 0x4, 0x2, 0x4, 0x5, 0x28, 
    0x29, 0x4, 0x2, 0x1c, 0x1c, 0x23, 0x27, 0x3, 0x2, 0x17, 0x18, 0x2, 0x11a, 
    0x2, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x5e, 0x3, 0x2, 0x2, 0x2, 0xa, 0x60, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x62, 0x3, 0x2, 0x2, 0x2, 0xe, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x12, 0x71, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0x16, 0x86, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa1, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x20, 0xa9, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x24, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x28, 0xcd, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0xe0, 0x3, 0x2, 0x2, 0x2, 0x30, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x32, 0xea, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x36, 0xf7, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x103, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x106, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x10b, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x110, 0x3, 0x2, 0x2, 0x2, 0x42, 0x114, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x116, 0x3, 0x2, 0x2, 0x2, 0x46, 0x48, 0x5, 0x4, 0x3, 0x2, 0x47, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4c, 0x3, 
    0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x2, 
    0x2, 0x3, 0x4d, 0x3, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x11, 0x2, 
    0x2, 0x4f, 0x51, 0x5, 0x8, 0x5, 0x2, 0x50, 0x52, 0x5, 0xa, 0x6, 0x2, 
    0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x53, 0x55, 0x5, 0x6, 0x4, 0x2, 0x54, 0x53, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x57, 0x7, 0xb, 0x2, 0x2, 0x57, 0x58, 0x5, 0xc, 
    0x7, 0x2, 0x58, 0x59, 0x5, 0xe, 0x8, 0x2, 0x59, 0x5a, 0x7, 0xc, 0x2, 
    0x2, 0x5a, 0x5, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x1b, 0x2, 0x2, 
    0x5c, 0x5d, 0x5, 0x3a, 0x1e, 0x2, 0x5d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x5f, 0x7, 0x2a, 0x2, 0x2, 0x5f, 0x9, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 
    0x9, 0x2, 0x2, 0x2, 0x61, 0xb, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 
    0x12, 0x2, 0x2, 0x63, 0x64, 0x5, 0x16, 0xc, 0x2, 0x64, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x66, 0x7, 0x14, 0x2, 0x2, 0x66, 0x67, 0x5, 0x10, 0x9, 
    0x2, 0x67, 0xf, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x5, 0x12, 0xa, 0x2, 
    0x69, 0x6a, 0x7, 0xa, 0x2, 0x2, 0x6a, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x6f, 0x72, 0x5, 0x14, 0xb, 0x2, 0x70, 0x72, 0x5, 0x22, 
    0x12, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x70, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x13, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x5, 0x28, 0x15, 0x2, 
    0x74, 0x75, 0x9, 0x3, 0x2, 0x2, 0x75, 0x76, 0x5, 0x16, 0xc, 0x2, 0x76, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x77, 0x79, 0x8, 0xc, 0x1, 0x2, 0x78, 0x7a, 
    0x7, 0x1a, 0x2, 0x2, 0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0xd, 
    0x2, 0x2, 0x7c, 0x7d, 0x5, 0x16, 0xc, 0x2, 0x7d, 0x7e, 0x7, 0xe, 0x2, 
    0x2, 0x7e, 0x87, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x87, 0x5, 0x22, 0x12, 0x2, 
    0x80, 0x81, 0x5, 0x28, 0x15, 0x2, 0x81, 0x82, 0x7, 0x13, 0x2, 0x2, 0x82, 
    0x83, 0x7, 0xf, 0x2, 0x2, 0x83, 0x84, 0x5, 0x24, 0x13, 0x2, 0x84, 0x85, 
    0x7, 0x10, 0x2, 0x2, 0x85, 0x87, 0x3, 0x2, 0x2, 0x2, 0x86, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x86, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0x87, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0xc, 0xa, 0x2, 
    0x2, 0x89, 0x8a, 0x5, 0x18, 0xd, 0x2, 0x8a, 0x8b, 0x5, 0x16, 0xc, 0xb, 
    0x8b, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0xc, 0x9, 0x2, 0x2, 0x8d, 
    0x8e, 0x5, 0x1a, 0xe, 0x2, 0x8e, 0x8f, 0x5, 0x16, 0xc, 0xa, 0x8f, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0xc, 0x8, 0x2, 0x2, 0x91, 0x92, 0x5, 
    0x1c, 0xf, 0x2, 0x92, 0x93, 0x5, 0x16, 0xc, 0x9, 0x93, 0x9d, 0x3, 0x2, 
    0x2, 0x2, 0x94, 0x95, 0xc, 0x7, 0x2, 0x2, 0x95, 0x96, 0x5, 0x1e, 0x10, 
    0x2, 0x96, 0x97, 0x5, 0x16, 0xc, 0x8, 0x97, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x98, 0x99, 0xc, 0x6, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x20, 0x11, 0x2, 0x9a, 
    0x9b, 0x5, 0x16, 0xc, 0x7, 0x9b, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x9c, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x90, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x94, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x9d, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x9, 0x4, 0x2, 0x2, 0xa2, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x9, 0x5, 0x2, 0x2, 0xa4, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x9, 0x6, 0x2, 0x2, 0xa6, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x15, 0x2, 0x2, 0xa8, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0xaa, 0x7, 0x16, 0x2, 0x2, 0xaa, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0xab, 0xac, 0x8, 0x12, 0x1, 0x2, 0xac, 0xb2, 0x5, 0x26, 0x14, 0x2, 
    0xad, 0xb2, 0x5, 0x28, 0x15, 0x2, 0xae, 0xb2, 0x5, 0x2e, 0x18, 0x2, 
    0xaf, 0xb0, 0x7, 0x1a, 0x2, 0x2, 0xb0, 0xb2, 0x5, 0x22, 0x12, 0x3, 0xb1, 
    0xab, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xae, 
    0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0xb4, 0xc, 0x6, 0x2, 0x2, 0xb4, 0xba, 0x5, 0x30, 
    0x19, 0x2, 0xb5, 0xb6, 0xc, 0x5, 0x2, 0x2, 0xb6, 0xba, 0x5, 0x2c, 0x17, 
    0x2, 0xb7, 0xb8, 0xc, 0x4, 0x2, 0x2, 0xb8, 0xba, 0x5, 0x2a, 0x16, 0x2, 
    0xb9, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb9, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb9, 
    0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc3, 0x5, 0x26, 
    0x14, 0x2, 0xbf, 0xc0, 0x7, 0x3, 0x2, 0x2, 0xc0, 0xc2, 0x5, 0x26, 0x14, 
    0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc5, 0x3, 0x2, 0x2, 0x2, 
    0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xcc, 
    0x5, 0x42, 0x22, 0x2, 0xc7, 0xcc, 0x5, 0x3a, 0x1e, 0x2, 0xc8, 0xcc, 
    0x5, 0x34, 0x1b, 0x2, 0xc9, 0xcc, 0x5, 0x44, 0x23, 0x2, 0xca, 0xcc, 
    0x7, 0x19, 0x2, 0x2, 0xcb, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc7, 0x3, 
    0x2, 0x2, 0x2, 0xcb, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0xcd, 0xce, 0x8, 0x15, 0x1, 0x2, 0xce, 0xcf, 0x7, 0x2a, 0x2, 0x2, 
    0xcf, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0xc, 0x5, 0x2, 0x2, 0xd1, 
    0xd5, 0x5, 0x2c, 0x17, 0x2, 0xd2, 0xd3, 0xc, 0x4, 0x2, 0x2, 0xd3, 0xd5, 
    0x5, 0x2a, 0x16, 0x2, 0xd4, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x7, 0xf, 0x2, 0x2, 
    0xda, 0xdb, 0x5, 0x16, 0xc, 0x2, 0xdb, 0xdc, 0x7, 0x10, 0x2, 0x2, 0xdc, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x7, 0x9, 0x2, 0x2, 0xde, 0xdf, 
    0x7, 0x2a, 0x2, 0x2, 0xdf, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x7, 
    0x2a, 0x2, 0x2, 0xe1, 0xe3, 0x7, 0xd, 0x2, 0x2, 0xe2, 0xe4, 0x5, 0x32, 
    0x1a, 0x2, 0xe3, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 
    0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0xe, 0x2, 0x2, 
    0xe6, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x9, 0x2, 0x2, 0xe8, 
    0xe9, 0x5, 0x2e, 0x18, 0x2, 0xe9, 0x31, 0x3, 0x2, 0x2, 0x2, 0xea, 0xef, 
    0x5, 0x16, 0xc, 0x2, 0xeb, 0xec, 0x7, 0x3, 0x2, 0x2, 0xec, 0xee, 0x5, 
    0x16, 0xc, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf1, 0x3, 0x2, 
    0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0xf0, 0x33, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 0x2, 0x2, 0x2, 
    0xf2, 0xf5, 0x5, 0x36, 0x1c, 0x2, 0xf3, 0xf5, 0x5, 0x38, 0x1d, 0x2, 
    0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf8, 0x7, 0x5, 0x2, 0x2, 0xf7, 0xf6, 
    0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x3, 
    0x2, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0x2d, 0x2, 0x2, 0xfa, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0xfb, 0xfd, 0x7, 0x5, 0x2, 0x2, 0xfc, 0xfb, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 
    0xfe, 0xff, 0x7, 0x2f, 0x2, 0x2, 0xff, 0x39, 0x3, 0x2, 0x2, 0x2, 0x100, 
    0x104, 0x5, 0x3c, 0x1f, 0x2, 0x101, 0x104, 0x5, 0x3e, 0x20, 0x2, 0x102, 
    0x104, 0x5, 0x40, 0x21, 0x2, 0x103, 0x100, 0x3, 0x2, 0x2, 0x2, 0x103, 
    0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x105, 0x107, 0x7, 0x5, 0x2, 0x2, 0x106, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 
    0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x7, 0x31, 0x2, 0x2, 0x109, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x10c, 0x7, 0x5, 0x2, 0x2, 0x10b, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x7, 0x32, 0x2, 0x2, 0x10e, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x10f, 0x111, 0x7, 0x5, 0x2, 0x2, 0x110, 0x10f, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 
    0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x7, 0x33, 0x2, 0x2, 0x113, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x9, 0x2, 0x2, 0x2, 0x115, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x116, 0x117, 0x9, 0x7, 0x2, 0x2, 0x117, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x1b, 0x49, 0x51, 0x54, 0x6d, 0x71, 0x79, 0x86, 0x9c, 0x9e, 
    0xb1, 0xb9, 0xbb, 0xc3, 0xcb, 0xd4, 0xd6, 0xe3, 0xef, 0xf4, 0xf7, 0xfc, 
    0x103, 0x106, 0x10b, 0x110, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

cruleParser::Initializer cruleParser::_init;
