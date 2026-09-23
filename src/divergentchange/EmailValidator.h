//
// Created by Egle Nusedaite on 23/09/2026.
//

#ifndef CPP_REFACTORING_EMAILVALIDATOR_H
#define CPP_REFACTORING_EMAILVALIDATOR_H

#include <regex>

class EmailValidator
{
public:
    bool isValidEmail(const char* email) const
    {
        if (email == nullptr) {
            return false;
        }
        static const std::basic_regex<char> pattern("^[A-Za-z0-9+_.-]+@[A-Za-z0-9.-]+$");
        return std::regex_match(email, pattern);
    }
};

#endif //CPP_REFACTORING_EMAILVALIDATOR_H
