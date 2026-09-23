//
// Created by Egle Nusedaite on 23/09/2026.
//

#ifndef CPP_REFACTORING_EMAILVALIDATOR_H
#define CPP_REFACTORING_EMAILVALIDATOR_H

#include <regex>

class EmailValidator
{
public:
    bool isValidEmail(const char* email) const;
};

#endif //CPP_REFACTORING_EMAILVALIDATOR_H
