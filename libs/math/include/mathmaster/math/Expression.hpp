#pragma once

#include <string>

namespace mathmaster::math {

class Expression {
public:
    Expression() = default;
    explicit Expression(std::string source);

    [[nodiscard]] const std::string& source() const noexcept;
    [[nodiscard]] bool empty() const noexcept;

private:
    std::string source_;
};

}  // namespace mathmaster::math
