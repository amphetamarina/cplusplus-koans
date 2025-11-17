#include <gtest/gtest.h>
#include "physical_logical_lines.h"

// These tests will FAIL until you fix the code in physical_logical_lines.cpp
// Your goal: make all tests pass by fixing the line continuation issues

TEST(PhysicalLogicalLines, MultilineString) {
    // A string should be able to span multiple physical lines using backslash
    std::string result = get_multiline_string();
    EXPECT_EQ(result, "This is a long string that spans multiple lines");
}

TEST(PhysicalLogicalLines, MultilineMacro) {
    // A macro definition can span multiple lines using backslash
    int result = use_multiline_macro(5);
    EXPECT_EQ(result, 10) << "The macro should double the input value";
}

TEST(PhysicalLogicalLines, ComplexCalculation) {
    // Multi-line macros must be properly continued
    int result = calculate_complex(5, 3);
    EXPECT_EQ(result, 16) << "Should calculate (5+3) * (5-3) = 8 * 2 = 16";

    result = calculate_complex(10, 6);
    EXPECT_EQ(result, 64) << "Should calculate (10+6) * (10-6) = 16 * 4 = 64";
}

// Learning objective: Understand that the preprocessor joins lines ending
// with backslash into a single logical line before compilation
