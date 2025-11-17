#include <gtest/gtest.h>
#include "array_decay.h"

// These tests explore array-to-pointer decay
// Your goal: understand when arrays decay and the implications

TEST(ArrayDecay, SizeofArray) {
    size_t result = test_sizeof_array();
    EXPECT_EQ(result, 10 * sizeof(int))
        << "sizeof on an array gives total size of all elements";
}

TEST(ArrayDecay, SizeofPointer) {
    size_t result = test_sizeof_pointer();
    EXPECT_EQ(result, sizeof(void*))
        << "sizeof on a pointer gives size of the pointer, not the array";
}

TEST(ArrayDecay, ArrayParameter) {
    int arr[10];
    size_t result = test_array_parameter(arr);
    EXPECT_EQ(result, sizeof(int*))
        << "Array parameters decay to pointers - arr[10] is actually int*";
}

TEST(ArrayDecay, StringDecay) {
    int result = test_string_decay();
    EXPECT_EQ(result, 5)
        << "String literal 'Hello' has 5 characters (excluding null terminator)";
}

// Learning objectives:
// 1. Arrays decay to pointers in most contexts
// 2. sizeof(array) gives total size, sizeof(pointer) gives pointer size
// 3. Array parameters are actually pointers (arr[10] is just int*)
// 4. String literals are arrays of const char
// 5. To preserve array size info, use references: void f(int (&arr)[10])
// 6. Or use templates: template<size_t N> void f(int (&arr)[N])
