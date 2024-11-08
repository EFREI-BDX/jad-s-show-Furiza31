cmake_minimum_required(VERSION 3.10)

project(JADSSHOW)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/includes)

file(GLOB_RECURSE SOURCES
  "${PROJECT_SOURCE_DIR}/**.cpp"
  "${PROJECT_SOURCE_DIR}/**.hpp"
)

list(FILTER SOURCES EXCLUDE REGEX "CMakeFiles")

add_executable(JADSSHOW ${SOURCES})
