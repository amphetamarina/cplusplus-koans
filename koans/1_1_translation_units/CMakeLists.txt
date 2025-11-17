# 1.1 Translation Units & Preprocessing Koans

add_executable(test_physical_logical_lines
    test_physical_logical_lines.cpp
    physical_logical_lines.cpp
)

target_link_libraries(test_physical_logical_lines
    GTest::gtest_main
)

gtest_discover_tests(test_physical_logical_lines)

# Macro substitution koan
add_executable(test_macro_substitution
    test_macro_substitution.cpp
    macro_substitution.cpp
)

target_link_libraries(test_macro_substitution
    GTest::gtest_main
)

gtest_discover_tests(test_macro_substitution)

# Header guards koan
add_executable(test_header_guards
    test_header_guards.cpp
    header_guards.cpp
)

target_link_libraries(test_header_guards
    GTest::gtest_main
)

gtest_discover_tests(test_header_guards)

# Macro pitfalls koan
add_executable(test_macro_pitfalls
    test_macro_pitfalls.cpp
    macro_pitfalls.cpp
)

target_link_libraries(test_macro_pitfalls
    GTest::gtest_main
)

gtest_discover_tests(test_macro_pitfalls)
