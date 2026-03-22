#pragma once

#include <string>

namespace mathmaster::units {

class UnitSystem {
public:
    [[nodiscard]] std::string default_system_name() const;
};

}  // namespace mathmaster::units
