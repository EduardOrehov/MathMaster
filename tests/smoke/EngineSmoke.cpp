#include <cstdlib>
#include <iostream>

#include "mathmaster/core/Engine.hpp"
#include "mathmaster/document/Worksheet.hpp"

int main() {
    mathmaster::document::Worksheet worksheet("Smoke Test");
    worksheet.add_region("1 + 1");

    mathmaster::core::Engine engine;
    const auto summary = engine.describe(worksheet);

    if (summary.find("regions: 1") == std::string::npos) {
        std::cerr << "Unexpected engine summary: " << summary << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
