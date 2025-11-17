#include <gtest/gtest.h>
#include "macro_pitfalls.h"

// These tests reveal common macro pitfalls
// Your goal: understand the issues and fix the macros (or replace with better alternatives)

TEST(MacroPitfalls, MaxWithoutSideEffects) {
    // Simple case should work
    EXPECT_EQ(max_value(5, 3), 5);
    EXPECT_EQ(max_value(2, 8), 8);
}

TEST(MacroPitfalls, IncrementTwice) {
    // This should increment the value twice
    int result = increment_twice(10);
    EXPECT_EQ(result, 12) << "Should increment twice: 10 -> 11 -> 12";
}

TEST(MacroPitfalls, AreaWithExpressions) {
    // This reveals operator precedence issues
    EXPECT_EQ(compute_area(5, 4), 20);

    // The real test: what about expressions?
    // AREA(2+3, 4+5) without parentheses expands to: 2+3 * 4+5 = 2+12+5 = 19
    // With proper parentheses: (2+3) * (4+5) = 5 * 9 = 45
    int width = 2 + 3;
    int height = 4 + 5;
    EXPECT_EQ(compute_area(width, height), 45)
        << "AREA should properly handle expressions with parentheses";
}

// Learning objectives:
// 1. Macros can evaluate arguments multiple times (side-effect issues)
// 2. Macros don't respect operator precedence without parentheses
// 3. Use do-while(0) blocks for multi-statement macros
// 4. Prefer constexpr functions over macros when possible
