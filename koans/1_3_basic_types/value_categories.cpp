#include "value_categories.h"

// Koan: Understanding lvalues and rvalues (C++98/03 version)

int test_lvalue_rvalue() {
    // FIX ME: lvalues have names and addresses, rvalues are temporary

    int x = 10;  // x is an lvalue

    // You can take the address of an lvalue:
    int* ptr = &x;  // OK

    // You cannot take the address of an rvalue:
    // int* ptr2 = &10;  // Error! 10 is an rvalue

    // Assignment requires lvalue on the left:
    x = 20;  // OK - x is an lvalue
    // 10 = 20;  // Error! Can't assign to rvalue

    // FIX: Replace ??? with the correct value
    return x;  // Should be ???
}

std::string create_string() {
    return "temporary";
}

std::string test_reference_binding() {
    // FIX ME: Non-const lvalue references can't bind to rvalues
    std::string s = "hello";

    // std::string& ref1 = create_string();  // Error! rvalue can't bind to non-const reference

    // But const lvalue references CAN bind to rvalues:
    const std::string& ref2 = create_string();  // OK! Extends lifetime

    // This is why we often use const T& for function parameters
    // It accepts both lvalues and rvalues

    // FIX: Replace ??? with the correct string
    return ref2;  // Should be "???"
}

void modify_value(int& ref) {
    ref = 100;
}

int test_lvalue_reference() {
    int x = 50;

    // FIX ME: lvalue references require an lvalue
    modify_value(x);  // OK - x is an lvalue

    // modify_value(50);  // Error! 50 is an rvalue

    // FIX: Replace ??? with the correct value
    return x;  // Should be ???
}

int compute_sum(const int& a, const int& b) {
    return a + b;
}

int test_const_lvalue_reference() {
    int x = 10;

    // FIX ME: const lvalue references accept both lvalues and rvalues
    // This is why we use const T& for function parameters

    int result1 = compute_sum(x, 20);  // x is lvalue, 20 is rvalue - both OK!
    int result2 = compute_sum(5, 15);   // Both rvalues - OK!

    // FIX: Replace ??? with the correct values
    return result1 + result2;  // Should be (10+20) + (5+15) = ???
}
