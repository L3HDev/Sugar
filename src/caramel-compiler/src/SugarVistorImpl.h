#pragma once

#include "SugarBaseVisitor.h"
#include "SugarParser.h"
#include <iostream>
#include "output-manager/cli-output-manager.h"

class SugarVisitorImpl : public SugarBaseVisitor
{
public:
    SugarVisitorImpl() : output(util::output::Verbosity_Level::Low) {}

    std::any visitProgram(SugarParser::ProgramContext *context) override
    {
        for (auto child : context->class_declaration())
        {
            output.append_msg({"Class Decalation: ",util::output::Verbosity_Level::Always});
            visit(child);
        }

        for (auto child : context->function_declaration())
        {
            output.append_msg({"Function Decalation: ",util::output::Verbosity_Level::Always});
            visit(child);
        }
        for (auto child : context->statement())
        {
            output.append_msg({"Statement: ",util::output::Verbosity_Level::Always});
            visit(child);
        }

        return {};
    }

    std::any visitClass_declaration(SugarParser::Class_declarationContext *context) override
    {
        std::cout << context->getText() << std::endl;
        return {};
    }

    std::any visitStatement(SugarParser::StatementContext *context) override
    {
        std::cout << context->getText() << std::endl;
        return {};
    }

    std::any visitFunction_declaration(SugarParser::Function_declarationContext *context) override
    {
        std::cout << context->getText() << std::endl;
        return {};
    }

private:
    util::output::CliOutputManager output;
};