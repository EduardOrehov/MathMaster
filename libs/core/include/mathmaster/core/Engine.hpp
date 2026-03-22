#pragma once

#include <string>

namespace mathmaster::document {
class Worksheet;
}

namespace mathmaster::core {

class Engine {
public:
    [[nodiscard]] std::string describe(const document::Worksheet& worksheet) const;
};

}  // namespace mathmaster::core
