
// Generated from E:/Sugar/Sugar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SugarListener.h"


/**
 * This class provides an empty implementation of SugarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SugarBaseListener : public SugarListener {
public:

  virtual void enterProgram(SugarParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(SugarParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(SugarParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(SugarParser::StatementContext * /*ctx*/) override { }

  virtual void enterBlock(SugarParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(SugarParser::BlockContext * /*ctx*/) override { }

  virtual void enterDeclaration(SugarParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(SugarParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterFunction_declaration(SugarParser::Function_declarationContext * /*ctx*/) override { }
  virtual void exitFunction_declaration(SugarParser::Function_declarationContext * /*ctx*/) override { }

  virtual void enterClass_init(SugarParser::Class_initContext * /*ctx*/) override { }
  virtual void exitClass_init(SugarParser::Class_initContext * /*ctx*/) override { }

  virtual void enterVar_declaration(SugarParser::Var_declarationContext * /*ctx*/) override { }
  virtual void exitVar_declaration(SugarParser::Var_declarationContext * /*ctx*/) override { }

  virtual void enterList_declaration(SugarParser::List_declarationContext * /*ctx*/) override { }
  virtual void exitList_declaration(SugarParser::List_declarationContext * /*ctx*/) override { }

  virtual void enterClass_inheritance_list(SugarParser::Class_inheritance_listContext * /*ctx*/) override { }
  virtual void exitClass_inheritance_list(SugarParser::Class_inheritance_listContext * /*ctx*/) override { }

  virtual void enterClass_declaration(SugarParser::Class_declarationContext * /*ctx*/) override { }
  virtual void exitClass_declaration(SugarParser::Class_declarationContext * /*ctx*/) override { }

  virtual void enterAssignment(SugarParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(SugarParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterBasic_assignment(SugarParser::Basic_assignmentContext * /*ctx*/) override { }
  virtual void exitBasic_assignment(SugarParser::Basic_assignmentContext * /*ctx*/) override { }

  virtual void enterDefault_assignment(SugarParser::Default_assignmentContext * /*ctx*/) override { }
  virtual void exitDefault_assignment(SugarParser::Default_assignmentContext * /*ctx*/) override { }

  virtual void enterReturn_statement(SugarParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(SugarParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterBreak_statement(SugarParser::Break_statementContext * /*ctx*/) override { }
  virtual void exitBreak_statement(SugarParser::Break_statementContext * /*ctx*/) override { }

  virtual void enterContinue_statement(SugarParser::Continue_statementContext * /*ctx*/) override { }
  virtual void exitContinue_statement(SugarParser::Continue_statementContext * /*ctx*/) override { }

  virtual void enterExpression(SugarParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(SugarParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterPipeline_expression(SugarParser::Pipeline_expressionContext * /*ctx*/) override { }
  virtual void exitPipeline_expression(SugarParser::Pipeline_expressionContext * /*ctx*/) override { }

  virtual void enterElvis_expression(SugarParser::Elvis_expressionContext * /*ctx*/) override { }
  virtual void exitElvis_expression(SugarParser::Elvis_expressionContext * /*ctx*/) override { }

  virtual void enterBoolean_or_expression(SugarParser::Boolean_or_expressionContext * /*ctx*/) override { }
  virtual void exitBoolean_or_expression(SugarParser::Boolean_or_expressionContext * /*ctx*/) override { }

  virtual void enterBoolean_and_expression(SugarParser::Boolean_and_expressionContext * /*ctx*/) override { }
  virtual void exitBoolean_and_expression(SugarParser::Boolean_and_expressionContext * /*ctx*/) override { }

  virtual void enterComparison_expression(SugarParser::Comparison_expressionContext * /*ctx*/) override { }
  virtual void exitComparison_expression(SugarParser::Comparison_expressionContext * /*ctx*/) override { }

  virtual void enterMulti_comparison_item(SugarParser::Multi_comparison_itemContext * /*ctx*/) override { }
  virtual void exitMulti_comparison_item(SugarParser::Multi_comparison_itemContext * /*ctx*/) override { }

  virtual void enterMulti_comparison_or_expression(SugarParser::Multi_comparison_or_expressionContext * /*ctx*/) override { }
  virtual void exitMulti_comparison_or_expression(SugarParser::Multi_comparison_or_expressionContext * /*ctx*/) override { }

  virtual void enterMulti_comparison_and_expression(SugarParser::Multi_comparison_and_expressionContext * /*ctx*/) override { }
  virtual void exitMulti_comparison_and_expression(SugarParser::Multi_comparison_and_expressionContext * /*ctx*/) override { }

  virtual void enterMulti_comparison_object_access(SugarParser::Multi_comparison_object_accessContext * /*ctx*/) override { }
  virtual void exitMulti_comparison_object_access(SugarParser::Multi_comparison_object_accessContext * /*ctx*/) override { }

  virtual void enterMulti_comparison_optional_object_access(SugarParser::Multi_comparison_optional_object_accessContext * /*ctx*/) override { }
  virtual void exitMulti_comparison_optional_object_access(SugarParser::Multi_comparison_optional_object_accessContext * /*ctx*/) override { }

  virtual void enterMulti_comparison_expression(SugarParser::Multi_comparison_expressionContext * /*ctx*/) override { }
  virtual void exitMulti_comparison_expression(SugarParser::Multi_comparison_expressionContext * /*ctx*/) override { }

  virtual void enterAdditive_expression(SugarParser::Additive_expressionContext * /*ctx*/) override { }
  virtual void exitAdditive_expression(SugarParser::Additive_expressionContext * /*ctx*/) override { }

  virtual void enterMultiplicative_expression(SugarParser::Multiplicative_expressionContext * /*ctx*/) override { }
  virtual void exitMultiplicative_expression(SugarParser::Multiplicative_expressionContext * /*ctx*/) override { }

  virtual void enterExponentiation_expression(SugarParser::Exponentiation_expressionContext * /*ctx*/) override { }
  virtual void exitExponentiation_expression(SugarParser::Exponentiation_expressionContext * /*ctx*/) override { }

  virtual void enterUnary_expression(SugarParser::Unary_expressionContext * /*ctx*/) override { }
  virtual void exitUnary_expression(SugarParser::Unary_expressionContext * /*ctx*/) override { }

  virtual void enterPost_fix_expression(SugarParser::Post_fix_expressionContext * /*ctx*/) override { }
  virtual void exitPost_fix_expression(SugarParser::Post_fix_expressionContext * /*ctx*/) override { }

  virtual void enterObject_access_chain(SugarParser::Object_access_chainContext * /*ctx*/) override { }
  virtual void exitObject_access_chain(SugarParser::Object_access_chainContext * /*ctx*/) override { }

  virtual void enterOptional_object_access_chain(SugarParser::Optional_object_access_chainContext * /*ctx*/) override { }
  virtual void exitOptional_object_access_chain(SugarParser::Optional_object_access_chainContext * /*ctx*/) override { }

  virtual void enterPrimary_expression(SugarParser::Primary_expressionContext * /*ctx*/) override { }
  virtual void exitPrimary_expression(SugarParser::Primary_expressionContext * /*ctx*/) override { }

  virtual void enterTerminal_expression(SugarParser::Terminal_expressionContext * /*ctx*/) override { }
  virtual void exitTerminal_expression(SugarParser::Terminal_expressionContext * /*ctx*/) override { }

  virtual void enterSwitch_expression(SugarParser::Switch_expressionContext * /*ctx*/) override { }
  virtual void exitSwitch_expression(SugarParser::Switch_expressionContext * /*ctx*/) override { }

  virtual void enterCase_list(SugarParser::Case_listContext * /*ctx*/) override { }
  virtual void exitCase_list(SugarParser::Case_listContext * /*ctx*/) override { }

  virtual void enterList_access(SugarParser::List_accessContext * /*ctx*/) override { }
  virtual void exitList_access(SugarParser::List_accessContext * /*ctx*/) override { }

  virtual void enterList_pushback(SugarParser::List_pushbackContext * /*ctx*/) override { }
  virtual void exitList_pushback(SugarParser::List_pushbackContext * /*ctx*/) override { }

  virtual void enterList_insertion(SugarParser::List_insertionContext * /*ctx*/) override { }
  virtual void exitList_insertion(SugarParser::List_insertionContext * /*ctx*/) override { }

  virtual void enterList_removal(SugarParser::List_removalContext * /*ctx*/) override { }
  virtual void exitList_removal(SugarParser::List_removalContext * /*ctx*/) override { }

  virtual void enterList_at_access(SugarParser::List_at_accessContext * /*ctx*/) override { }
  virtual void exitList_at_access(SugarParser::List_at_accessContext * /*ctx*/) override { }

  virtual void enterIf_expression(SugarParser::If_expressionContext * /*ctx*/) override { }
  virtual void exitIf_expression(SugarParser::If_expressionContext * /*ctx*/) override { }

  virtual void enterLoop_expression(SugarParser::Loop_expressionContext * /*ctx*/) override { }
  virtual void exitLoop_expression(SugarParser::Loop_expressionContext * /*ctx*/) override { }

  virtual void enterWhile_loop(SugarParser::While_loopContext * /*ctx*/) override { }
  virtual void exitWhile_loop(SugarParser::While_loopContext * /*ctx*/) override { }

  virtual void enterFor_loop(SugarParser::For_loopContext * /*ctx*/) override { }
  virtual void exitFor_loop(SugarParser::For_loopContext * /*ctx*/) override { }

  virtual void enterParameter_list(SugarParser::Parameter_listContext * /*ctx*/) override { }
  virtual void exitParameter_list(SugarParser::Parameter_listContext * /*ctx*/) override { }

  virtual void enterClass_member_segment(SugarParser::Class_member_segmentContext * /*ctx*/) override { }
  virtual void exitClass_member_segment(SugarParser::Class_member_segmentContext * /*ctx*/) override { }

  virtual void enterClass_constructor(SugarParser::Class_constructorContext * /*ctx*/) override { }
  virtual void exitClass_constructor(SugarParser::Class_constructorContext * /*ctx*/) override { }

  virtual void enterClass_operator_override(SugarParser::Class_operator_overrideContext * /*ctx*/) override { }
  virtual void exitClass_operator_override(SugarParser::Class_operator_overrideContext * /*ctx*/) override { }

  virtual void enterClass_overrideable_operator(SugarParser::Class_overrideable_operatorContext * /*ctx*/) override { }
  virtual void exitClass_overrideable_operator(SugarParser::Class_overrideable_operatorContext * /*ctx*/) override { }

  virtual void enterVariable_type(SugarParser::Variable_typeContext * /*ctx*/) override { }
  virtual void exitVariable_type(SugarParser::Variable_typeContext * /*ctx*/) override { }

  virtual void enterFunction_call(SugarParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(SugarParser::Function_callContext * /*ctx*/) override { }

  virtual void enterArgument_list(SugarParser::Argument_listContext * /*ctx*/) override { }
  virtual void exitArgument_list(SugarParser::Argument_listContext * /*ctx*/) override { }

  virtual void enterUser_defined_type(SugarParser::User_defined_typeContext * /*ctx*/) override { }
  virtual void exitUser_defined_type(SugarParser::User_defined_typeContext * /*ctx*/) override { }

  virtual void enterComparison_symbol(SugarParser::Comparison_symbolContext * /*ctx*/) override { }
  virtual void exitComparison_symbol(SugarParser::Comparison_symbolContext * /*ctx*/) override { }

  virtual void enterFormatted_string(SugarParser::Formatted_stringContext * /*ctx*/) override { }
  virtual void exitFormatted_string(SugarParser::Formatted_stringContext * /*ctx*/) override { }

  virtual void enterAnd_logic_operator(SugarParser::And_logic_operatorContext * /*ctx*/) override { }
  virtual void exitAnd_logic_operator(SugarParser::And_logic_operatorContext * /*ctx*/) override { }

  virtual void enterOr_logic_operator(SugarParser::Or_logic_operatorContext * /*ctx*/) override { }
  virtual void exitOr_logic_operator(SugarParser::Or_logic_operatorContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

