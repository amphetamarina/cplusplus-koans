#include "static_dynamic_linkage.h"

// Koan: Static linkage limits visibility to current translation unit

// Static linkage - only visible in this .cpp file
static int internal_helper(int x) {
    return x * 100;
}

// External linkage - visible to other .cpp files (default for functions)
int external_function(int x) {
    return x * 200;
}

int test_static_linkage() {
    // FIX ME: static functions have internal linkage
    // They are only visible within this translation unit
    // Other .cpp files can have their own static functions with same name

    int result = internal_helper(3);  // -> 300

    // FIX: Replace ??? with the correct value
    return result;  // Should be ???
}

int test_external_linkage() {
    // FIX ME: Functions have external linkage by default
    // They can be called from other translation units

    int result = external_function(2);  // -> 400

    // FIX: Replace ??? with the correct value
    return result;  // Should be ???
}

// Anonymous namespace - modern alternative to static
namespace {
    int anonymous_helper(int x) {
        return x * 50;
    }
}

int test_internal_vs_external() {
    // FIX ME: Internal linkage (static or anonymous namespace) vs external
    // Internal: function is local to this translation unit
    // External: function is visible across translation units

    int result1 = internal_helper(1);   // static -> 100
    int result2 = anonymous_helper(1);  // anonymous namespace -> 50
    int result3 = external_function(1); // external -> 200

    // FIX: Replace ??? with the correct values
    return result1 + result2 + result3;  // Should be 100 + 50 + 200 = ???
}

int test_anonymous_namespace() {
    // FIX ME: Anonymous namespaces give internal linkage
    // Preferred over 'static' for functions in modern C++
    // More consistent with how classes and other types work

    int result = anonymous_helper(4);  // -> 200

    // Benefits of anonymous namespace:
    // 1. Works for classes, variables, functions
    // 2. More explicit than 'static'
    // 3. Allows using declarations inside

    // FIX: Replace ??? with the correct value
    return result;  // Should be ???
}

// Simulate "another translation unit"
// In reality, this would be in another .cpp file
namespace simulated_other_tu {
    // This would be in another .cpp file
    int call_external_from_other_tu_impl() {
        // Can call external_function from here
        return external_function(5);  // -> 1000

        // Cannot call internal_helper - it's static to other TU
        // return internal_helper(5);  // ERROR: undefined reference
    }
}

int call_external_from_other_tu() {
    return simulated_other_tu::call_external_from_other_tu_impl();
}
