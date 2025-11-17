#include <gtest/gtest.h>
#include "extern_c_linkage.h"

// These tests explore extern "C" linkage
// Your goal: understand C/C++ interoperability

TEST(ExternCLinkage, CLinkage) {
    int result = test_c_linkage();
    EXPECT_EQ(result, 20)
        << "extern \"C\" prevents name mangling for C compatibility";
}

TEST(ExternCLinkage, NoOverloadingInC) {
    int result = test_no_overloading_in_c();
    EXPECT_EQ(result, 21)
        << "extern \"C\" functions cannot be overloaded - C doesn't support it";
}

TEST(ExternCLinkage, CCppInterop) {
    int result = test_c_cpp_interop();
    EXPECT_EQ(result, 30)
        << "extern \"C\" enables calling C++ functions from C code";
}

// Learning objectives:
// 1. extern "C" disables C++ name mangling
// 2. This allows C code to call C++ functions
// 3. extern "C" functions cannot be overloaded
// 4. C doesn't have name mangling, so each function needs unique name
// 5. Use extern "C" { ... } for multiple declarations
// 6. Common pattern: #ifdef __cplusplus for C/C++ compatible headers
// 7. C++ can call both C++ and extern "C" functions
// 8. Necessary for linking with C libraries
