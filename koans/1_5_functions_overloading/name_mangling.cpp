#include "name_mangling.h"

// Koan: Name mangling encodes function signatures into unique symbol names

// Define the overloaded functions
int calculate(int x) {
    return x * 2;
}

int calculate(double x) {
    return static_cast<int>(x * 3.0);
}

int calculate(int x, int y) {
    return x + y;
}

namespace math {
    int calculate(int x) {
        return x * 10;
    }
}

int test_mangling_enables_overloading() {
    // FIX ME: Name mangling allows function overloading to work
    // Each overloaded function gets a different mangled name
    // Example mangled names (GCC/Clang):
    //   calculate(int)        -> _Z9calculatei
    //   calculate(double)     -> _Z9calculated
    //   calculate(int, int)   -> _Z9calculateii

    int result1 = calculate(5);      // Calls calculate(int) -> 10
    int result2 = calculate(4.0);    // Calls calculate(double) -> 12
    int result3 = calculate(3, 7);   // Calls calculate(int, int) -> 10

    // FIX: Replace ??? with the correct values
    return result1 + result2 + result3;  // Should be 10 + 12 + 10 = ???
}

int test_namespace_mangling() {
    // FIX ME: Namespaces are included in the mangled name
    // math::calculate(int) gets a different mangled name than ::calculate(int)
    // Example: _ZN4math9calculateEi vs _Z9calculatei

    int result1 = calculate(3);        // Calls ::calculate(int) -> 6
    int result2 = math::calculate(3);  // Calls math::calculate(int) -> 30

    // FIX: Replace ??? with the correct values
    return result1 + result2;  // Should be 6 + 30 = ???
}

// Helper functions with different signatures
class MyClass {
public:
    int method(int x) { return x + 100; }
};

int standalone(int x) { return x + 200; }

int test_mangling_differences() {
    // FIX ME: Different entities produce different manglings
    // - Free functions
    // - Member functions (include class name)
    // - Namespaced functions (include namespace)
    // - Return type is NOT part of mangling (only parameters)

    MyClass obj;
    int result1 = obj.method(5);   // Member function -> 105
    int result2 = standalone(5);   // Free function -> 205

    // Note: You CANNOT overload based on return type alone!
    // int foo(int x);
    // double foo(int x);  // ERROR: Same mangled name!

    // FIX: Replace ??? with the correct values
    return result1 + result2;  // Should be 105 + 205 = ???
}
