#include "flags/helpers.hpp"
#include "flags/flags_info.hpp"

#include <iostream>

using namespace std;

void show_general_help(const std::vector<std::string>& args) {
	cout << "Usage: ./encodi -[options...] <arguments> <for> <last> <option>\n";
	for (const auto& opt : supported_flags) {
		char opt_char = opt.first;
		auto opt_data = opt.second;
		cout << '-' << opt.first << " --" << opt_data.name << '\t' << opt_data.arguments << '\t'
			 << opt_data.description << '\n';
	}
}

void show_in_development_msg(std::vector<std::string> flag) {
	cout << "one of the flags that you have called is currently being developed and is not available right now :(\n";
	// cout << "flag -" << flag[0] << " is currently being developed and is not available right now :(\n";
}
