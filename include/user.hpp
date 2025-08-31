#ifndef USER_HPP
#define USER_HPP

#include "credentials/credentials_structure.hpp"
#include <string>
#include <vector>

/**
 * @struct User
 * @brief Represents a user of the password manager.
 */
struct User {
	std::string name;		// User's name
	std::stirng last_name;	// User's surname
	std::string key;		// Key used for encryption and decryption
	std::vector<Credentials> credentials; // List of credentials stored by user
};

#endif // USER_HPP
