
// Generated from E:/Sugar/Sugar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "SugarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SugarParser.
 */
class  SugarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SugarParser.
   */
    virtual std::any visitProgram(SugarParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(SugarParser::StatementContext *context) = 0;

    virtual std::any visitBlock(SugarParser::BlockContext *context) = 0;

    virtual std::any visitDeclaration(SugarParser::DeclarationContext *context) = 0;

    virtual std::any visitFunction_declaration(SugarParser::Function_declarationContext *context) = 0;

    virtual std::any visitClass_init(SugarParser::Class_initContext *context) = 0;

    virtual std::any visitVar_declaration(SugarParser::Var_declarationContext *context) = 0;

    virtual std::any visitList_declaration(SugarParser::List_declarationContext *context) = 0;

    virtual std::any visitClass_inheritance_list(SugarParser::Class_inheritance_listContext *context) = 0;

    virtual std::any visitClass_declaration(SugarParser::Class_declarationContext *context) = 0;

    virtual std::any visitAssignment(SugarParser::AssignmentContext *context) = 0;

    virtual std::any visitBasic_assignment(SugarParser::Basic_assignmentContext *context) = 0;

    virtual std::any visitDefault_assignment(SugarParser::Default_assignmentContext *context) = 0;

    virtual std::any visitReturn_statement(SugarParser::Return_statementContext *context) = 0;

    virtual std::any visitBreak_statement(SugarParser::Break_statementContext *context) = 0;

    virtual std::any visitContinue_statement(SugarParser::Continue_statementContext *context) = 0;

    virtual std::any visitExpression(SugarParser::ExpressionContext *context) = 0;

    virtual std::any visitPipeline_expression(SugarParser::Pipeline_expressionContext *context) = 0;

    virtual std::any visitElvis_expression(SugarParser::Elvis_expressionContext *context) = 0;

    virtual std::any visitBoolean_or_expression(SugarParser::Boolean_or_expressionContext *context) = 0;

    virtual std::any visitBoolean_and_expression(SugarParser::Boolean_and_expressionContext *context) = 0;

    virtual std::any visitComparison_expression(SugarParser::Comparison_expressionContext *context) = 0;

    virtual std::any visitMulti_comparison_item(SugarParser::Multi_comparison_itemContext *context) = 0;

    virtual std::any visitMulti_comparison_or_expression(SugarParser::Multi_comparison_or_expressionContext *context) = 0;

    virtual std::any visitMulti_comparison_and_expression(SugarParser::Multi_comparison_and_expressionContext *context) = 0;

    virtual std::any visitMulti_comparison_object_access(SugarParser::Multi_comparison_object_accessContext *context) = 0;

    virtual std::any visitMulti_comparison_optional_object_access(SugarParser::Multi_comparison_optional_object_accessContext *context) = 0;

    virtual std::any visitMulti_comparison_expression(SugarParser::Multi_comparison_expressionContext *context) = 0;

    virtual std::any visitAdditive_expression(SugarParser::Additive_expressionContext *context) = 0;

    virtual std::any visitMultiplicative_expression(SugarParser::Multiplicative_expressionContext *context) = 0;

    virtual std::any visitExponentiation_expression(SugarParser::Exponentiation_expressionContext *context) = 0;

    virtual std::any visitUnary_expression(SugarParser::Unary_expressionContext *context) = 0;

    virtual std::any visitPost_fix_expression(SugarParser::Post_fix_expressionContext *context) = 0;

    virtual std::any visitObject_access_chain(SugarParser::Object_access_chainContext *context) = 0;

    virtual std::any visitOptional_object_access_chain(SugarParser::Optional_object_access_chainContext *context) = 0;

    virtual std::any visitPrimary_expression(SugarParser::Primary_expressionContext *context) = 0;

    virtual std::any visitTerminal_expression(SugarParser::Terminal_expressionContext *context) = 0;

    virtual std::any visitSwitch_expression(SugarParser::Switch_expressionContext *context) = 0;

    virtual std::any visitCase_list(SugarParser::Case_listContext *context) = 0;

    virtual std::any visitList_access(SugarParser::List_accessContext *context) = 0;

    virtual std::any visitList_pushback(SugarParser::List_pushbackContext *context) = 0;

    virtual std::any visitList_insertion(SugarParser::List_insertionContext *context) = 0;

    virtual std::any visitList_removal(SugarParser::List_removalContext *context) = 0;

    virtual std::any visitList_at_access(SugarParser::List_at_accessContext *context) = 0;

    virtual std::any visitIf_expression(SugarParser::If_expressionContext *context) = 0;

    virtual std::any visitLoop_expression(SugarParser::Loop_expressionContext *context) = 0;

    virtual std::any visitWhile_loop(SugarParser::While_loopContext *context) = 0;

    virtual std::any visitFor_loop(SugarParser::For_loopContext *context) = 0;

    virtual std::any visitParameter_list(SugarParser::Parameter_listContext *context) = 0;

    virtual std::any visitClass_member_segment(SugarParser::Class_member_segmentContext *context) = 0;

    virtual std::any visitClass_constructor(SugarParser::Class_constructorContext *context) = 0;

    virtual std::any visitClass_operator_override(SugarParser::Class_operator_overrideContext *context) = 0;

    virtual std::any visitClass_overrideable_operator(SugarParser::Class_overrideable_operatorContext *context) = 0;

    virtual std::any visitVariable_type(SugarParser::Variable_typeContext *context) = 0;

    virtual std::any visitFunction_call(SugarParser::Function_callContext *context) = 0;

    virtual std::any visitArgument_list(SugarParser::Argument_listContext *context) = 0;

    virtual std::any visitUser_defined_type(SugarParser::User_defined_typeContext *context) = 0;

    virtual std::any visitComparison_symbol(SugarParser::Comparison_symbolContext *context) = 0;

    virtual std::any visitFormatted_string(SugarParser::Formatted_stringContext *context) = 0;

    virtual std::any visitAnd_logic_operator(SugarParser::And_logic_operatorContext *context) = 0;

    virtual std::any visitOr_logic_operator(SugarParser::Or_logic_operatorContext *context) = 0;


};

