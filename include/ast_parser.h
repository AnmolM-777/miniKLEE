#ifndef AST_PARSER_H
#define AST_PARSER_H
#include <string>
#include <vector>
struct CFGNode { int id; std::string statement; int true_next; int false_next; };
class ASTParser { public: static std::vector<CFGNode> parse_c_code(const std::string& code); };
#endif

// Incremental development step #3
