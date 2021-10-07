#minimum version required
cmake_minimum_required (VERSION 3.5)

#specify project name
project (cpplrn)

# "CMAKE_BINARY_DIR" means project  base dirctory
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

INCLUDE_DIRECTORIES (${CMAKE_BINARY_DIR}/include)

file (GLOB SOURCES "src/*.cpp" "src/*.c")
add_executable (out ${SOURCES})
