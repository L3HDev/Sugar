#include <iostream>
#include <algorithm>
#include <memory>

// #include <llvm/ExecutionEngine/ExecutionEngine.h>
// #include <llvm/ExecutionEngine/GenericValue.h>
// #include <llvm/IR/IRBuilder.h>

#include "antlr4/SugarLexer.h"
#include "antlr4/SugarParser.h"
#include "antlr4/SugarVisitor.h"
#include "antlr4-runtime.h"
#include <fstream>

char *getCmdOption(char **begin, char **end, const std::string &option)
{
    char **itr = std::find(begin, end, option);
    if (itr != end && ++itr != end)
    {
        return *itr;
    }
    return 0;
}

bool cmdOptionExists(char **begin, char **end, const std::string &option)
{
    return std::find(begin, end, option) != end;
}

int test_antlr_usage()
{
    std::ifstream stream;
    stream.open("input.scene");
    
    antlr4::ANTLRInputStream input(stream);
    SugarLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    SugarParser parser(&tokens);    
    
    // SugarParser::FileContext* tree = parser.file();

    return 0;
}

int test_llvm_usage()
{
    // auto context = std::make_unique<llvm::LLVMContext>();
    // llvm::IRBuilder<> builder(*context);

    // auto module = std::make_unique<llvm::Module>("hello", *context);

    // // build a 'main' function
    // auto i32 = builder.getInt32Ty();
    // auto prototype = llvm::FunctionType::get(i32, false);
    // llvm::Function *main_fn = llvm::Function::Create(prototype, llvm::Function::ExternalLinkage, "main", module.get());
    // llvm::BasicBlock *body = llvm::BasicBlock::Create(*context, "body", main_fn);
    // builder.SetInsertPoint(body);

    // // use libc's printf function
    // auto i8p = builder.getPtrTy();
    // auto printf_prototype = llvm::FunctionType::get(i8p, true);
    // auto printf_fn = llvm::Function::Create(printf_prototype, llvm::Function::ExternalLinkage, "printf", module.get());

    // // call printf with our string
    // auto format_str = builder.CreateGlobalString("hello world\n");
    // builder.CreateCall(printf_fn, {format_str});

    // // return 0 from main
    // auto ret = llvm::ConstantInt::get(i32, 0);
    // builder.CreateRet(ret);

    // // write to output file
    // std::error_code EC;
    // llvm::raw_fd_ostream llvmOut("output.ll", EC);
    // module->print(llvmOut, nullptr);

    return 0;
}

int main(int argc, char *argv[])
{
    if (!cmdOptionExists(argv, argv + argc, "-f"))
    {
        std::cout << "No file given." << std::endl;
        return 1;
    }

    char *filename = getCmdOption(argv, argv + argc, "-f");

    if (filename)
    {
        std::cout << "File: " << filename << std::endl;
    }

    return test_antlr_usage();
}