#include <gtest/gtest.h>
#include "function_pointers.h"

// These tests explore function pointers
// Your goal: understand how to use function pointers

TEST(FunctionPointers, BasicFunctionPointer) {
    int result = test_function_pointer();
    EXPECT_EQ(result, 12)
        << "Function pointer should call multiply(3, 4) = 12";
}

TEST(FunctionPointers, FunctionPointerArray) {
    int result = test_function_pointer_array();
    EXPECT_EQ(result, 9)
        << "Should compute (10 + 5) - (2 * 3) = 15 - 6 = 9";
}

TEST(FunctionPointers, CallbackPattern) {
    int result = test_callback();
    EXPECT_EQ(result, 50)
        << "Should sum: 13 + 7 + 30 = 50";
}

// Learning objectives:
// 1. Functions have addresses and can be pointed to
// 2. Syntax: return_type (*ptr_name)(parameters)
// 3. Function pointers can be stored in arrays
// 4. Function pointers enable callbacks and strategies
// 5. Type aliases make function pointer syntax clearer
// 6. Function names decay to pointers (like arrays)
// 7. Modern C++ prefers std::function for more flexibility
