#ifndef CREDENTIALS_STRUCTURE
#define CREDENTIALS_STRUCTURE

#include <string>

/**
 * @struct Credentials
 * @brief Holds the login information for a single website or service.
 */
struct Credentials {
    std::string site_name; // Name of the website or service.
    std::string username;  // Username for the account.
    std::string password;  // Password for the account.
};

#endif // CREDENTIALS_STRUCTURE
