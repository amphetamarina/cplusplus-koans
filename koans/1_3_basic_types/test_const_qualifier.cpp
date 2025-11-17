#include <gtest/gtest.h>
#include "const_qualifier.h"

// These tests explore the const qualifier
// Your goal: understand const correctness in C++

TEST(ConstQualifier, ConstVariable) {
    int result = test_const_variable();
    EXPECT_EQ(result, 10)
        << "const variables cannot be modified after initialization";
}

TEST(ConstQualifier, ConstPointer) {
    int result = test_const_pointer();
    EXPECT_EQ(result, 15)
        << "int* const means pointer is const, but value can change";
}

TEST(ConstQualifier, ConstReference) {
    int result = test_const_reference();
    EXPECT_EQ(result, 50)
        << "const reference sees changes to the original variable";
}

TEST(ConstQualifier, ConstMemberFunction) {
    int result = test_const_member_function();
    EXPECT_EQ(result, 50)
        << "const member functions can modify mutable members (25 * 2 = 50)";
}

// Learning objectives:
// 1. const variables must be initialized and cannot be changed
// 2. const T* = pointer to const (can't change value through pointer)
// 3. T* const = const pointer (can't change what it points to)
// 4. const T* const = both const
// 5. const references can bind to temporaries
// 6. const member functions can't modify members (except mutable)
// 7. const objects can only call const member functions
