#include <gtest/gtest.h>
#include "overload_resolution.h"

// These tests explore how C++ resolves function overloads
// Your goal: understand the ranking system for overload resolution

TEST(OverloadResolution, ExactMatch) {
    int result = test_exact_match();
    EXPECT_EQ(result, 1)
        << "Exact type match is always preferred";
}

TEST(OverloadResolution, Promotion) {
    int result = test_promotion();
    EXPECT_EQ(result, 10)
        << "Integral promotions (short->int, char->int) happen before conversions";
}

TEST(OverloadResolution, StandardConversion) {
    int result = test_standard_conversion();
    EXPECT_EQ(result, 200)
        << "Floating-point promotion: float promotes to double";
}

TEST(OverloadResolution, ConstOverload) {
    int result = test_const_overload();
    EXPECT_EQ(result, 3)
        << "Non-const objects prefer non-const overloads; const objects require const overloads";
}

TEST(OverloadResolution, ReferenceBinding) {
    int result = test_reference_binding();
    EXPECT_EQ(result, 6)
        << "Lvalues prefer non-const ref; rvalues can only bind to const ref or by-value";
}

// Learning objectives:
// 1. Overload resolution follows strict ranking: exact match > promotion > conversion
// 2. Integral promotions (char, short -> int) happen before standard conversions
// 3. const-correctness affects overload resolution
// 4. Non-const lvalues prefer non-const reference overloads
// 5. Rvalues (temporaries) cannot bind to non-const references
// 6. By-value parameters can accept both lvalues and rvalues
// 7. Understanding these rules prevents surprising behavior
