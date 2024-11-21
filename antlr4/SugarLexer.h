
// Generated from E:/Sugar/Sugar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  SugarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, INCREMENT = 2, DECREMENT = 3, NOT = 4, POW = 5, MUL = 6, DIV = 7, 
    MOD = 8, PLUS = 9, MINUS = 10, DEQUAL = 11, NEQUAL = 12, LESS = 13, 
    LESSEQUAL = 14, GREATER = 15, GREATEREQUAL = 16, MULTI_CMP_ARROW = 17, 
    AND = 18, WORD_AND = 19, OR = 20, WORD_OR = 21, EQUAL = 22, DEFAULT_ASSIGN = 23, 
    ELVIS = 24, PUSHBACK = 25, AT = 26, ACCESS = 27, OPT_ACCESS = 28, ARROW = 29, 
    PIPE = 30, SEMICOLON = 31, LPAREN = 32, RPAREN = 33, LCURL = 34, RCURL = 35, 
    LBRACK = 36, RBRACK = 37, RETURN = 38, BREAK = 39, CONTINUE = 40, LISTDECL = 41, 
    IF = 42, ELSE = 43, WHILE = 44, FOR = 45, COMMA = 46, CLASS = 47, PUBLIC = 48, 
    PROTECTED = 49, PRIVATE = 50, INTTYPE = 51, DECIMALTYPE = 52, STRINGTYPE = 53, 
    BOOLTYPE = 54, BOOL_TRUE = 55, BOOL_FALSE = 56, ANYTYPE = 57, SWITCH = 58, 
    CASE = 59, DEFAULT = 60, COLON = 61, LAST_ASSIGNED = 62, INTEGER = 63, 
    DECIMAL = 64, VAR = 65, STRING = 66, WS = 67, COMMENT = 68, LINE_COMMENT = 69
  };

  explicit SugarLexer(antlr4::CharStream *input);

  ~SugarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

