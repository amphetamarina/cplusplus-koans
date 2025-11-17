# 1.2 Names, Scopes, and Lookup Koans

add_executable(test_scope_rules
    test_scope_rules.cpp
    scope_rules.cpp
)

target_link_libraries(test_scope_rules
    GTest::gtest_main
)

gtest_discover_tests(test_scope_rules)

# Name shadowing koan
add_executable(test_name_shadowing
    test_name_shadowing.cpp
    name_shadowing.cpp
)

target_link_libraries(test_name_shadowing
    GTest::gtest_main
)

gtest_discover_tests(test_name_shadowing)

# Namespaces koan
add_executable(test_namespaces
    test_namespaces.cpp
    namespaces.cpp
)

target_link_libraries(test_namespaces
    GTest::gtest_main
)

gtest_discover_tests(test_namespaces)

# Linkage koan
add_executable(test_linkage
    test_linkage.cpp
    linkage.cpp
    linkage_helper.cpp
)

target_link_libraries(test_linkage
    GTest::gtest_main
)

gtest_discover_tests(test_linkage)
