#pragma once

#include "SugarBaseVisitor.h"
#include <any>

#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Module.h>

class RisVisitor : public SugarBaseVisitor {
public:
    RisVisitor()
    {
        context = std::make_unique<llvm::LLVMContext>();
        builder = std::make_unique<llvm::IRBuilder<>>(*context);
        module = std::make_unique<llvm::Module>("ris_impl", *context);
    }

    ~RisVisitor() override = default;

    std::any visitProgram(SugarParser::ProgramContext *ctx) override
    {
        std::cout << "Visiting program" << std::endl;
        auto main = llvm::Function::Create(
            llvm::FunctionType::get(llvm::Type::getVoidTy(*context), false),
            llvm::Function::ExternalLinkage,
            "___reserved___",
            module.get());
        builder->SetInsertPoint(llvm::BasicBlock::Create(*context, "entry", main));
        auto visit = visitChildren(ctx);

        std::error_code ec;
        std::cout << "Writing to ris_impl.ll" << std::endl;
        llvm::raw_fd_ostream out("ris_impl.ll", ec);
        module->print(out, nullptr);

        return visit;
    }

    std::any visitStatement(SugarParser::StatementContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitDeclaration(SugarParser::DeclarationContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitExpression(SugarParser::ExpressionContext *ctx) override
    {
        return visitChildren(ctx);
    }

private:
    std::unique_ptr<llvm::LLVMContext> context;
    std::unique_ptr<llvm::IRBuilder<>> builder;
    std::unique_ptr<llvm::Module> module;
};
