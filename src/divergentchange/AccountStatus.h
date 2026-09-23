#ifndef CPP_REFACTORING_ACCOUNTSTATUS_H
#define CPP_REFACTORING_ACCOUNTSTATUS_H

#include <string>

class AccountStatus
{
public:
    std::string determineAccountStatus(int daysSinceLastLogin) const;
};

#endif //CPP_REFACTORING_ACCOUNTSTATUS_H
