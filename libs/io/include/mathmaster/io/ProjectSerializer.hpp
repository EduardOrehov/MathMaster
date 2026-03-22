#pragma once

#include <string>

namespace mathmaster::document {
class Worksheet;
}

namespace mathmaster::io {

class ProjectSerializer {
public:
    [[nodiscard]] std::string serialize(const document::Worksheet& worksheet) const;
};

}  // namespace mathmaster::io
