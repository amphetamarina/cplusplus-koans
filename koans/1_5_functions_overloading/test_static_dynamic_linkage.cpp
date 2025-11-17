#include <gtest/gtest.h>
#include "static_dynamic_linkage.h"

// These tests explore static vs external linkage
// Your goal: understand function visibility across translation units

TEST(StaticDynamicLinkage, StaticLinkage) {
    int result = test_static_linkage();
    EXPECT_EQ(result, 300)
        << "static functions have internal linkage - local to translation unit";
}

TEST(StaticDynamicLinkage, ExternalLinkage) {
    int result = test_external_linkage();
    EXPECT_EQ(result, 400)
        << "Functions have external linkage by default";
}

TEST(StaticDynamicLinkage, InternalVsExternal) {
    int result = test_internal_vs_external();
    EXPECT_EQ(result, 350)
        << "Internal linkage (static/anonymous) vs external linkage";
}

TEST(StaticDynamicLinkage, AnonymousNamespace) {
    int result = test_anonymous_namespace();
    EXPECT_EQ(result, 200)
        << "Anonymous namespaces provide internal linkage - modern alternative to static";
}

// Learning objectives:
// 1. Functions have external linkage by default
// 2. External linkage means visible across translation units
// 3. static keyword gives internal linkage to functions
// 4. Internal linkage means local to current translation unit
// 5. Each TU can have its own static function with same name
// 6. Anonymous namespaces also provide internal linkage
// 7. Anonymous namespace is preferred over static in modern C++
// 8. Anonymous namespace works for all declarations, not just functions
