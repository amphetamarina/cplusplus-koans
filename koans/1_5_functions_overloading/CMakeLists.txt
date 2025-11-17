# 1.5 Functions & Overloading Koans

# Overload resolution koan
add_executable(test_overload_resolution
    test_overload_resolution.cpp
    overload_resolution.cpp
)

target_link_libraries(test_overload_resolution
    GTest::gtest_main
)

gtest_discover_tests(test_overload_resolution)

# Default arguments koan
add_executable(test_default_arguments
    test_default_arguments.cpp
    default_arguments.cpp
)

target_link_libraries(test_default_arguments
    GTest::gtest_main
)

gtest_discover_tests(test_default_arguments)

# Inline functions koan
add_executable(test_inline_functions
    test_inline_functions.cpp
    inline_functions.cpp
)

target_link_libraries(test_inline_functions
    GTest::gtest_main
)

gtest_discover_tests(test_inline_functions)

# Name mangling koan
add_executable(test_name_mangling
    test_name_mangling.cpp
    name_mangling.cpp
)

target_link_libraries(test_name_mangling
    GTest::gtest_main
)

gtest_discover_tests(test_name_mangling)

# extern "C" linkage koan
add_executable(test_extern_c_linkage
    test_extern_c_linkage.cpp
    extern_c_linkage.cpp
)

target_link_libraries(test_extern_c_linkage
    GTest::gtest_main
)

gtest_discover_tests(test_extern_c_linkage)

# Static vs dynamic linkage koan
add_executable(test_static_dynamic_linkage
    test_static_dynamic_linkage.cpp
    static_dynamic_linkage.cpp
)

target_link_libraries(test_static_dynamic_linkage
    GTest::gtest_main
)

gtest_discover_tests(test_static_dynamic_linkage)
