#include "integral_types.h"
#include <limits>

// Koan: Integral types have promotion and conversion rules that can surprise you

int test_integral_promotion() {
    // FIX ME: Small integral types are promoted to int in expressions
    short a = 10;
    short b = 20;

    // What is the type of (a + b)?
    // Hint: both shorts are promoted to int before addition
    auto result = a + b;

    // Is result a short or an int?
    // FIX: Change ??? to the correct type
    bool is_int = std::is_same<decltype(result), ???>::value;

    return is_int ? 30 : 0;
}

int test_signedness_trap() {
    // FIX ME: Mixing signed and unsigned can cause unexpected results
    int signed_val = -1;
    unsigned int unsigned_val = 1;

    // When comparing signed and unsigned, signed is converted to unsigned
    // -1 becomes a very large positive number!
    if (signed_val < unsigned_val) {
        return 1;  // You might expect this
    } else {
        return 2;  // But you get this!
    }
}

bool test_unsigned_overflow() {
    // FIX ME: Unsigned overflow is well-defined (wraps around)
    unsigned int max_uint = std::numeric_limits<unsigned int>::max();

    // What happens when we add 1 to the maximum value?
    unsigned int result = max_uint + 1;

    // FIX: Replace ??? with the correct value
    return result == ???;  // Should be 0 (wraps around)
}

int test_char_signedness() {
    // FIX ME: Whether 'char' is signed or unsigned is implementation-defined!
    // Use explicit signed char or unsigned char if signedness matters

    char c = 200;  // What happens?

    // If char is unsigned: 200
    // If char is signed: -56 (on most systems with 8-bit char)

    // Use explicit types:
    unsigned char uc = 200;  // Always 200
    signed char sc = 200;    // Always -56 (on 8-bit systems)

    return uc;  // Should return 200
}
