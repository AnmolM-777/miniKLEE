#ifndef AST_PARSER_H
#define AST_PARSER_H
#include <string>
#include <vector>
struct CFGNode { int id; std::string statement; int true_next; int false_next; };
class ASTParser { public: static std::vector<CFGNode> parse_c_code(const std::string& code); };
#endif

// Incremental development step #3

// Incremental development step #15

// Incremental development step #27

// Incremental development step #39

// Incremental development step #51

// Incremental development step #63
