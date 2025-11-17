#include "pointer_arithmetic.h"

// Koan: Pointer arithmetic is scaled by the size of the pointed-to type

int test_pointer_increment() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;  // Points to arr[0]

    // FIX ME: Incrementing a pointer moves to the next element
    ptr++;  // Now points to arr[1]

    int value = *ptr;

    ptr += 2;  // Move forward 2 more elements

    // FIX: Replace ??? with the correct value
    return *ptr;  // Should be ??? (arr[3])
}

int test_pointer_difference() {
    int arr[] = {1, 2, 3, 4, 5};

    int* start = &arr[0];
    int* end = &arr[4];

    // FIX ME: Pointer difference gives the number of elements between them
    ptrdiff_t diff = end - start;

    // FIX: Replace ??? with the correct value
    return static_cast<int>(diff);  // Should be ???
}

int test_pointer_indexing() {
    int arr[] = {100, 200, 300, 400};
    int* ptr = arr;

    // FIX ME: ptr[i] is equivalent to *(ptr + i)
    int value1 = ptr[2];     // Same as *(ptr + 2)
    int value2 = *(ptr + 3); // Same as ptr[3]

    // FIX: Replace ??? with the correct values
    return value1 + value2;  // Should be 300 + 400 = ???
}

size_t test_pointer_size() {
    int x = 42;
    int* ptr = &x;

    // FIX ME: Pointers increment by sizeof(type), not by 1 byte
    int arr[10];
    int* p1 = &arr[0];
    int* p2 = &arr[1];

    // What is the byte difference between p2 and p1?
    // Hint: sizeof(int) is typically 4 bytes
    size_t byte_diff = reinterpret_cast<char*>(p2) - reinterpret_cast<char*>(p1);

    // FIX: Replace ??? with the correct value (typically 4)
    return byte_diff;  // Should be sizeof(int) = ???
}
