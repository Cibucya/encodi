/* This file contains functions which will be called by command parser, what they need to do is
 * fully complete the command user asked for.
 * */

#include "credentials/cli/account.hpp"

#include "credentials/account.hpp"

#include <iostream>
#include <string>

void add_account_credentials_cli(std::string name, std::string username, std::string password) {
	if (add_account_credentials(name, username, password) == 0) {
		std::cout << "Account credential succesfully added\n";
	}
	else {
		std::cout << "Failed to add account credential.\n";
	}
}
