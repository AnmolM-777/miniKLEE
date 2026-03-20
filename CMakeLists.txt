cmake_minimum_required(VERSION 3.14)
project(miniKLEE VERSION 1.0.0 LANGUAGES CXX C)
set(CMAKE_CXX_STANDARD 17)
find_package(Z3 REQUIRED)
include_directories(${Z3_CXX_INCLUDE_DIRS} include)
add_executable(mini_klee src/main.cpp src/symbolic_state.cpp src/z3_solver.cpp src/vuln_checker.cpp)
target_link_libraries(mini_klee PRIVATE ${Z3_LIBRARIES})

// Incremental development step #2

// Incremental development step #14

// Incremental development step #26

// Incremental development step #38

// Incremental development step #50

// Incremental development step #62

// Incremental development step #74

// Incremental development step #86

// Incremental development step #98
