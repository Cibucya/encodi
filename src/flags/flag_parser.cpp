#include "flags/flag_parser.hpp"
#include "flags/flags_info.hpp"

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
				std::cout << "i: " << i << '\n';
				std::cout << "j: " << j << '\n';

				// Given option is unique?
				if (flags.find(opt) == flags.end()) {
					std::cout << "inserting flag -" << opt << '\n';
					// Insert current option
					flags[opt];
					std::cout << "is inserted?: " << ((flags.find(opt) != flags.end()) ? "true" : "false") << '\n';
					continue;
				}
				std::cout << std::endl;
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

void parse_flags(const std::unordered_map<char,std::vector<std::string>>& flags) {
	bool show_help = false;

	std::cout << "given:\n";
	for (const auto& flag : flags) {
		std::cout << "flag.first: " << flag.first << '\n';
	}
	std::cout << "\n";

	std::cout << "supported:\n";
	for (const auto& flag : supported_flags) {
		std::cout << "flag.first: " << flag.first << '\n';
	}

	// Iterate through each flag
	for (const auto& flag : flags) {
		char opt = flag.first;
		bool found = false;

		std::cout << "current option: -" << opt << '\n';

		// If current flag is supported
		if (supported_flags.find(opt) != supported_flags.end()) {
			std::cout << "Found option -" << opt << '\n';
			found = true;
			supported_flags.at(opt).handler();
		}

		if (!found)
			show_help = true;
	}

	if (show_help) {
		std::cout << "printfing help.\n";
		supported_flags.at('h').handler();
	}
}
