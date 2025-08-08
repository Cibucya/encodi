/* This file contains functions which will be called by command parser, what they need to do is
 * fully complete the command user asked for.
 * */

#include "credentials/cli/account.h"

#include "credentials/account.h"

#include <iostream>

void add_account_credential_cli() {
	if (add_account_credentials() == 0) {
		std::cout << "Account credential succesfully added\n";
	}
	else {
		std::cout << "Failed to add account credential.\n";
	}
}
