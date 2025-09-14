#ifndef FLAGS_INFO_HPP
#define FLAGS_INFO_HPP

#include <vector>
#include <string>
#include <unordered_map>
#include <functional>

#include "flags/helpers.hpp"

struct FlagInfo {
	std::string name;
	std::string arguments;
	std::string description;
	std::function<void(const std::vector<std::string>&)> handler; // Function to execute this flag
};

extern const std::unordered_map<char, FlagInfo> supported_flags;

#endif // FLAGS_INFO_HPP
