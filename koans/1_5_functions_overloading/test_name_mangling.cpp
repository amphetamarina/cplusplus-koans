#include <gtest/gtest.h>
#include "name_mangling.h"

// These tests explore how name mangling works
// Your goal: understand how C++ encodes function signatures

TEST(NameMangling, ManglingEnablesOverloading) {
    int result = test_mangling_enables_overloading();
    EXPECT_EQ(result, 32)
        << "Each overloaded function gets a unique mangled symbol name";
}

TEST(NameMangling, NamespaceMangling) {
    int result = test_namespace_mangling();
    EXPECT_EQ(result, 36)
        << "Namespaces are encoded in the mangled name";
}

TEST(NameMangling, ManglingDifferences) {
    int result = test_mangling_differences();
    EXPECT_EQ(result, 310)
        << "Class members, free functions all get different manglings";
}

// Learning objectives:
// 1. Name mangling encodes function signatures into unique symbol names
// 2. This enables function overloading at the linker level
// 3. Mangled names include: namespace, class, function name, parameter types
// 4. Return type is NOT included in mangling
// 5. This is why you can't overload on return type alone
// 6. Mangling schemes differ between compilers (GCC, MSVC, etc.)
// 7. Use 'nm' or 'objdump' tools to view mangled names
// 8. Understanding mangling helps debug linker errors
