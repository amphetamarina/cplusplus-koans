#include <gtest/gtest.h>
#include "scope_rules.h"

// These tests will FAIL until you fix the scope issues
// Your goal: understand how C++ resolves names in different scopes

TEST(ScopeRules, BlockScope) {
    int result = test_block_scope();
    EXPECT_EQ(result, 15)
        << "Inner block should have its own x that shadows the outer x";
}

TEST(ScopeRules, NamespaceScope) {
    int result = test_namespace_scope();
    EXPECT_EQ(result, 200)
        << "Should access namespace_value from MyNamespace";
}

TEST(ScopeRules, GlobalResolution) {
    int result = test_global_resolution();
    EXPECT_EQ(result, 150)
        << "Should use :: to access global variable (100) + local variable (50)";
}

// Learning objectives:
// 1. Block scope: variables in inner blocks can shadow outer variables
// 2. Namespace scope: use qualified names to access namespace members
// 3. Global scope: use :: prefix to access global variables when shadowed
// 4. Name lookup follows scope hierarchy: local -> enclosing -> namespace -> global
