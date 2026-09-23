//
// Created by Egle Nusedaite on 23/09/2026.
//

#include <regex>
#include "EmailValidator.h"

bool EmailValidator::isValidEmail(const char *email) const {
    if (email == nullptr) {
        return false;
    }
    static const std::basic_regex<char> pattern("^[A-Za-z0-9+_.-]+@[A-Za-z0-9.-]+$");
    return std::regex_match(email, pattern);
}
