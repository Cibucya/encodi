#include "flags/help.hpp"
#include "flags/flags_info.hpp"

#include <iostream>

using namespace std;

void show_general_help() {
	cout << "Usage: ./encodi -[options...] <arguments> <for> <last> <option>\n";
	for (const auto& opt : supported_flags) {
		char opt_char = opt.first;
		auto opt_data = opt.second;
		cout << '-' << opt.first << " --" << opt_data.name << ' ' << opt_data.arguments << '\t'
			 << opt_data.description << '\n';
	}
}
