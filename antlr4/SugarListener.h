
// Generated from E:/Sugar/Sugar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SugarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SugarParser.
 */
class  SugarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(SugarParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(SugarParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(SugarParser::StatementContext *ctx) = 0;
  virtual void exitStatement(SugarParser::StatementContext *ctx) = 0;

  virtual void enterBlock(SugarParser::BlockContext *ctx) = 0;
  virtual void exitBlock(SugarParser::BlockContext *ctx) = 0;

  virtual void enterDeclaration(SugarParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(SugarParser::DeclarationContext *ctx) = 0;

  virtual void enterFunction_declaration(SugarParser::Function_declarationContext *ctx) = 0;
  virtual void exitFunction_declaration(SugarParser::Function_declarationContext *ctx) = 0;

  virtual void enterClass_init(SugarParser::Class_initContext *ctx) = 0;
  virtual void exitClass_init(SugarParser::Class_initContext *ctx) = 0;

  virtual void enterVar_declaration(SugarParser::Var_declarationContext *ctx) = 0;
  virtual void exitVar_declaration(SugarParser::Var_declarationContext *ctx) = 0;

  virtual void enterList_declaration(SugarParser::List_declarationContext *ctx) = 0;
  virtual void exitList_declaration(SugarParser::List_declarationContext *ctx) = 0;

  virtual void enterClass_inheritance_list(SugarParser::Class_inheritance_listContext *ctx) = 0;
  virtual void exitClass_inheritance_list(SugarParser::Class_inheritance_listContext *ctx) = 0;

  virtual void enterClass_declaration(SugarParser::Class_declarationContext *ctx) = 0;
  virtual void exitClass_declaration(SugarParser::Class_declarationContext *ctx) = 0;

  virtual void enterAssignment(SugarParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(SugarParser::AssignmentContext *ctx) = 0;

  virtual void enterBasic_assignment(SugarParser::Basic_assignmentContext *ctx) = 0;
  virtual void exitBasic_assignment(SugarParser::Basic_assignmentContext *ctx) = 0;

  virtual void enterDefault_assignment(SugarParser::Default_assignmentContext *ctx) = 0;
  virtual void exitDefault_assignment(SugarParser::Default_assignmentContext *ctx) = 0;

  virtual void enterReturn_statement(SugarParser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(SugarParser::Return_statementContext *ctx) = 0;

  virtual void enterBreak_statement(SugarParser::Break_statementContext *ctx) = 0;
  virtual void exitBreak_statement(SugarParser::Break_statementContext *ctx) = 0;

  virtual void enterContinue_statement(SugarParser::Continue_statementContext *ctx) = 0;
  virtual void exitContinue_statement(SugarParser::Continue_statementContext *ctx) = 0;

  virtual void enterExpression(SugarParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(SugarParser::ExpressionContext *ctx) = 0;

  virtual void enterPipeline_expression(SugarParser::Pipeline_expressionContext *ctx) = 0;
  virtual void exitPipeline_expression(SugarParser::Pipeline_expressionContext *ctx) = 0;

  virtual void enterElvis_expression(SugarParser::Elvis_expressionContext *ctx) = 0;
  virtual void exitElvis_expression(SugarParser::Elvis_expressionContext *ctx) = 0;

  virtual void enterBoolean_or_expression(SugarParser::Boolean_or_expressionContext *ctx) = 0;
  virtual void exitBoolean_or_expression(SugarParser::Boolean_or_expressionContext *ctx) = 0;

  virtual void enterBoolean_and_expression(SugarParser::Boolean_and_expressionContext *ctx) = 0;
  virtual void exitBoolean_and_expression(SugarParser::Boolean_and_expressionContext *ctx) = 0;

  virtual void enterComparison_expression(SugarParser::Comparison_expressionContext *ctx) = 0;
  virtual void exitComparison_expression(SugarParser::Comparison_expressionContext *ctx) = 0;

  virtual void enterMulti_comparison_item(SugarParser::Multi_comparison_itemContext *ctx) = 0;
  virtual void exitMulti_comparison_item(SugarParser::Multi_comparison_itemContext *ctx) = 0;

  virtual void enterMulti_comparison_or_expression(SugarParser::Multi_comparison_or_expressionContext *ctx) = 0;
  virtual void exitMulti_comparison_or_expression(SugarParser::Multi_comparison_or_expressionContext *ctx) = 0;

  virtual void enterMulti_comparison_and_expression(SugarParser::Multi_comparison_and_expressionContext *ctx) = 0;
  virtual void exitMulti_comparison_and_expression(SugarParser::Multi_comparison_and_expressionContext *ctx) = 0;

  virtual void enterMulti_comparison_object_access(SugarParser::Multi_comparison_object_accessContext *ctx) = 0;
  virtual void exitMulti_comparison_object_access(SugarParser::Multi_comparison_object_accessContext *ctx) = 0;

  virtual void enterMulti_comparison_optional_object_access(SugarParser::Multi_comparison_optional_object_accessContext *ctx) = 0;
  virtual void exitMulti_comparison_optional_object_access(SugarParser::Multi_comparison_optional_object_accessContext *ctx) = 0;

  virtual void enterMulti_comparison_expression(SugarParser::Multi_comparison_expressionContext *ctx) = 0;
  virtual void exitMulti_comparison_expression(SugarParser::Multi_comparison_expressionContext *ctx) = 0;

  virtual void enterAdditive_expression(SugarParser::Additive_expressionContext *ctx) = 0;
  virtual void exitAdditive_expression(SugarParser::Additive_expressionContext *ctx) = 0;

  virtual void enterMultiplicative_expression(SugarParser::Multiplicative_expressionContext *ctx) = 0;
  virtual void exitMultiplicative_expression(SugarParser::Multiplicative_expressionContext *ctx) = 0;

  virtual void enterExponentiation_expression(SugarParser::Exponentiation_expressionContext *ctx) = 0;
  virtual void exitExponentiation_expression(SugarParser::Exponentiation_expressionContext *ctx) = 0;

  virtual void enterUnary_expression(SugarParser::Unary_expressionContext *ctx) = 0;
  virtual void exitUnary_expression(SugarParser::Unary_expressionContext *ctx) = 0;

  virtual void enterPost_fix_expression(SugarParser::Post_fix_expressionContext *ctx) = 0;
  virtual void exitPost_fix_expression(SugarParser::Post_fix_expressionContext *ctx) = 0;

  virtual void enterObject_access_chain(SugarParser::Object_access_chainContext *ctx) = 0;
  virtual void exitObject_access_chain(SugarParser::Object_access_chainContext *ctx) = 0;

  virtual void enterOptional_object_access_chain(SugarParser::Optional_object_access_chainContext *ctx) = 0;
  virtual void exitOptional_object_access_chain(SugarParser::Optional_object_access_chainContext *ctx) = 0;

  virtual void enterPrimary_expression(SugarParser::Primary_expressionContext *ctx) = 0;
  virtual void exitPrimary_expression(SugarParser::Primary_expressionContext *ctx) = 0;

  virtual void enterTerminal_expression(SugarParser::Terminal_expressionContext *ctx) = 0;
  virtual void exitTerminal_expression(SugarParser::Terminal_expressionContext *ctx) = 0;

  virtual void enterSwitch_expression(SugarParser::Switch_expressionContext *ctx) = 0;
  virtual void exitSwitch_expression(SugarParser::Switch_expressionContext *ctx) = 0;

  virtual void enterCase_list(SugarParser::Case_listContext *ctx) = 0;
  virtual void exitCase_list(SugarParser::Case_listContext *ctx) = 0;

  virtual void enterList_access(SugarParser::List_accessContext *ctx) = 0;
  virtual void exitList_access(SugarParser::List_accessContext *ctx) = 0;

  virtual void enterList_pushback(SugarParser::List_pushbackContext *ctx) = 0;
  virtual void exitList_pushback(SugarParser::List_pushbackContext *ctx) = 0;

  virtual void enterList_insertion(SugarParser::List_insertionContext *ctx) = 0;
  virtual void exitList_insertion(SugarParser::List_insertionContext *ctx) = 0;

  virtual void enterList_removal(SugarParser::List_removalContext *ctx) = 0;
  virtual void exitList_removal(SugarParser::List_removalContext *ctx) = 0;

  virtual void enterList_at_access(SugarParser::List_at_accessContext *ctx) = 0;
  virtual void exitList_at_access(SugarParser::List_at_accessContext *ctx) = 0;

  virtual void enterIf_expression(SugarParser::If_expressionContext *ctx) = 0;
  virtual void exitIf_expression(SugarParser::If_expressionContext *ctx) = 0;

  virtual void enterLoop_expression(SugarParser::Loop_expressionContext *ctx) = 0;
  virtual void exitLoop_expression(SugarParser::Loop_expressionContext *ctx) = 0;

  virtual void enterWhile_loop(SugarParser::While_loopContext *ctx) = 0;
  virtual void exitWhile_loop(SugarParser::While_loopContext *ctx) = 0;

  virtual void enterFor_loop(SugarParser::For_loopContext *ctx) = 0;
  virtual void exitFor_loop(SugarParser::For_loopContext *ctx) = 0;

  virtual void enterParameter_list(SugarParser::Parameter_listContext *ctx) = 0;
  virtual void exitParameter_list(SugarParser::Parameter_listContext *ctx) = 0;

  virtual void enterClass_member_segment(SugarParser::Class_member_segmentContext *ctx) = 0;
  virtual void exitClass_member_segment(SugarParser::Class_member_segmentContext *ctx) = 0;

  virtual void enterClass_constructor(SugarParser::Class_constructorContext *ctx) = 0;
  virtual void exitClass_constructor(SugarParser::Class_constructorContext *ctx) = 0;

  virtual void enterClass_operator_override(SugarParser::Class_operator_overrideContext *ctx) = 0;
  virtual void exitClass_operator_override(SugarParser::Class_operator_overrideContext *ctx) = 0;

  virtual void enterClass_overrideable_operator(SugarParser::Class_overrideable_operatorContext *ctx) = 0;
  virtual void exitClass_overrideable_operator(SugarParser::Class_overrideable_operatorContext *ctx) = 0;

  virtual void enterVariable_type(SugarParser::Variable_typeContext *ctx) = 0;
  virtual void exitVariable_type(SugarParser::Variable_typeContext *ctx) = 0;

  virtual void enterFunction_call(SugarParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(SugarParser::Function_callContext *ctx) = 0;

  virtual void enterArgument_list(SugarParser::Argument_listContext *ctx) = 0;
  virtual void exitArgument_list(SugarParser::Argument_listContext *ctx) = 0;

  virtual void enterUser_defined_type(SugarParser::User_defined_typeContext *ctx) = 0;
  virtual void exitUser_defined_type(SugarParser::User_defined_typeContext *ctx) = 0;

  virtual void enterComparison_symbol(SugarParser::Comparison_symbolContext *ctx) = 0;
  virtual void exitComparison_symbol(SugarParser::Comparison_symbolContext *ctx) = 0;

  virtual void enterFormatted_string(SugarParser::Formatted_stringContext *ctx) = 0;
  virtual void exitFormatted_string(SugarParser::Formatted_stringContext *ctx) = 0;

  virtual void enterAnd_logic_operator(SugarParser::And_logic_operatorContext *ctx) = 0;
  virtual void exitAnd_logic_operator(SugarParser::And_logic_operatorContext *ctx) = 0;

  virtual void enterOr_logic_operator(SugarParser::Or_logic_operatorContext *ctx) = 0;
  virtual void exitOr_logic_operator(SugarParser::Or_logic_operatorContext *ctx) = 0;


};

