#include "flag_parser.hpp"

#include <iostream>
#include <unordered_map>

int main(int argc, char* argv[]) {
	// parse_args(argc, argv);
	auto arguments = get_flags(argc, argv);

	/*
	for (const std::pair<const char, Argument>& it : arguments) {
		std::cout << "it: " << it.first << '\n';
	}
	*/

	for (const auto& it : arguments) {
		std::cout << "option: " << it.first << '\n';
		std::cout << "flags:\n";
		for (int i=0; i<it.second.size(); ++i)
			std::cout << it.second[i] << ' ';
		std::cout << "\n\n";
	}

	return 0;
}
