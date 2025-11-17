#include "function_pointers.h"

// Koan: Functions have addresses and can be pointed to

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int test_function_pointer() {
    // FIX ME: Declare and use a function pointer
    // Syntax: return_type (*pointer_name)(parameters)
    int (*func_ptr)(int, int) = add;

    int result = func_ptr(3, 4);  // Calls add(3, 4)

    // Now point to a different function
    func_ptr = multiply;

    result = func_ptr(3, 4);  // Calls multiply(3, 4)

    // FIX: Replace ??? with the correct value
    return result;  // Should be ???
}

int subtract(int a, int b) {
    return a - b;
}

int test_function_pointer_array() {
    // FIX ME: Array of function pointers
    BinaryOp operations[] = {add, subtract, multiply};

    // Calculate: (10 + 5) - (2 * 3)
    int sum = operations[0](10, 5);      // add(10, 5) = 15
    int product = operations[2](2, 3);   // multiply(2, 3) = 6
    int result = operations[1](sum, product);  // subtract(15, 6) = 9

    // FIX: Replace ??? with the correct value
    return result;  // Should be ???
}

int apply_operation(int a, int b, BinaryOp op) {
    return op(a, b);
}

int test_callback() {
    // FIX ME: Pass function as callback
    int result1 = apply_operation(10, 3, add);       // 13
    int result2 = apply_operation(10, 3, subtract);  // 7
    int result3 = apply_operation(10, 3, multiply);  // 30

    // FIX: Replace ??? with the correct value
    return result1 + result2 + result3;  // Should be 13 + 7 + 30 = ???
}
