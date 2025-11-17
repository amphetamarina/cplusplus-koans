#include <gtest/gtest.h>
#include "linkage.h"

// These tests explore internal vs external linkage
// Your goal: understand how linkage affects visibility across translation units

TEST(Linkage, ExternalLinkage) {
    int result = test_external_linkage();
    EXPECT_EQ(result, 11)
        << "external_counter should be accessible from both linkage.cpp and linkage_helper.cpp";
}

TEST(Linkage, InternalLinkage) {
    int result = test_internal_linkage();
    EXPECT_EQ(result, 100)
        << "static variables have internal linkage (file scope only)";
}

TEST(Linkage, ExternalCounter) {
    external_counter = 5;
    increment_external();
    EXPECT_EQ(get_external(), 6)
        << "External variables can be modified across translation units";
}

// Learning objectives:
// 1. External linkage: accessible across translation units (default for functions, extern for variables)
// 2. Internal linkage: only accessible within the same translation unit (static keyword)
// 3. 'extern' in header = declaration; definition must be in exactly one .cpp file
// 4. Anonymous namespaces provide internal linkage (modern alternative to static)
// 5. Inline functions have external linkage but can be defined in headers (ODR exception)
