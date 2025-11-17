#include "overload_resolution.h"

// Koan: Overload resolution follows a strict ranking system

// Helper overloaded functions for exact match test
int process(int x) { return 1; }
int process(double x) { return 2; }
int process(char x) { return 3; }

int test_exact_match() {
    // FIX ME: When there's an exact match, it's always chosen
    int a = 42;
    int result = process(a);  // Calls process(int)

    // FIX: Replace ??? with the correct return value
    return result;  // Should be ???
}

// Helper functions for promotion test
int calc(int x) { return 10; }
int calc(double x) { return 20; }

int test_promotion() {
    // FIX ME: Integral promotions happen before standard conversions
    // short, char, bool promote to int
    short s = 5;
    int result = calc(s);  // short promotes to int

    // FIX: Replace ??? with the correct return value
    return result;  // Should be ???
}

// Helper functions for standard conversion test
int convert(int x) { return 100; }
int convert(double x) { return 200; }

int test_standard_conversion() {
    // FIX ME: When no exact match or promotion, standard conversion is used
    // float to double is a floating-point promotion (better than conversion)
    float f = 3.14f;
    int result = convert(f);  // float promotes to double

    // FIX: Replace ??? with the correct return value
    return result;  // Should be ???
}

// Helper functions for const overload test
int modify(int& x) { x = 99; return 1; }
int modify(const int& x) { return 2; }

int test_const_overload() {
    // FIX ME: Non-const reference binds to non-const function
    int x = 10;
    int result1 = modify(x);  // Calls modify(int&)

    // But const reference must call const version
    const int y = 20;
    int result2 = modify(y);  // Calls modify(const int&)

    // FIX: Replace ??? with the correct values
    return result1 + result2;  // Should be ??? + ??? = ???
}

// Helper functions for reference binding test
int bind_ref(int& x) { return 2; }         // Takes int by non-const reference
int bind_ref(const int& x) { return 3; }   // Takes int by const reference

int bind_val(int x) { return 1; }          // Takes int by value

int test_reference_binding() {
    // FIX ME: Lvalues prefer non-const reference over const reference
    int x = 5;
    int result1 = bind_ref(x);  // Prefers bind_ref(int&) over bind_ref(const int&)

    // Rvalues (temporaries) cannot bind to non-const reference
    int result2 = bind_ref(42);  // Calls bind_ref(const int&) - only option

    // By-value functions can accept both lvalues and rvalues
    int result3 = bind_val(42);  // Calls bind_val(int)

    // FIX: Replace ??? with the correct values
    return result1 + result2 + result3;  // Should be 2 + 3 + 1 = ???
}
