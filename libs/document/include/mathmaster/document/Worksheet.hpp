#pragma once

#include <cstddef>
#include <string>
#include <vector>

#include "mathmaster/math/Expression.hpp"
#include "mathmaster/units/UnitSystem.hpp"

namespace mathmaster::document {

class Worksheet {
public:
    explicit Worksheet(std::string title);

    void add_region(std::string expression_source);

    [[nodiscard]] const std::string& title() const noexcept;
    [[nodiscard]] std::size_t region_count() const noexcept;
    [[nodiscard]] const std::vector<mathmaster::math::Expression>& regions() const noexcept;
    [[nodiscard]] const mathmaster::units::UnitSystem& unit_system() const noexcept;

private:
    std::string title_;
    std::vector<mathmaster::math::Expression> regions_;
    mathmaster::units::UnitSystem unit_system_;
};

}  // namespace mathmaster::document
