#include "argument_parser.h"

#include "credentials/cli/account.h"

#include <cstring>

void parse_args(int argc, char* argv[]) {
	for (int i=0; i<argc; ++i) {
		if (strcmp(argv[i], "-a") == 0) {
			add_account_credential_cli();
		}
	}
}
