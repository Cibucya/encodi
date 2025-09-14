#ifndef FLAG_PARSER_HPP
#define FLAG_PARSER_HPP

#include <vector>
#include <string>
#include <unordered_map>

struct Argument {
	bool called;
	std::vector<std::string> parameters;
};

std::unordered_map<char,std::vector<std::string>> get_flags(const int& argc, char* argv[]);

void parse_flags(const std::unordered_map<char,std::vector<std::string>>& flags);

#endif // FLAG_PARSER_HPP
