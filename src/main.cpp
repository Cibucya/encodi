#include "flags/flag_parser.hpp"

#include <iostream>
#include <unordered_map>

int main(int argc, char* argv[]) {
	auto arguments = get_flags(argc, argv);
	parse_flags(arguments);

/*
	for (const auto& it : arguments) {
		std::cout << "option: " << it.first << '\n';
		std::cout << "flags:\n";
		for (int i=0; i<it.second.size(); ++i)
			std::cout << it.second[i] << ' ';
		std::cout << "\n\n";
	}
*/

	return 0;
}
