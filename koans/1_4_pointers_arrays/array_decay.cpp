#include "array_decay.h"
#include <cstring>

// Koan: Arrays decay to pointers in most contexts

size_t test_sizeof_array() {
    int arr[10];

    // FIX ME: sizeof on an array gives the total size in bytes
    size_t array_size = sizeof(arr);

    // arr has 10 ints, each int is typically 4 bytes
    // FIX: Replace ??? with the correct expression
    return array_size;  // Should be 10 * sizeof(int) = ???
}

size_t test_sizeof_pointer() {
    int arr[10];
    int* ptr = arr;  // Array decays to pointer

    // FIX ME: sizeof on a pointer gives the size of the pointer itself
    size_t pointer_size = sizeof(ptr);

    // On 64-bit systems, pointers are 8 bytes
    // On 32-bit systems, pointers are 4 bytes
    // FIX: This is different from sizeof(arr)!
    return pointer_size;  // Should be sizeof(void*) = ???
}

size_t test_array_parameter(int arr[10]) {
    // FIX ME: Array parameters decay to pointers!
    // Despite the syntax arr[10], this is actually int* arr

    size_t size = sizeof(arr);  // This is sizeof(int*), not sizeof(array)!

    // FIX: Replace ??? with the correct value
    return size;  // Should be sizeof(int*) = ???
}

int test_string_decay() {
    // FIX ME: String literals are arrays that decay to pointers
    const char str[] = "Hello";  // Array of 6 chars (including '\0')

    const char* ptr = str;  // Decays to pointer

    // How many characters in the string (not including null terminator)?
    // FIX: Replace ??? with the correct value
    return strlen(ptr);  // Should be ???
}
