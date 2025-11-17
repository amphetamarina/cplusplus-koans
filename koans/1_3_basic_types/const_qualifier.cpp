#include "const_qualifier.h"

// Koan: const is a contract that this value won't be modified

int test_const_variable() {
    // FIX ME: const variables must be initialized and cannot be changed
    const int x = 10;

    // This would be an error:
    // x = 20;  // Error: cannot modify const variable

    // FIX: Replace ??? with the correct value
    return x;  // Should be ???
}

int test_const_pointer() {
    int a = 10;
    int b = 20;

    // FIX ME: Understand pointer-to-const vs const pointer

    // Pointer to const int: can't change value through pointer
    const int* ptr1 = &a;
    // *ptr1 = 15;  // Error!
    ptr1 = &b;  // OK - can change what it points to

    // Const pointer to int: can't change what it points to
    int* const ptr2 = &a;
    *ptr2 = 15;  // OK - can change the value
    // ptr2 = &b;  // Error!

    // Const pointer to const int: can't change either
    const int* const ptr3 = &a;
    // *ptr3 = 15;  // Error!
    // ptr3 = &b;   // Error!

    // FIX: Replace ??? with the correct value after ptr2 modifies a
    return a;  // Should be ???
}

int test_const_reference() {
    int value = 42;

    // FIX ME: const references can bind to temporaries
    const int& ref = value;

    // This would be an error:
    // ref = 50;  // Error: cannot modify through const reference

    // But we can modify through the original variable
    value = 50;

    // FIX: Replace ??? with the correct value
    return ref;  // ref sees the change - should be ???
}

int ConstDemo::get_value() const {
    // FIX ME: const member functions can't modify member variables
    // Except mutable ones!

    // This would be an error:
    // value = 100;  // Error!

    // But this is OK:
    cache = value * 2;  // mutable members can be modified

    return value;
}

void ConstDemo::set_value(int v) {
    // Non-const member function can modify members
    value = v;
}

int ConstDemo::get_cached() const {
    return cache;
}

int test_const_member_function() {
    const ConstDemo obj(25);

    // FIX ME: const objects can only call const member functions
    int val = obj.get_value();

    // This would be an error:
    // obj.set_value(30);  // Error: can't call non-const function on const object

    // FIX: Replace ??? with the correct value
    return obj.get_cached();  // Should be ??? (25 * 2)
}
