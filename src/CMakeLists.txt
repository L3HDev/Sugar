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
message("Searching for LLVM.")

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    if(NOT DEFINED LLVM_DEBUG_BUILD_PATH)
        set(LLVM_DEBUG_BUILD_PATH "C:\\Program Files\\LLVMDebug")
    endif()

    message("Looking for debug build of llvm.")
    find_package(LLVM REQUIRED HINTS ${LLVM_DEBUG_BUILD_PATH})

elseif (CMAKE_BUILD_TYPE STREQUAL "Release")
    if(NOT DEFINED LLVM_RELEASE_BUILD_PATH)
        set(LLVM_RELEASE_BUILD_PATH "C:\\Program Files\\LLVM")
    endif()
    
    message("Looking for release build of llvm.")
    find_package(LLVM REQUIRED HINTS ${LLVM_RELEASE_BUILD_PATH})
    
endif()

message("Found LLVM ${LLVM_PACKAGE_VERSION}")
message("Using LLVMConfig.cmake in: ${LLVM_DIR}")

list(APPEND CMAKE_MODULE_PATH "${LLVM_DIR}")
include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})

llvm_map_components_to_libnames(llvm_libs core support)

message("Adding LLVM-Libs: ${llvm_libs}")
# -----------------------------------------------------



target_link_libraries(${PROJECT_NAME} ${llvm_libs} ${used_modules} )
