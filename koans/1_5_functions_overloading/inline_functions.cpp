#include "inline_functions.h"

// Koan: Inline functions have special ODR (One Definition Rule) exemptions

int test_inline_in_header() {
    // FIX ME: Inline functions can be defined in headers
    // Multiple translation units can include them without ODR violation

    int result1 = inline_square(5);
    int result2 = inline_add(3, 7);

    // FIX: Replace ??? with the correct values
    return result1 + result2;  // Should be 25 + 10 = ???
}

// Helper: Inline is a HINT to the compiler, not a command
inline int complex_calc(int x) {
    // Compilers may ignore inline for complex functions
    int result = 0;
    for (int i = 0; i < x; ++i) {
        result += i * i;
    }
    return result;
}

int test_inline_hint() {
    // FIX ME: 'inline' is a hint, not a guarantee
    // Modern compilers make their own inlining decisions
    // inline mainly affects ODR now, not optimization

    int result = complex_calc(5);  // 0 + 1 + 4 + 9 + 16 = 30

    // FIX: Replace ??? with the correct value
    return result;  // Should be ???
}

// Non-inline function - can only have ONE definition
int regular_multiply(int a, int b);

int regular_multiply(int a, int b) {
    return a * b;
}

int test_odr_compliance() {
    // FIX ME: Regular (non-inline) functions must follow ODR strictly
    // Only ONE definition across all translation units
    // Inline functions are exempt - can be defined in multiple TUs

    int result1 = regular_multiply(6, 7);
    int result2 = inline_square(4);

    // FIX: Replace ??? with the correct values
    return result1 + result2;  // Should be 42 + 16 = ???
}

int test_static_in_inline() {
    // FIX ME: Static variables in inline functions
    // With C++17+, inline functions share static variables across TUs
    // Before C++17, each TU had its own copy

    int result1 = get_counter();  // First call, counter becomes 1
    int result2 = get_counter();  // Second call, counter becomes 2
    int result3 = get_counter();  // Third call, counter becomes 3

    // FIX: Replace ??? with the correct values
    return result1 + result2 + result3;  // Should be 1 + 2 + 3 = ???
}
