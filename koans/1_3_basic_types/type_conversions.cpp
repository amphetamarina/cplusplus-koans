#include "type_conversions.h"

// Koan: C++ performs implicit type conversions that can lose information

int test_implicit_conversion() {
    // FIX ME: Implicit conversion from double to int truncates
    double pi = 3.14159;

    // What is the value of x?
    int x = pi;  // Truncates to 3

    // FIX: Replace ??? with the correct value
    return x;  // Should be ???
}

double test_narrowing_conversion() {
    // FIX ME: Narrowing conversions can lose precision
    long long big_number = 123456789012345LL;

    // Converting to float may lose precision
    float f = static_cast<float>(big_number);

    // Converting back doesn't restore the original value
    long long back = static_cast<long long>(f);

    // FIX: Is back == big_number? true or false?
    bool same = (back == big_number);

    return same ? 1.0 : 0.0;  // Should return 0.0 (they're not equal)
}

int test_floating_to_integral() {
    // FIX ME: Floating point to integral conversion truncates (doesn't round)
    double value = 7.9;

    int truncated = static_cast<int>(value);

    // FIX: Replace ??? with the correct value
    return truncated;  // Should be ??? (7, not 8!)
}

bool test_bool_conversion() {
    // FIX ME: Any non-zero value converts to true
    int zero = 0;
    int positive = 42;
    int negative = -1;

    bool b1 = zero;      // false
    bool b2 = positive;  // true
    bool b3 = negative;  // true

    // FIX: Replace ??? with the correct expression
    return (b1 == false) && (b2 == true) && (b3 == ???);
}
