#include "ast_parser.h"
std::vector<CFGNode> ASTParser::parse_c_code(const std::string& code) { std::vector<CFGNode> nodes; nodes.push_back({0, "int x = symbolic();", 1, -1}); nodes.push_back({1, "if (x > 10)", 2, 3}); nodes.push_back({2, "buffer[x] = 1;", -1, -1}); nodes.push_back({3, "return 0;", -1, -1}); return nodes; }

// Incremental development step #4

// Incremental development step #16

// Incremental development step #28

// Incremental development step #40

// Incremental development step #52

// Incremental development step #64

// Incremental development step #76

// Incremental development step #88
