#pragma once

#include "SugarBaseVisitor.h"
#include "SugarParser.h"
#include "output-manager/cli-output-manager.h"
#include <iostream>
#include <any>

class SugarVisitorImpl : public SugarBaseVisitor {
public:
  SugarVisitorImpl() : output(util::output::Verbosity_Level::Low) {}

  std::any visitBlock(SugarParser::BlockContext *ctx) override;

  std::any visitDeclaration(SugarParser::DeclarationContext *ctx) override;

  std::any visitClass_init(SugarParser::Class_initContext *ctx) override;

  std::any
  visitVar_declaration(SugarParser::Var_declarationContext *ctx) override;

  std::any
  visitList_declaration(SugarParser::List_declarationContext *ctx) override;

  std::any visitProgram(SugarParser::ProgramContext *ctx) override;

  std::any visitStatement(SugarParser::StatementContext *ctx) override;

  std::any visitFunction_declaration(
      SugarParser::Function_declarationContext *ctx) override;

  std::any
  visitClass_declaration(SugarParser::Class_declarationContext *ctx) override;

  std::any visitClass_inheritance_list(
      SugarParser::Class_inheritance_listContext *ctx) override;

  std::any visitAssignment(SugarParser::AssignmentContext *ctx) override;

  std::any
  visitBasic_assignment(SugarParser::Basic_assignmentContext *ctx) override;

  std::any
  visitDefault_assignment(SugarParser::Default_assignmentContext *ctx) override;

  std::any
  visitReturn_statement(SugarParser::Return_statementContext *ctx) override;

  std::any
  visitBreak_statement(SugarParser::Break_statementContext *ctx) override;

  std::any
  visitContinue_statement(SugarParser::Continue_statementContext *ctx) override;

  std::any visitExpression(SugarParser::ExpressionContext *ctx) override;

  std::any visitPipeline_expression(
      SugarParser::Pipeline_expressionContext *ctx) override;

  std::any
  visitElvis_expression(SugarParser::Elvis_expressionContext *ctx) override;

  std::any visitBoolean_or_expression(
      SugarParser::Boolean_or_expressionContext *ctx) override;

  std::any visitBoolean_and_expression(
      SugarParser::Boolean_and_expressionContext *ctx) override;

  std::any visitComparison_expression(
      SugarParser::Comparison_expressionContext *ctx) override;

  std::any visitMulti_comparison_item(
      SugarParser::Multi_comparison_itemContext *ctx) override;

  std::any visitMulti_comparison_or_expression(
      SugarParser::Multi_comparison_or_expressionContext *ctx) override;

  std::any visitMulti_comparison_and_expression(
      SugarParser::Multi_comparison_and_expressionContext *ctx) override;

  std::any visitMulti_comparison_object_access(
      SugarParser::Multi_comparison_object_accessContext *ctx) override;

  std::any visitMulti_comparison_optional_object_access(
      SugarParser::Multi_comparison_optional_object_accessContext *ctx)
      override;

  std::any visitMulti_comparison_expression(
      SugarParser::Multi_comparison_expressionContext *ctx) override;

  std::any visitAdditive_expression(
      SugarParser::Additive_expressionContext *ctx) override;

  std::any visitMultiplicative_expression(
      SugarParser::Multiplicative_expressionContext *ctx) override;

  std::any visitExponentiation_expression(
      SugarParser::Exponentiation_expressionContext *ctx) override;

  std::any
  visitUnary_expression(SugarParser::Unary_expressionContext *ctx) override;

  std::any visitPost_fix_expression(
      SugarParser::Post_fix_expressionContext *ctx) override;

  std::any visitObject_access_chain(
      SugarParser::Object_access_chainContext *ctx) override;

  std::any visitOptional_object_access_chain(
      SugarParser::Optional_object_access_chainContext *ctx) override;

  std::any
  visitPrimary_expression(SugarParser::Primary_expressionContext *ctx) override;

  std::any visitTerminal_expression(
      SugarParser::Terminal_expressionContext *ctx) override;

  std::any
  visitSwitch_expression(SugarParser::Switch_expressionContext *ctx) override;

  std::any visitCase_list(SugarParser::Case_listContext *ctx) override;

  std::any visitList_access(SugarParser::List_accessContext *ctx) override;

  std::any visitList_pushback(SugarParser::List_pushbackContext *ctx) override;

  std::any
  visitList_insertion(SugarParser::List_insertionContext *ctx) override;

  std::any visitList_removal(SugarParser::List_removalContext *ctx) override;

  std::any
  visitList_at_access(SugarParser::List_at_accessContext *ctx) override;

  std::any visitIf_expression(SugarParser::If_expressionContext *ctx) override;

  std::any
  visitLoop_expression(SugarParser::Loop_expressionContext *ctx) override;

  std::any visitWhile_loop(SugarParser::While_loopContext *ctx) override;

  std::any visitFor_loop(SugarParser::For_loopContext *ctx) override;

  std::any
  visitParameter_list(SugarParser::Parameter_listContext *ctx) override;

  std::any visitClass_member_segment(
      SugarParser::Class_member_segmentContext *ctx) override;

  std::any
  visitClass_constructor(SugarParser::Class_constructorContext *ctx) override;

  std::any visitClass_operator_override(
      SugarParser::Class_operator_overrideContext *ctx) override;

  std::any visitClass_overrideable_operator(
      SugarParser::Class_overrideable_operatorContext *ctx) override;

  std::any visitVariable_type(SugarParser::Variable_typeContext *ctx) override;

  std::any visitFunction_call(SugarParser::Function_callContext *ctx) override;

  std::any visitArgument_list(SugarParser::Argument_listContext *ctx) override;

  std::any
  visitUser_defined_type(SugarParser::User_defined_typeContext *ctx) override;

  std::any
  visitComparison_symbol(SugarParser::Comparison_symbolContext *ctx) override;

  std::any
  visitFormatted_string(SugarParser::Formatted_stringContext *ctx) override;

  std::any
  visitAnd_logic_operator(SugarParser::And_logic_operatorContext *ctx) override;

  std::any
  visitOr_logic_operator(SugarParser::Or_logic_operatorContext *ctx) override;

private:
  util::output::CliOutputManager output;
  // llvm::LLVMContext& context;
  // llvm::IRBuilder<>& builder;
};