#include "argument_parser.h"

#include "credentials/cli/account.h"

#include <iostream>
#include <cstring>

void parse_args(int argc, char* argv[]) {
	for (int i=0; i<argc; ++i) {
		if (strcmp(argv[i], "-n") == 0) {
			if (i+3 >= argc) {
				std::cout << "To execute -n command 3 arguments is needed.\n";
				continue;
			}
			add_account_credentials_cli(
				std::string(argv[i+1]),
				std::string(argv[i+2]),
				std::string(argv[i+3])
			);
		}
	}
}
