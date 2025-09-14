#include <unordered_map>

#include "flags/flags_info.hpp"
#include "flags/helpers.hpp"

const std::unordered_map<char, FlagInfo> supported_flags {
    {'h', {
		"help",
		"",
		"Shows this message.",
		show_general_help
	}},
    {'a', {
		"add",
		"<name> <surname> <url> <username> <password>",
		"Add new user.",
		show_in_development_msg
	}}
};
