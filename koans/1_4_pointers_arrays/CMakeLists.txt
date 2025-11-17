# 1.4 Pointers, Arrays, References Koans

add_executable(test_pointer_arithmetic
    test_pointer_arithmetic.cpp
    pointer_arithmetic.cpp
)

target_link_libraries(test_pointer_arithmetic
    GTest::gtest_main
)

gtest_discover_tests(test_pointer_arithmetic)

# Array decay koan
add_executable(test_array_decay
    test_array_decay.cpp
    array_decay.cpp
)

target_link_libraries(test_array_decay
    GTest::gtest_main
)

gtest_discover_tests(test_array_decay)

# References koan
add_executable(test_references
    test_references.cpp
    references.cpp
)

target_link_libraries(test_references
    GTest::gtest_main
)

gtest_discover_tests(test_references)

# Function pointers koan
add_executable(test_function_pointers
    test_function_pointers.cpp
    function_pointers.cpp
)

target_link_libraries(test_function_pointers
    GTest::gtest_main
)

gtest_discover_tests(test_function_pointers)
