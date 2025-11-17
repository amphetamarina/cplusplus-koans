#include <gtest/gtest.h>
#include "references.h"

// These tests explore C++ references
// Your goal: understand how references work and differ from pointers

TEST(References, ReferenceBasics) {
    int result = test_reference_basics();
    EXPECT_EQ(result, 20)
        << "References are aliases - modifying ref modifies the original";
}

TEST(References, SwapUsingReferences) {
    int result = test_swap();
    EXPECT_EQ(result, 10)
        << "After swap(5, 10), x should be 10";
}

TEST(References, ReferenceLifetime) {
    int result = test_reference_lifetime();
    EXPECT_EQ(result, 200)
        << "References to static variables persist across calls";
}

TEST(References, ReferenceVsPointer) {
    int result = test_reference_vs_pointer();
    EXPECT_EQ(result, 100)
        << "ref = y assigns y's value to x (doesn't change what ref refers to)";
}

// Learning objectives:
// 1. References are aliases to existing objects
// 2. References must be initialized when declared
// 3. References cannot be null (unlike pointers)
// 4. References cannot be "reseated" (can't change what they refer to)
// 5. ref = value assigns to the referenced object, doesn't change the reference
// 6. References are safer than pointers for parameter passing
// 7. Use references for parameters, return values, and avoiding copies
