#include "references.h"

// Koan: References are aliases to existing objects

int test_reference_basics() {
    int x = 10;

    // FIX ME: A reference is an alias, not a copy
    int& ref = x;

    ref = 20;  // Modifies x through the reference

    // FIX: Replace ??? with the correct value
    return x;  // Should be ???
}

void swap_values(int& a, int& b) {
    // FIX ME: Implement swap using references
    int temp = a;
    a = b;
    b = temp;
}

int test_swap() {
    int x = 5;
    int y = 10;

    swap_values(x, y);

    // FIX: Replace ??? with the correct value after swap
    return x;  // Should be ???
}

int& get_reference() {
    static int value = 100;
    return value;
}

int test_reference_lifetime() {
    // FIX ME: References must refer to valid objects
    int& ref = get_reference();

    ref = 200;  // Modifies the static variable

    // Getting the reference again should show the modified value
    int& ref2 = get_reference();

    // FIX: Replace ??? with the correct value
    return ref2;  // Should be ???
}

int test_reference_vs_pointer() {
    int x = 42;

    // Reference: must be initialized, cannot be null, cannot be reseated
    int& ref = x;

    // Pointer: can be null, can point to different objects
    int* ptr = &x;

    int y = 100;
    // ref = y;  // This assigns y's value to x, doesn't change what ref refers to!
    ptr = &y;    // This makes ptr point to y

    // FIX ME: What are the values?
    // ref still refers to x, which now has value 100 (from ref = y assignment above)
    // ptr now points to y

    // After "ref = y", x becomes 100
    // FIX: Replace ??? with the correct value
    return x;  // Should be ??? (hint: ref = y assigns y's value to x)
}
