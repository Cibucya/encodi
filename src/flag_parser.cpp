#include "flag_parser.hpp"

#include "credentials/cli/account.hpp"

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <unordered_map>

std::unordered_map<char,std::vector<std::string>> get_flags(const int& argc, char* argv[]) {
	std::unordered_map<char,std::vector<std::string>> flags;

	// Variable to store current option
	char opt = ' ';
	
	// Going through each argument
	for (int i = 1; i < argc; ++i) {
		std::string arg = argv[i];
		if (arg.size() > 1 && arg[0] == '-') {
			// Going through each option
			for (int j = 1; j < arg.size(); ++j) {
				opt = arg[j];

				// Given option is unique?
				if (flags.find(opt) != flags.end()) {
					flags.insert({'c', {{}}});
					continue;
				}
			}
		}
		else {
			// Current string is an argument for last option
			flags[opt].push_back(argv[i]);
		}
	}
	// Erase trash, e.g.:
	// ./app test1 test2
	// flags = { {' ': {"test1", "test2"}} }
	// since test1 and test 2 are options to the non-existent
	// arguments, they don't make sence and can be removed.
	flags.erase(' ');
	return flags;
}

void parse_flags(const std::unordered_map<char,std::vector<std::string>> flags) {

}
