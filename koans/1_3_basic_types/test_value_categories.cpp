#include <gtest/gtest.h>
#include "value_categories.h"

// These tests explore value categories (lvalues and rvalues)
// Your goal: understand the difference and reference binding rules

TEST(ValueCategories, LvalueRvalue) {
    int result = test_lvalue_rvalue();
    EXPECT_EQ(result, 20)
        << "lvalues have names and can be assigned to";
}

TEST(ValueCategories, ReferenceBinding) {
    std::string result = test_reference_binding();
    EXPECT_EQ(result, "temporary")
        << "const lvalue references can bind to rvalues (temporaries)";
}

TEST(ValueCategories, LvalueReference) {
    int result = test_lvalue_reference();
    EXPECT_EQ(result, 100)
        << "Non-const lvalue references require lvalues";
}

TEST(ValueCategories, ConstLvalueReference) {
    int result = test_const_lvalue_reference();
    EXPECT_EQ(result, 50)
        << "const lvalue references accept both lvalues and rvalues";
}

// Learning objectives:
// 1. lvalues: have identity (name, address), persist beyond expression
// 2. rvalues: temporary values, exist only during expression evaluation
// 3. You can take the address of lvalues, not rvalues
// 4. Non-const T& can only bind to lvalues
// 5. const T& can bind to both lvalues and rvalues
// 6. const T& extends the lifetime of temporaries
// 7. This is why functions use const T& parameters (accepts both)
