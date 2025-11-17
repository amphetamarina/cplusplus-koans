#include "default_arguments.h"

// Koan: Default arguments are substituted at compile-time at the call site

// Helper function with default arguments
int add(int a, int b = 10, int c = 20) {
    return a + b + c;
}

int test_default_substitution() {
    // FIX ME: Default arguments are filled in by the compiler at call site
    int result1 = add(1);        // Becomes add(1, 10, 20)
    int result2 = add(1, 2);     // Becomes add(1, 2, 20)
    int result3 = add(1, 2, 3);  // All arguments provided

    // FIX: Replace ??? with the correct values
    return result1 + result2 + result3;  // Should be 31 + 23 + 6 = ???
}

// Helper function to test rightmost rule
// void wrong(int a = 1, int b);  // ERROR: Can't have non-default after default

int multiply(int a, int b = 2, int c = 3) {
    return a * b * c;
}

int test_rightmost_only() {
    // FIX ME: Default arguments must be rightmost
    // You can omit trailing arguments, but not middle ones

    int result1 = multiply(2);     // Becomes multiply(2, 2, 3)
    int result2 = multiply(2, 4);  // Becomes multiply(2, 4, 3)

    // Note: You CANNOT call multiply(2, , 5) - syntax error!

    // FIX: Replace ??? with the correct values
    return result1 + result2;  // Should be 12 + 24 = ???
}

// Forward declaration (in header)
int compute(int x, int y);

// Definition with default argument
int compute(int x, int y = 100) {
    return x + y;
}

int test_declaration_vs_definition() {
    // FIX ME: Default arguments can be in declaration OR definition
    // If in declaration, they appear at call sites
    // If only in definition, they're still visible

    int result = compute(5);  // Uses default y = 100

    // FIX: Replace ??? with the correct value
    return result;  // Should be ???
}

// Global variable for testing evaluation time
int global_counter = 0;

int get_default() {
    return ++global_counter * 10;
}

int use_default(int value = get_default()) {
    return value;
}

int test_evaluation_time() {
    // FIX ME: Default argument expressions are evaluated at CALL time
    // Not at declaration time!

    global_counter = 0;  // Reset counter

    int result1 = use_default();  // Calls get_default(), counter becomes 1
    int result2 = use_default();  // Calls get_default() again, counter becomes 2
    int result3 = use_default(999);  // Doesn't call get_default()

    // FIX: Replace ??? with the correct values
    // result1 should be 10 (counter was 0, becomes 1, returns 1*10)
    // result2 should be 20 (counter was 1, becomes 2, returns 2*10)
    return result1 + result2 + result3;  // Should be 10 + 20 + 999 = ???
}
