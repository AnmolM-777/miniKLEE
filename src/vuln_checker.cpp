#include "vuln_checker.h"
bool VulnChecker::check_cwe121_stack_overflow(Z3SolverWrapper& solver, int buffer_size) { solver.add_path_constraint("idx >= " + std::to_string(buffer_size)); return solver.is_satisfiable(); }
bool VulnChecker::check_cwe122_heap_overflow(Z3SolverWrapper& solver, int alloc_size) { solver.add_path_constraint("heap_offset >= " + std::to_string(alloc_size)); return solver.is_satisfiable(); }

// Incremental development step #8

// Incremental development step #20

// Incremental development step #32
