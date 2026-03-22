#include "mathmaster/math/Expression.hpp"

namespace mathmaster::math {

Expression::Expression(std::string source) : source_(std::move(source)) {}

const std::string& Expression::source() const noexcept {
    return source_;
}

bool Expression::empty() const noexcept {
    return source_.empty();
}

}  // namespace mathmaster::math
