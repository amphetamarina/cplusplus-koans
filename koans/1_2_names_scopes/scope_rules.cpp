#include "scope_rules.h"

// Global variable
int global_value = 100;

namespace MyNamespace {
    int namespace_value = 200;
}

// Koan: Understanding block scope vs namespace scope

int test_block_scope() {
    int x = 10;

    // FIX ME: This inner block should have its own 'x'
    // Uncomment and fix the code
    {
        // int x = 20;  // This shadows the outer x
        x = x + 5;  // Which x are we modifying?
    }

    // What is the value of x here?
    return x;  // Should return 15 (outer x was modified)
}

int test_namespace_scope() {
    // FIX ME: Access the namespace_value from MyNamespace
    // Replace ??? with the correct qualified name
    int value = ???;
    return value;
}

int test_global_resolution() {
    int global_value = 50;  // Local variable shadows the global

    // FIX ME: Use the :: operator to access the global variable
    // Replace ??? with the correct expression
    int global = ???;  // Should be 100, not 50

    return global + global_value;  // Should return 150
}
