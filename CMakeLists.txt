cmake_minimum_required(VERSION 3.31)
project(Sugar)

message("Starting Sugar build.")

set(CMAKE_CXX_STANDARD 17)

# add_subdirectory(antlr)
add_subdirectory(src)





# find_package(Boost 1.82 REQUIRED COMPONENTS regex filesystem system)

# if(Boost_FOUND)
#   include_directories(${Boost_INCLUDE_DIRS})
#   target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})
# else()
#    message(FATAL_ERROR "Boost not found!")
# endif()

