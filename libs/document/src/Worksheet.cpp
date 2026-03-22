#include "mathmaster/document/Worksheet.hpp"

namespace mathmaster::document {

Worksheet::Worksheet(std::string title) : title_(std::move(title)) {}

void Worksheet::add_region(std::string expression_source) {
    regions_.emplace_back(std::move(expression_source));
}

const std::string& Worksheet::title() const noexcept {
    return title_;
}

std::size_t Worksheet::region_count() const noexcept {
    return regions_.size();
}

const std::vector<mathmaster::math::Expression>& Worksheet::regions() const noexcept {
    return regions_;
}

const mathmaster::units::UnitSystem& Worksheet::unit_system() const noexcept {
    return unit_system_;
}

}  // namespace mathmaster::document
