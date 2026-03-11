#ifndef VULN_CHECKER_H
#define VULN_CHECKER_H
#include "z3_solver.h"
#include <string>
class VulnChecker { public: static bool check_cwe121_stack_overflow(Z3SolverWrapper& solver, int buffer_size); static bool check_cwe122_heap_overflow(Z3SolverWrapper& solver, int alloc_size); };
#endif

// Incremental development step #7

// Incremental development step #19

// Incremental development step #31

// Incremental development step #43

// Incremental development step #55

// Incremental development step #67

// Incremental development step #79
