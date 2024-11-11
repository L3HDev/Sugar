set(module_name runtime)

set(headerfiles
    runtime.h
)

set(sourcefiles
    runtime.cpp
)

add_library(${module_name} ${headerfiles} ${sourcefiles})
target_include_directories(${module_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..)
