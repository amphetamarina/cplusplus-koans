#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

int test_function_pointer();
int test_function_pointer_array();
int test_callback();

// Type alias for function pointer
using BinaryOp = int (*)(int, int);

#endif // FUNCTION_POINTERS_H
