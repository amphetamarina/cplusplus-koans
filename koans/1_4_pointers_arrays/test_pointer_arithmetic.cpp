#include <gtest/gtest.h>
#include "pointer_arithmetic.h"

// These tests explore pointer arithmetic rules
// Your goal: understand how pointer math works

TEST(PointerArithmetic, PointerIncrement) {
    int result = test_pointer_increment();
    EXPECT_EQ(result, 40)
        << "ptr++ moves to next element, ptr += 2 moves forward 2 more";
}

TEST(PointerArithmetic, PointerDifference) {
    int result = test_pointer_difference();
    EXPECT_EQ(result, 4)
        << "Pointer difference returns number of elements between pointers";
}

TEST(PointerArithmetic, PointerIndexing) {
    int result = test_pointer_indexing();
    EXPECT_EQ(result, 700)
        << "ptr[i] is equivalent to *(ptr + i)";
}

TEST(PointerArithmetic, PointerSize) {
    size_t result = test_pointer_size();
    EXPECT_EQ(result, sizeof(int))
        << "Pointers increment by sizeof(pointed-to type)";
}

// Learning objectives:
// 1. Pointer arithmetic is scaled by sizeof(type)
// 2. ptr++ moves to the next element, not the next byte
// 3. ptr + n moves forward n elements
// 4. ptr2 - ptr1 gives number of elements between them
// 5. ptr[i] is syntactic sugar for *(ptr + i)
// 6. Array indexing is just pointer arithmetic
