#include <gtest/gtest.h>
#include "name_shadowing.h"

// These tests demonstrate name shadowing and how to resolve it
// Your goal: understand shadowing rules and how to access hidden names

TEST(NameShadowing, MemberShadowing) {
    Derived d;

    // The derived class has its own value that shadows Base::value
    EXPECT_EQ(d.get_derived_value(), 20)
        << "Derived::value should be 20";

    EXPECT_EQ(d.get_base_value(), 10)
        << "Should access Base::value using scope resolution";
}

TEST(NameShadowing, ParameterShadowing) {
    int result = test_parameter_shadowing(5);
    EXPECT_EQ(result, 105)
        << "Should sum parameter x (5) and global_x (100)";
}

TEST(NameShadowing, BaseClassAccess) {
    Derived d;

    // Direct access to derived's value
    EXPECT_EQ(d.value, 20);

    // Access base's value through scope resolution
    EXPECT_EQ(d.Base::value, 10)
        << "Can access shadowed base member with Base:: qualifier";
}

// Learning objectives:
// 1. Derived class members can shadow base class members
// 2. Use Base::name to access shadowed base class members
// 3. Parameters and local variables shadow global variables
// 4. Use ::name to access global scope when shadowed
// 5. Shadowing can lead to bugs - be careful with naming
