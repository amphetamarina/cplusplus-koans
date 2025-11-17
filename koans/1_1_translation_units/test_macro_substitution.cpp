#include <gtest/gtest.h>
#include "macro_substitution.h"
#include <cstring>

// These tests will FAIL until you fix the macros in macro_substitution.cpp
// Your goal: understand macro expansion and make all tests pass

TEST(MacroSubstitution, SquareMacro) {
    // A simple square should work
    EXPECT_EQ(square(5), 25);
}

TEST(MacroSubstitution, SquareMacroWithExpression) {
    // This test reveals the importance of parenthesizing macro arguments
    // Without parentheses: SQUARE(2 + 3) expands to 2 + 3 * 2 + 3 = 11
    // With parentheses: SQUARE(2 + 3) expands to (2 + 3) * (2 + 3) = 25
    EXPECT_EQ(add_and_square(2, 3), 25)
        << "SQUARE(2 + 3) should be 25, not 11. Did you forget parentheses in the macro?";
}

TEST(MacroSubstitution, Stringification) {
    // The # operator stringifies the macro argument
    const char* result = get_stringified_value();
    EXPECT_STREQ(result, "value")
        << "STRINGIFY should convert the argument to a string literal";
}

TEST(MacroSubstitution, TokenPasting) {
    // The ## operator pastes tokens together
    int result = concatenate_numbers();
    EXPECT_EQ(result, 123)
        << "CONCAT(12, 3) should create the token 123";
}

// Learning objectives:
// 1. Macros perform textual substitution
// 2. Always parenthesize macro arguments and the entire expression
// 3. # stringifies arguments
// 4. ## pastes tokens together
