# 1.3 Basic Types & Value Categories Koans

add_executable(test_integral_types
    test_integral_types.cpp
    integral_types.cpp
)

target_link_libraries(test_integral_types
    GTest::gtest_main
)

gtest_discover_tests(test_integral_types)

# Type conversions koan
add_executable(test_type_conversions
    test_type_conversions.cpp
    type_conversions.cpp
)

target_link_libraries(test_type_conversions
    GTest::gtest_main
)

gtest_discover_tests(test_type_conversions)

# Const qualifier koan
add_executable(test_const_qualifier
    test_const_qualifier.cpp
    const_qualifier.cpp
)

target_link_libraries(test_const_qualifier
    GTest::gtest_main
)

gtest_discover_tests(test_const_qualifier)

# Value categories koan
add_executable(test_value_categories
    test_value_categories.cpp
    value_categories.cpp
)

target_link_libraries(test_value_categories
    GTest::gtest_main
)

gtest_discover_tests(test_value_categories)
