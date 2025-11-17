#include "macro_substitution.h"
#include <string>

// Koan: Macros perform textual substitution
// Understanding how they expand is crucial to avoiding bugs

// FIX ME: This macro doesn't properly parenthesize its argument
// What happens when you call SQUARE(2 + 3)?
#define SQUARE(x) x * x

int square(int x) {
    return SQUARE(x);
}

int add_and_square(int a, int b) {
    // This should return (a+b)^2, but the macro is broken
    return SQUARE(a + b);
}

// FIX ME: Complete the stringification macro
// The # operator converts a macro argument to a string literal
#define STRINGIFY(x)

const char* get_stringified_value() {
    int value = 42;
    return STRINGIFY(value);
}

// FIX ME: Complete the token pasting macro
// The ## operator concatenates tokens
#define CONCAT(a, b)

int concatenate_numbers() {
    // This should create the number 123
    int num = CONCAT(12, 3);
    return num;
}
