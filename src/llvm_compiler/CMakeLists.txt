set(module_name llvm_compiler)

set(headerfiles
    llvm_compiler.h
)

set(sourcefiles
    llvm_compiler.cpp
)

add_library(${module_name} ${headerfiles} ${sourcefiles})
target_include_directories(${module_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..)
