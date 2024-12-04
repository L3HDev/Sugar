cmake_minimum_required(VERSION 3.20)
project(Sugar)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

# find_package(Boost 1.82 REQUIRED COMPONENTS regex filesystem system)

# if(Boost_FOUND)
# include_directories(${Boost_INCLUDE_DIRS})

add_subdirectory(src)
# target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})
# else()
#     message(FATAL_ERROR "Boost not found!")
# endif()

