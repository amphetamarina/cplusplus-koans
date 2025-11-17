#include "macro_pitfalls.h"

// Koan: Macros have many pitfalls that can cause subtle bugs
// Understanding these helps you avoid them or choose better alternatives

// FIX ME: This MAX macro has a side-effect problem
// What happens when you call MAX(x++, y++)?
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int max_value(int a, int b) {
    return MAX(a, b);
}

// FIX ME: This macro evaluates its argument multiple times
// Fix it using a do-while(0) block and proper scoping
#define INCREMENT_TWICE(x) x++; x++

int increment_twice(int x) {
    INCREMENT_TWICE(x);
    return x;
}

// FIX ME: This macro doesn't protect against precedence issues
// What happens with AREA(2+3, 4+5)?
#define AREA(w, h) w * h

int compute_area(int width, int height) {
    return AREA(width, height);
}

// Better alternative: Use inline functions or constexpr instead of macros!
// constexpr int max(int a, int b) { return (a > b) ? a : b; }
