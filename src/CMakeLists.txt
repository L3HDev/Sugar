
# ANTLR------------------------------------------------
# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)
# add external build for antlrcpp
include(ExternalAntlr4Cpp)
# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
set(ANTLR_EXECUTABLE ${CMAKE_SOURCE_DIR}/tools/antlr-4.13.1-complete.jar)
# add macros to generate ANTLR Cpp code from grammar
find_package(ANTLR REQUIRED)

message("Building antlr at ${CMAKE_SOURCE_DIR}/antlr4")

# antlr_target is just not building the files....
execute_process(COMMAND antlr4 -visitor -Dlanguage=Cpp -o ${CMAKE_SOURCE_DIR}/antlr4 ${CMAKE_SOURCE_DIR}/Sugar.g4)

antlr_target(SceneGrammarParser Sugar.g4 VISITOR OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/antlr4/)
# add our project source directories
include_directories(${PROJECT_SOURCE_DIR}
					 ${PROJECT_SOURCE_DIR}/antlr4/
  )
# -----------------------------------------------------

set(used_modules
    lexer
    parser
    runtime
)

foreach(mod ${used_modules})
    add_subdirectory(${mod})
endforeach()

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# LLVM-------------------------------------------------
# message("Searching for LLVM.")

# if (CMAKE_BUILD_TYPE STREQUAL "Debug")
#     if(NOT DEFINED LLVM_DEBUG_BUILD_PATH)
#         set(LLVM_DEBUG_BUILD_PATH "C:\\Program Files\\LLVMDebug")
#     endif()

#     message("Looking for debug build of llvm.")
#     find_package(LLVM REQUIRED HINTS ${LLVM_DEBUG_BUILD_PATH})

# elseif (CMAKE_BUILD_TYPE STREQUAL "Release")
#     if(NOT DEFINED LLVM_RELEASE_BUILD_PATH)
#         set(LLVM_RELEASE_BUILD_PATH "C:\\Program Files\\LLVM")
#     endif()
    
#     message("Looking for release build of llvm.")
#     find_package(LLVM REQUIRED HINTS ${LLVM_RELEASE_BUILD_PATH})
    
# endif()

# message("Found LLVM ${LLVM_PACKAGE_VERSION}")
# message("Using LLVMConfig.cmake in: ${LLVM_DIR}")

# list(APPEND CMAKE_MODULE_PATH "${LLVM_DIR}")
# include_directories(${LLVM_INCLUDE_DIRS})
# separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
# add_definitions(${LLVM_DEFINITIONS_LIST})

# llvm_map_components_to_libnames(llvm_libs core support)

# message("Adding LLVM-Libs: ${llvm_libs}")
# -----------------------------------------------------

target_link_libraries(${PROJECT_NAME} ${llvm_libs} ${used_modules} antlr4_static)
# target_link_libraries(${PROJECT_NAME} antlr4_static)
