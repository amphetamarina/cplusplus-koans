#include <gtest/gtest.h>
#include "type_conversions.h"

// These tests explore type conversion rules
// Your goal: understand implicit and explicit conversions

TEST(TypeConversions, ImplicitConversion) {
    int result = test_implicit_conversion();
    EXPECT_EQ(result, 3)
        << "double to int conversion truncates decimal part";
}

TEST(TypeConversions, NarrowingConversion) {
    double result = test_narrowing_conversion();
    EXPECT_DOUBLE_EQ(result, 0.0)
        << "Large integers may lose precision when converted to float";
}

TEST(TypeConversions, FloatingToIntegral) {
    int result = test_floating_to_integral();
    EXPECT_EQ(result, 7)
        << "Floating to integral conversion truncates (doesn't round!)";
}

TEST(TypeConversions, BoolConversion) {
    bool result = test_bool_conversion();
    EXPECT_TRUE(result)
        << "Any non-zero value (including negative) converts to true";
}

// Learning objectives:
// 1. Implicit conversions can lose data (narrowing)
// 2. double/float to int truncates (doesn't round)
// 3. Large integers to float/double may lose precision
// 4. Any non-zero value converts to true
// 5. Use static_cast to make conversions explicit and intentional
// 6. C++11 brace initialization prevents narrowing conversions
