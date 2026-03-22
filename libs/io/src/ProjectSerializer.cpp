#include "mathmaster/io/ProjectSerializer.hpp"

#include <sstream>

#include "mathmaster/document/Worksheet.hpp"

namespace mathmaster::io {

std::string ProjectSerializer::serialize(const document::Worksheet& worksheet) const {
    std::ostringstream stream;
    stream << "{ \"title\": \"" << worksheet.title()
           << "\", \"regions\": " << worksheet.region_count() << " }";
    return stream.str();
}

}  // namespace mathmaster::io
