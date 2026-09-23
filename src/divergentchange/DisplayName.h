#pragma once

#include <string>

namespace refactoring::divergentchange {

class DisplayName {
public:
    std::string format(const std::string& firstName, const std::string& lastName) const;
};

} // namespace refactoring::divergentchange
