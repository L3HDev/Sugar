set(UTIL_NAME output-manager)
file(GLOB_RECURSE util_src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

add_library(${UTIL_NAME} STATIC ${util_src})

set_target_properties(${UTIL_NAME} PROPERTIES
    LINKER_LANGUAGE CXX
    INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/src"
)

target_link_directories(${UTIL_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)