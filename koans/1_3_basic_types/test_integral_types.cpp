#include <gtest/gtest.h>
#include "integral_types.h"

// These tests explore integral type promotion and conversion rules
// Your goal: understand how C++ handles integral types

TEST(IntegralTypes, IntegralPromotion) {
    int result = test_integral_promotion();
    EXPECT_EQ(result, 30)
        << "Short values are promoted to int in expressions";
}

TEST(IntegralTypes, SignednessTrap) {
    int result = test_signedness_trap();
    EXPECT_EQ(result, 2)
        << "Mixing signed and unsigned: signed converts to unsigned, -1 becomes UINT_MAX";
}

TEST(IntegralTypes, UnsignedOverflow) {
    bool result = test_unsigned_overflow();
    EXPECT_TRUE(result)
        << "Unsigned overflow is well-defined: wraps around to 0";
}

TEST(IntegralTypes, CharSignedness) {
    int result = test_char_signedness();
    EXPECT_EQ(result, 200)
        << "unsigned char is always unsigned, regardless of platform";
}

// Learning objectives:
// 1. Small integral types (char, short) promote to int in expressions
// 2. Mixing signed/unsigned causes signed to convert to unsigned
// 3. Unsigned overflow wraps around (well-defined behavior)
// 4. Plain 'char' signedness is implementation-defined
// 5. Use signed char or unsigned char when signedness matters
