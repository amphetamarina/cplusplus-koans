#ifndef INLINE_FUNCTIONS_H
#define INLINE_FUNCTIONS_H

// Inline function defined in header - this is OK!
// Multiple translation units can see this definition
inline int inline_square(int x) {
    return x * x;
}

// Another inline function
inline int inline_add(int a, int b) {
    return a + b;
}

// Static variables in inline functions
inline int get_counter() {
    static int counter = 0;  // Each translation unit gets its own counter!
    return ++counter;
}

int test_inline_in_header();
int test_inline_hint();
int test_odr_compliance();
int test_static_in_inline();

#endif // INLINE_FUNCTIONS_H
