cmake_minimum_required(VERSION 3.24)

project(MathMaster VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(MATHMASTER_BUILD_TESTS "Build MathMaster tests" ON)

add_library(mathmaster_core
    libs/core/src/Engine.cpp
)
target_include_directories(mathmaster_core PUBLIC libs/core/include)

add_library(mathmaster_math
    libs/math/src/Expression.cpp
)
target_include_directories(mathmaster_math PUBLIC libs/math/include)

add_library(mathmaster_units
    libs/units/src/UnitSystem.cpp
)
target_include_directories(mathmaster_units PUBLIC libs/units/include)

add_library(mathmaster_document
    libs/document/src/Worksheet.cpp
)
target_include_directories(mathmaster_document PUBLIC libs/document/include)

add_library(mathmaster_io
    libs/io/src/ProjectSerializer.cpp
)
target_include_directories(mathmaster_io PUBLIC libs/io/include)

target_link_libraries(mathmaster_document PUBLIC mathmaster_math mathmaster_units)
target_link_libraries(mathmaster_core PUBLIC mathmaster_document)
target_link_libraries(mathmaster_io PUBLIC mathmaster_document)

add_executable(mathmaster_desktop
    apps/desktop/src/main.cpp
)
target_link_libraries(mathmaster_desktop
    PRIVATE
        mathmaster_core
        mathmaster_document
        mathmaster_io
        mathmaster_math
        mathmaster_units
)

if(MATHMASTER_BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()
