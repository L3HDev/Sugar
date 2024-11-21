
// Generated from E:/Sugar/Sugar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  SugarParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleBlock = 2, RuleDeclaration = 3, 
    RuleFunction_declaration = 4, RuleClass_init = 5, RuleVar_declaration = 6, 
    RuleList_declaration = 7, RuleClass_inheritance_list = 8, RuleClass_declaration = 9, 
    RuleAssignment = 10, RuleBasic_assignment = 11, RuleDefault_assignment = 12, 
    RuleReturn_statement = 13, RuleBreak_statement = 14, RuleContinue_statement = 15, 
    RuleExpression = 16, RulePipeline_expression = 17, RuleElvis_expression = 18, 
    RuleBoolean_or_expression = 19, RuleBoolean_and_expression = 20, RuleComparison_expression = 21, 
    RuleMulti_comparison_item = 22, RuleMulti_comparison_or_expression = 23, 
    RuleMulti_comparison_and_expression = 24, RuleMulti_comparison_object_access = 25, 
    RuleMulti_comparison_optional_object_access = 26, RuleMulti_comparison_expression = 27, 
    RuleAdditive_expression = 28, RuleMultiplicative_expression = 29, RuleExponentiation_expression = 30, 
    RuleUnary_expression = 31, RulePost_fix_expression = 32, RuleObject_access_chain = 33, 
    RuleOptional_object_access_chain = 34, RulePrimary_expression = 35, 
    RuleTerminal_expression = 36, RuleSwitch_expression = 37, RuleCase_list = 38, 
    RuleList_access = 39, RuleList_pushback = 40, RuleList_insertion = 41, 
    RuleList_removal = 42, RuleList_at_access = 43, RuleIf_expression = 44, 
    RuleLoop_expression = 45, RuleWhile_loop = 46, RuleFor_loop = 47, RuleParameter_list = 48, 
    RuleClass_member_segment = 49, RuleClass_constructor = 50, RuleClass_operator_override = 51, 
    RuleClass_overrideable_operator = 52, RuleVariable_type = 53, RuleFunction_call = 54, 
    RuleArgument_list = 55, RuleUser_defined_type = 56, RuleComparison_symbol = 57, 
    RuleFormatted_string = 58, RuleAnd_logic_operator = 59, RuleOr_logic_operator = 60
  };

  explicit SugarParser(antlr4::TokenStream *input);

  SugarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SugarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class StatementContext;
  class BlockContext;
  class DeclarationContext;
  class Function_declarationContext;
  class Class_initContext;
  class Var_declarationContext;
  class List_declarationContext;
  class Class_inheritance_listContext;
  class Class_declarationContext;
  class AssignmentContext;
  class Basic_assignmentContext;
  class Default_assignmentContext;
  class Return_statementContext;
  class Break_statementContext;
  class Continue_statementContext;
  class ExpressionContext;
  class Pipeline_expressionContext;
  class Elvis_expressionContext;
  class Boolean_or_expressionContext;
  class Boolean_and_expressionContext;
  class Comparison_expressionContext;
  class Multi_comparison_itemContext;
  class Multi_comparison_or_expressionContext;
  class Multi_comparison_and_expressionContext;
  class Multi_comparison_object_accessContext;
  class Multi_comparison_optional_object_accessContext;
  class Multi_comparison_expressionContext;
  class Additive_expressionContext;
  class Multiplicative_expressionContext;
  class Exponentiation_expressionContext;
  class Unary_expressionContext;
  class Post_fix_expressionContext;
  class Object_access_chainContext;
  class Optional_object_access_chainContext;
  class Primary_expressionContext;
  class Terminal_expressionContext;
  class Switch_expressionContext;
  class Case_listContext;
  class List_accessContext;
  class List_pushbackContext;
  class List_insertionContext;
  class List_removalContext;
  class List_at_accessContext;
  class If_expressionContext;
  class Loop_expressionContext;
  class While_loopContext;
  class For_loopContext;
  class Parameter_listContext;
  class Class_member_segmentContext;
  class Class_constructorContext;
  class Class_operator_overrideContext;
  class Class_overrideable_operatorContext;
  class Variable_typeContext;
  class Function_callContext;
  class Argument_listContext;
  class User_defined_typeContext;
  class Comparison_symbolContext;
  class Formatted_stringContext;
  class And_logic_operatorContext;
  class Or_logic_operatorContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Class_declarationContext *> class_declaration();
    Class_declarationContext* class_declaration(size_t i);
    std::vector<Function_declarationContext *> function_declaration();
    Function_declarationContext* function_declaration(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMICOLON();
    DeclarationContext *declaration();
    ExpressionContext *expression();
    AssignmentContext *assignment();
    Return_statementContext *return_statement();
    Break_statementContext *break_statement();
    Continue_statementContext *continue_statement();
    List_pushbackContext *list_pushback();
    List_insertionContext *list_insertion();
    List_removalContext *list_removal();
    If_expressionContext *if_expression();
    Loop_expressionContext *loop_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_initContext *class_init();
    Function_declarationContext *function_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  Function_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_declarationContext *var_declaration();
    antlr4::tree::TerminalNode *LPAREN();
    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_declarationContext* function_declaration();

  class  Class_initContext : public antlr4::ParserRuleContext {
  public:
    Class_initContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_declarationContext *var_declaration();
    antlr4::tree::TerminalNode *LPAREN();
    Argument_listContext *argument_list();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_initContext* class_init();

  class  Var_declarationContext : public antlr4::ParserRuleContext {
  public:
    Var_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    Variable_typeContext *variable_type();
    List_declarationContext *list_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_declarationContext* var_declaration();

  class  List_declarationContext : public antlr4::ParserRuleContext {
  public:
    List_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_typeContext *variable_type();
    std::vector<antlr4::tree::TerminalNode *> LISTDECL();
    antlr4::tree::TerminalNode* LISTDECL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INTEGER();
    antlr4::tree::TerminalNode* INTEGER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_declarationContext* list_declaration();

  class  Class_inheritance_listContext : public antlr4::ParserRuleContext {
  public:
    Class_inheritance_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<User_defined_typeContext *> user_defined_type();
    User_defined_typeContext* user_defined_type(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_inheritance_listContext* class_inheritance_list();

  class  Class_declarationContext : public antlr4::ParserRuleContext {
  public:
    Class_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    User_defined_typeContext *user_defined_type();
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    Class_inheritance_listContext *class_inheritance_list();
    std::vector<antlr4::tree::TerminalNode *> PUBLIC();
    antlr4::tree::TerminalNode* PUBLIC(size_t i);
    std::vector<Class_member_segmentContext *> class_member_segment();
    Class_member_segmentContext* class_member_segment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PROTECTED();
    antlr4::tree::TerminalNode* PROTECTED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PRIVATE();
    antlr4::tree::TerminalNode* PRIVATE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_declarationContext* class_declaration();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Basic_assignmentContext *basic_assignment();
    Default_assignmentContext *default_assignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  Basic_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Basic_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *VAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Basic_assignmentContext* basic_assignment();

  class  Default_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Default_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT_ASSIGN();
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *VAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_assignmentContext* default_assignment();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_statementContext* return_statement();

  class  Break_statementContext : public antlr4::ParserRuleContext {
  public:
    Break_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Break_statementContext* break_statement();

  class  Continue_statementContext : public antlr4::ParserRuleContext {
  public:
    Continue_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Continue_statementContext* continue_statement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pipeline_expressionContext *pipeline_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  Pipeline_expressionContext : public antlr4::ParserRuleContext {
  public:
    Pipeline_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Elvis_expressionContext *> elvis_expression();
    Elvis_expressionContext* elvis_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PIPE();
    antlr4::tree::TerminalNode* PIPE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pipeline_expressionContext* pipeline_expression();

  class  Elvis_expressionContext : public antlr4::ParserRuleContext {
  public:
    Elvis_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Boolean_or_expressionContext *> boolean_or_expression();
    Boolean_or_expressionContext* boolean_or_expression(size_t i);
    antlr4::tree::TerminalNode *ELVIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Elvis_expressionContext* elvis_expression();

  class  Boolean_or_expressionContext : public antlr4::ParserRuleContext {
  public:
    Boolean_or_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Boolean_and_expressionContext *> boolean_and_expression();
    Boolean_and_expressionContext* boolean_and_expression(size_t i);
    std::vector<Or_logic_operatorContext *> or_logic_operator();
    Or_logic_operatorContext* or_logic_operator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boolean_or_expressionContext* boolean_or_expression();

  class  Boolean_and_expressionContext : public antlr4::ParserRuleContext {
  public:
    Boolean_and_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Comparison_expressionContext *> comparison_expression();
    Comparison_expressionContext* comparison_expression(size_t i);
    std::vector<And_logic_operatorContext *> and_logic_operator();
    And_logic_operatorContext* and_logic_operator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boolean_and_expressionContext* boolean_and_expression();

  class  Comparison_expressionContext : public antlr4::ParserRuleContext {
  public:
    Comparison_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Additive_expressionContext *> additive_expression();
    Additive_expressionContext* additive_expression(size_t i);
    std::vector<Comparison_symbolContext *> comparison_symbol();
    Comparison_symbolContext* comparison_symbol(size_t i);
    Multi_comparison_expressionContext *multi_comparison_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comparison_expressionContext* comparison_expression();

  class  Multi_comparison_itemContext : public antlr4::ParserRuleContext {
  public:
    Multi_comparison_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Multi_comparison_or_expressionContext *multi_comparison_or_expression();
    Multi_comparison_object_accessContext *multi_comparison_object_access();
    Multi_comparison_optional_object_accessContext *multi_comparison_optional_object_access();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multi_comparison_itemContext* multi_comparison_item();

  class  Multi_comparison_or_expressionContext : public antlr4::ParserRuleContext {
  public:
    Multi_comparison_or_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Multi_comparison_and_expressionContext *> multi_comparison_and_expression();
    Multi_comparison_and_expressionContext* multi_comparison_and_expression(size_t i);
    std::vector<Or_logic_operatorContext *> or_logic_operator();
    Or_logic_operatorContext* or_logic_operator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multi_comparison_or_expressionContext* multi_comparison_or_expression();

  class  Multi_comparison_and_expressionContext : public antlr4::ParserRuleContext {
  public:
    Multi_comparison_and_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Comparison_symbolContext *comparison_symbol();
    Boolean_or_expressionContext *boolean_or_expression();
    std::vector<And_logic_operatorContext *> and_logic_operator();
    And_logic_operatorContext* and_logic_operator(size_t i);
    std::vector<Multi_comparison_itemContext *> multi_comparison_item();
    Multi_comparison_itemContext* multi_comparison_item(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multi_comparison_and_expressionContext* multi_comparison_and_expression();

  class  Multi_comparison_object_accessContext : public antlr4::ParserRuleContext {
  public:
    Multi_comparison_object_accessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCESS();
    Object_access_chainContext *object_access_chain();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multi_comparison_object_accessContext* multi_comparison_object_access();

  class  Multi_comparison_optional_object_accessContext : public antlr4::ParserRuleContext {
  public:
    Multi_comparison_optional_object_accessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPT_ACCESS();
    Optional_object_access_chainContext *optional_object_access_chain();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multi_comparison_optional_object_accessContext* multi_comparison_optional_object_access();

  class  Multi_comparison_expressionContext : public antlr4::ParserRuleContext {
  public:
    Multi_comparison_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Additive_expressionContext *additive_expression();
    antlr4::tree::TerminalNode *MULTI_CMP_ARROW();
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    std::vector<Multi_comparison_itemContext *> multi_comparison_item();
    Multi_comparison_itemContext* multi_comparison_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multi_comparison_expressionContext* multi_comparison_expression();

  class  Additive_expressionContext : public antlr4::ParserRuleContext {
  public:
    Additive_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Multiplicative_expressionContext *> multiplicative_expression();
    Multiplicative_expressionContext* multiplicative_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Additive_expressionContext* additive_expression();

  class  Multiplicative_expressionContext : public antlr4::ParserRuleContext {
  public:
    Multiplicative_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Exponentiation_expressionContext *> exponentiation_expression();
    Exponentiation_expressionContext* exponentiation_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MUL();
    antlr4::tree::TerminalNode* MUL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MOD();
    antlr4::tree::TerminalNode* MOD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiplicative_expressionContext* multiplicative_expression();

  class  Exponentiation_expressionContext : public antlr4::ParserRuleContext {
  public:
    Exponentiation_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Unary_expressionContext *> unary_expression();
    Unary_expressionContext* unary_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> POW();
    antlr4::tree::TerminalNode* POW(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exponentiation_expressionContext* exponentiation_expression();

  class  Unary_expressionContext : public antlr4::ParserRuleContext {
  public:
    Unary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Post_fix_expressionContext *post_fix_expression();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_expressionContext* unary_expression();

  class  Post_fix_expressionContext : public antlr4::ParserRuleContext {
  public:
    Post_fix_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Object_access_chainContext *object_access_chain();
    Optional_object_access_chainContext *optional_object_access_chain();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *DECREMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Post_fix_expressionContext* post_fix_expression();

  class  Object_access_chainContext : public antlr4::ParserRuleContext {
  public:
    Object_access_chainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Primary_expressionContext *> primary_expression();
    Primary_expressionContext* primary_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACCESS();
    antlr4::tree::TerminalNode* ACCESS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Object_access_chainContext* object_access_chain();

  class  Optional_object_access_chainContext : public antlr4::ParserRuleContext {
  public:
    Optional_object_access_chainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Primary_expressionContext *> primary_expression();
    Primary_expressionContext* primary_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPT_ACCESS();
    antlr4::tree::TerminalNode* OPT_ACCESS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Optional_object_access_chainContext* optional_object_access_chain();

  class  Primary_expressionContext : public antlr4::ParserRuleContext {
  public:
    Primary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_callContext *function_call();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    Formatted_stringContext *formatted_string();
    List_accessContext *list_access();
    Switch_expressionContext *switch_expression();
    Terminal_expressionContext *terminal_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Primary_expressionContext* primary_expression();

  class  Terminal_expressionContext : public antlr4::ParserRuleContext {
  public:
    Terminal_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *LAST_ASSIGNED();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *BOOL_FALSE();
    antlr4::tree::TerminalNode *BOOL_TRUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Terminal_expressionContext* terminal_expression();

  class  Switch_expressionContext : public antlr4::ParserRuleContext {
  public:
    Switch_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *LCURL();
    Case_listContext *case_list();
    antlr4::tree::TerminalNode *RCURL();
    antlr4::tree::TerminalNode *DEFAULT();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Switch_expressionContext* switch_expression();

  class  Case_listContext : public antlr4::ParserRuleContext {
  public:
    Case_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CASE();
    antlr4::tree::TerminalNode* CASE(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ARROW();
    antlr4::tree::TerminalNode* ARROW(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_listContext* case_list();

  class  List_accessContext : public antlr4::ParserRuleContext {
  public:
    List_accessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    List_at_accessContext *list_at_access();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_accessContext* list_access();

  class  List_pushbackContext : public antlr4::ParserRuleContext {
  public:
    List_pushbackContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *PUSHBACK();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_pushbackContext* list_pushback();

  class  List_insertionContext : public antlr4::ParserRuleContext {
  public:
    List_insertionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *PUSHBACK();
    ExpressionContext *expression();
    List_at_accessContext *list_at_access();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_insertionContext* list_insertion();

  class  List_removalContext : public antlr4::ParserRuleContext {
  public:
    List_removalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *NOT();
    List_at_accessContext *list_at_access();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_removalContext* list_removal();

  class  List_at_accessContext : public antlr4::ParserRuleContext {
  public:
    List_at_accessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> AT();
    antlr4::tree::TerminalNode* AT(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_at_accessContext* list_at_access();

  class  If_expressionContext : public antlr4::ParserRuleContext {
  public:
    If_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSE();
    antlr4::tree::TerminalNode* ELSE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_expressionContext* if_expression();

  class  Loop_expressionContext : public antlr4::ParserRuleContext {
  public:
    Loop_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    While_loopContext *while_loop();
    For_loopContext *for_loop();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_expressionContext* loop_expression();

  class  While_loopContext : public antlr4::ParserRuleContext {
  public:
    While_loopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_loopContext* while_loop();

  class  For_loopContext : public antlr4::ParserRuleContext {
  public:
    For_loopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LPAREN();
    AssignmentContext *assignment();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_loopContext* for_loop();

  class  Parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_typeContext *> variable_type();
    Variable_typeContext* variable_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<Terminal_expressionContext *> terminal_expression();
    Terminal_expressionContext* terminal_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_listContext* parameter_list();

  class  Class_member_segmentContext : public antlr4::ParserRuleContext {
  public:
    Class_member_segmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURL();
    antlr4::tree::TerminalNode *RCURL();
    std::vector<Class_constructorContext *> class_constructor();
    Class_constructorContext* class_constructor(size_t i);
    std::vector<Class_operator_overrideContext *> class_operator_override();
    Class_operator_overrideContext* class_operator_override(size_t i);
    std::vector<Function_declarationContext *> function_declaration();
    Function_declarationContext* function_declaration(size_t i);
    std::vector<Var_declarationContext *> var_declaration();
    Var_declarationContext* var_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_member_segmentContext* class_member_segment();

  class  Class_constructorContext : public antlr4::ParserRuleContext {
  public:
    Class_constructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_constructorContext* class_constructor();

  class  Class_operator_overrideContext : public antlr4::ParserRuleContext {
  public:
    Class_operator_overrideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_overrideable_operatorContext *class_overrideable_operator();
    antlr4::tree::TerminalNode *LPAREN();
    Parameter_listContext *parameter_list();
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_operator_overrideContext* class_operator_override();

  class  Class_overrideable_operatorContext : public antlr4::ParserRuleContext {
  public:
    Class_overrideable_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *DECREMENT();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *DEQUAL();
    antlr4::tree::TerminalNode *NEQUAL();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LESSEQUAL();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *GREATEREQUAL();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_overrideable_operatorContext* class_overrideable_operator();

  class  Variable_typeContext : public antlr4::ParserRuleContext {
  public:
    Variable_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOLTYPE();
    antlr4::tree::TerminalNode *INTTYPE();
    antlr4::tree::TerminalNode *DECIMALTYPE();
    antlr4::tree::TerminalNode *STRINGTYPE();
    antlr4::tree::TerminalNode *ANYTYPE();
    User_defined_typeContext *user_defined_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_typeContext* variable_type();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *LPAREN();
    Argument_listContext *argument_list();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  Argument_listContext : public antlr4::ParserRuleContext {
  public:
    Argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Argument_listContext* argument_list();

  class  User_defined_typeContext : public antlr4::ParserRuleContext {
  public:
    User_defined_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_defined_typeContext* user_defined_type();

  class  Comparison_symbolContext : public antlr4::ParserRuleContext {
  public:
    Comparison_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LESSEQUAL();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *GREATEREQUAL();
    antlr4::tree::TerminalNode *DEQUAL();
    antlr4::tree::TerminalNode *NEQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comparison_symbolContext* comparison_symbol();

  class  Formatted_stringContext : public antlr4::ParserRuleContext {
  public:
    Formatted_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Formatted_stringContext* formatted_string();

  class  And_logic_operatorContext : public antlr4::ParserRuleContext {
  public:
    And_logic_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *WORD_OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_logic_operatorContext* and_logic_operator();

  class  Or_logic_operatorContext : public antlr4::ParserRuleContext {
  public:
    Or_logic_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *WORD_AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_logic_operatorContext* or_logic_operator();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

