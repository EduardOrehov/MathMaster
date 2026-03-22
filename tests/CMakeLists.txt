add_executable(mathmaster_smoke
    smoke/EngineSmoke.cpp
)

target_link_libraries(mathmaster_smoke
    PRIVATE
        mathmaster_core
        mathmaster_document
        mathmaster_math
        mathmaster_units
)

add_test(NAME mathmaster_smoke COMMAND mathmaster_smoke)
