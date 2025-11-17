#include <gtest/gtest.h>
#include "inline_functions.h"

// These tests explore inline function semantics and ODR
// Your goal: understand how inline affects linkage and definitions

TEST(InlineFunctions, InlineInHeader) {
    int result = test_inline_in_header();
    EXPECT_EQ(result, 35)
        << "Inline functions can be safely defined in headers";
}

TEST(InlineFunctions, InlineHint) {
    int result = test_inline_hint();
    EXPECT_EQ(result, 30)
        << "inline keyword is a hint to compiler, not a command; mainly affects ODR now";
}

TEST(InlineFunctions, ODRCompliance) {
    int result = test_odr_compliance();
    EXPECT_EQ(result, 58)
        << "Inline functions are exempt from ODR's one-definition rule";
}

TEST(InlineFunctions, StaticInInline) {
    int result = test_static_in_inline();
    EXPECT_EQ(result, 6)
        << "Static variables in inline functions are shared across TUs (C++17+)";
}

// Learning objectives:
// 1. inline keyword allows function definition in headers
// 2. Multiple translation units can include the same inline definition
// 3. This is an exception to the One Definition Rule (ODR)
// 4. All definitions must be identical (ODR still requires this)
// 5. inline is a hint for optimization, but compilers decide
// 6. Modern compilers inline non-inline functions and skip inlining inline ones
// 7. The main purpose of inline now is to allow header definitions
// 8. Static variables in inline functions (C++17+) are shared across TUs
