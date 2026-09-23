#include "divergentchange/CustomerService.h"
#include "AccountStatus.h"
#include "DisplayName.h"
#include "EmailValidator.h"
#include "LoyaltyPoints.h"


namespace refactoring::divergentchange {

    bool CustomerService::isValidEmail(const char* email) const {
    return EmailValidator().isValidEmail(email);
}

std::string CustomerService::formatDisplayName(const std::string& firstName, const std::string& lastName) const {
    return DisplayName().format(firstName, lastName);
}

int CustomerService::calculateLoyaltyPoints(int numberOfPurchases) const {
    return LoyaltyPoints().calculate(numberOfPurchases);
}

std::string CustomerService::determineAccountStatus(int daysSinceLastLogin) const {
    return AccountStatus().determineAccountStatus(daysSinceLastLogin);
}

} // namespace refactoring::divergentchange
