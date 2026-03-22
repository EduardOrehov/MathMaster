#include "mathmaster/core/Engine.hpp"

#include <sstream>

#include "mathmaster/document/Worksheet.hpp"

namespace mathmaster::core {

std::string Engine::describe(const document::Worksheet& worksheet) const {
    std::ostringstream stream;
    stream << "Worksheet: " << worksheet.title()
           << ", regions: " << worksheet.region_count();
    return stream.str();
}

}  // namespace mathmaster::core
