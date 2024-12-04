
#include "SugarVistorImpl.h"
#include <SugarParser.h>
#include <any>

std::any SugarVisitorImpl::visitBlock(SugarParser::BlockContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Block: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitDeclaration(SugarParser::DeclarationContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Declaration: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitClass_init(SugarParser::Class_initContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Class Init: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitVar_declaration(SugarParser::Var_declarationContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Var Declaration: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitList_declaration(SugarParser::List_declarationContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "List Declaration: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}
std::any SugarVisitorImpl::visitProgram(SugarParser::ProgramContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Program: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitStatement(SugarParser::StatementContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Statement: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitFunction_declaration(
    SugarParser::Function_declarationContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Function Declaration: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitClass_declaration(
    SugarParser::Class_declarationContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Class Declaration: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitClass_inheritance_list(
    SugarParser::Class_inheritance_listContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Class Inheritance List: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitAssignment(SugarParser::AssignmentContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Assignment: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitBasic_assignment(
    SugarParser::Basic_assignmentContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Basic Assignment: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitDefault_assignment(
    SugarParser::Default_assignmentContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Default Assignment: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitReturn_statement(
    SugarParser::Return_statementContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Return Statement: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitBreak_statement(
    SugarParser::Break_statementContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Break Statement: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitContinue_statement(
    SugarParser::Continue_statementContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::Low, "Continue Statement: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitExpression(SugarParser::ExpressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitPipeline_expression(
    SugarParser::Pipeline_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Pipeline Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitElvis_expression(
    SugarParser::Elvis_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Elvis Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitBoolean_or_expression(
    SugarParser::Boolean_or_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Boolean Or Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}
std::any SugarVisitorImpl::visitBoolean_and_expression(
    SugarParser::Boolean_and_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Boolean And Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitComparison_expression(
    SugarParser::Comparison_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Comparison Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitMulti_comparison_item(
    SugarParser::Multi_comparison_itemContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Multi Comparison Item: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitMulti_comparison_or_expression(
    SugarParser::Multi_comparison_or_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Multi Comparison Or Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitMulti_comparison_and_expression(
    SugarParser::Multi_comparison_and_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Multi Comparison And Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitMulti_comparison_object_access(
    SugarParser::Multi_comparison_object_accessContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Multi Comparison Object Access: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitMulti_comparison_optional_object_access(
    SugarParser::Multi_comparison_optional_object_accessContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Multi Comparison Optional Object Access: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitMulti_comparison_expression(
    SugarParser::Multi_comparison_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Multi Comparison Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitAdditive_expression(
    SugarParser::Additive_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Additive Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitMultiplicative_expression(
    SugarParser::Multiplicative_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Multiplicative Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitExponentiation_expression(
    SugarParser::Exponentiation_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Exponentiation Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitUnary_expression(
    SugarParser::Unary_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Unary Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitPost_fix_expression(
    SugarParser::Post_fix_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Post Fix Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitObject_access_chain(
    SugarParser::Object_access_chainContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Object Access Chain: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitOptional_object_access_chain(
    SugarParser::Optional_object_access_chainContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Optional Object Access Chain: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitPrimary_expression(
    SugarParser::Primary_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Primary Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitTerminal_expression(
    SugarParser::Terminal_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Terminal Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitSwitch_expression(
    SugarParser::Switch_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Switch Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}
std::any SugarVisitorImpl::visitCase_list(SugarParser::Case_listContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Case List: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitList_access(SugarParser::List_accessContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "List Access: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitList_pushback(SugarParser::List_pushbackContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "List Pushback: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitList_insertion(SugarParser::List_insertionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "List Insertion: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitList_removal(SugarParser::List_removalContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "List Removal: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitList_at_access(SugarParser::List_at_accessContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "List At Access: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitIf_expression(SugarParser::If_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "If Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitLoop_expression(SugarParser::Loop_expressionContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Loop Expression: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitWhile_loop(SugarParser::While_loopContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "While Loop: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitFor_loop(SugarParser::For_loopContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "For Loop: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitParameter_list(SugarParser::Parameter_listContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Parameter List: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitClass_member_segment(SugarParser::Class_member_segmentContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Class Member Segment: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitClass_constructor(SugarParser::Class_constructorContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Class Constructor: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitClass_operator_override(SugarParser::Class_operator_overrideContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Class Operator Override: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitClass_overrideable_operator(SugarParser::Class_overrideable_operatorContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Class Overrideable Operator: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitVariable_type(SugarParser::Variable_typeContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Variable Type: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitFunction_call(SugarParser::Function_callContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Function Call: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitArgument_list(SugarParser::Argument_listContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Argument List: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitUser_defined_type(SugarParser::User_defined_typeContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "User Defined Type: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitComparison_symbol(SugarParser::Comparison_symbolContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Comparison Symbol: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitFormatted_string(SugarParser::Formatted_stringContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Formatted String: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitAnd_logic_operator(SugarParser::And_logic_operatorContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "And Logic Operator: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}

std::any SugarVisitorImpl::visitOr_logic_operator(SugarParser::Or_logic_operatorContext *ctx)
{
    output.append_msg(util::output::OutputMessage::create(
        util::output::Verbosity_Level::UltraLow, "Or Logic Operator: %s", ctx->getText().c_str()));
    return visitChildren(ctx);
}