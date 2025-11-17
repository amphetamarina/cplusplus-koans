#include "physical_logical_lines.h"

// Koan: In C++, a physical line can be continued with a backslash
// The preprocessor joins these into a single logical line

// FIX ME: This string is broken across multiple lines incorrectly
// Use backslash continuations to make it work
std::string get_multiline_string() {
    return "This is a long string
that spans multiple lines";
}

// FIX ME: This macro is incomplete
// Add the backslash continuations to make it work
#define MULTI_LINE_MACRO(x) \
    int result = x
    result = result * 2;

int use_multiline_macro(int value) {
    MULTI_LINE_MACRO(value);
    return result;
}

// FIX ME: Complete this function to return the correct value
// The macro should expand properly across multiple lines
#define COMPLEX_CALCULATION(a, b) \
    ((a) + (b)) *
    ((a) - (b))

int calculate_complex(int a, int b) {
    // This should return (a+b) * (a-b)
    return COMPLEX_CALCULATION(a, b);
}
