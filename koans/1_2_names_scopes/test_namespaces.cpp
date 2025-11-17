#include <gtest/gtest.h>
#include "namespaces.h"

// These tests explore namespace features in C++
// Your goal: understand namespaces, using declarations, and ADL

TEST(Namespaces, AnonymousNamespace) {
    int result = test_anonymous_namespace();
    EXPECT_EQ(result, 2)
        << "Anonymous namespace gives internal linkage";
}

TEST(Namespaces, UsingDirective) {
    std::string result = test_using_directive();
    EXPECT_EQ(result, "Library A and Library A")
        << "Should use 'using LibraryA::get_name' to bring function into scope";
}

TEST(Namespaces, ArgumentDependentLookup) {
    int result = test_adl_lookup();
    EXPECT_EQ(result, 25)
        << "ADL should find distance() because arguments are in MathLib namespace";
}

// Learning objectives:
// 1. Anonymous namespaces provide internal linkage (alternative to static)
// 2. 'using' declarations bring specific names into current scope
// 3. 'using namespace' brings all names (avoid in headers!)
// 4. ADL (Argument-Dependent Lookup) finds functions in argument's namespace
// 5. ADL is why you can call 'swap(a, b)' instead of 'std::swap(a, b)'
