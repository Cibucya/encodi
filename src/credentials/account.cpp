#include "credentials/account.h"

#include <iostream>
#include <fstream>

int add_account_credentials(std::string name, std::string username, std::string password) {
	std::ofstream credentials_file("credentials.bin", std::ios::app);
	if (!credentials_file.is_open()) {
		return 1;
	}

	credentials_file << name << ' ' << username << ' ' << password << '\n';
	credentials_file.close();

	return 0;
}
