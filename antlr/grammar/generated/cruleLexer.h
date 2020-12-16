
// Generated from crule.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"




class  cruleLexer : public antlr4::Lexer {
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

  explicit cruleLexer(antlr4::CharStream *input);
  ~cruleLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

