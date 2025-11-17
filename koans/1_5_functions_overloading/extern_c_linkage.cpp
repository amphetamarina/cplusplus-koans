#include "extern_c_linkage.h"

// Koan: extern "C" disables name mangling for C compatibility

// C++ function - gets mangled name
int cpp_function(int x) {
    return x * 2;
}

// C linkage functions - NOT mangled
extern "C" {
    int c_function(int x) {
        return x * 3;
    }

    int another_c_function(double x) {
        return static_cast<int>(x * 4.0);
    }
}

// Compatible function
extern "C" int compatible_function(int x) {
    return x * 5;
}

int test_c_linkage() {
    // FIX ME: extern "C" prevents name mangling
    // This allows C code to call these functions
    // Symbol name is exactly "c_function", not "_Z10c_functioni"

    int result1 = cpp_function(2);        // Mangled: _Z12cpp_functioni -> 4
    int result2 = c_function(2);          // Not mangled: c_function -> 6
    int result3 = compatible_function(2); // Not mangled: compatible_function -> 10

    // FIX: Replace ??? with the correct values
    return result1 + result2 + result3;  // Should be 4 + 6 + 10 = ???
}

// These would cause linker errors if uncommented:
// extern "C" {
//     int overload(int x);
//     int overload(double x);  // ERROR: C doesn't support overloading!
// }
// Both would have symbol name "overload" -> collision!

int test_no_overloading_in_c() {
    // FIX ME: extern "C" functions cannot be overloaded
    // C doesn't have name mangling, so overloading is impossible
    // All overloaded functions would have the same symbol name

    // Only one version of c_function exists
    int result = c_function(7);  // -> 21

    // This would be an error if we tried to overload:
    // extern "C" int c_function(double x);  // ERROR!

    // FIX: Replace ??? with the correct value
    return result;  // Should be ???
}

// Simulating C/C++ interop
namespace {
    int call_from_c_style() {
        // Imagine this is called from C code
        return compatible_function(3);  // -> 15
    }

    int call_from_cpp_style() {
        // C++ code can call both C and C++ linkage functions
        return cpp_function(3) + c_function(3);  // 6 + 9 = 15
    }
}

int test_c_cpp_interop() {
    // FIX ME: extern "C" enables C/C++ interoperability
    // C code can call extern "C" functions
    // C++ code can call both C++ and extern "C" functions

    int result1 = call_from_c_style();   // -> 15
    int result2 = call_from_cpp_style(); // -> 15

    // Common pattern in headers:
    // #ifdef __cplusplus
    // extern "C" {
    // #endif
    //   ... C function declarations ...
    // #ifdef __cplusplus
    // }
    // #endif

    // FIX: Replace ??? with the correct values
    return result1 + result2;  // Should be 15 + 15 = ???
}
