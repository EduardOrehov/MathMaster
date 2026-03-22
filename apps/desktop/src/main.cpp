#include <iostream>

#include "mathmaster/core/Engine.hpp"
#include "mathmaster/document/Worksheet.hpp"

int main() {
    mathmaster::document::Worksheet worksheet("Untitled Worksheet");
    worksheet.add_region("2 + 2");
    worksheet.add_region("sin(x)");

    mathmaster::core::Engine engine;
    const auto summary = engine.describe(worksheet);

    std::cout << "MathMaster bootstrap application\n";
    std::cout << summary << '\n';
    return 0;
}
