#include "namespaces.h"
#include <string>

// Koan: Namespaces organize code and prevent name collisions

// FIX ME: Create an anonymous namespace
// Anonymous namespaces give internal linkage (like 'static')
namespace {
    int internal_counter = 0;

    void increment_counter() {
        internal_counter++;
    }
}

int test_anonymous_namespace() {
    increment_counter();
    increment_counter();
    return internal_counter;  // Should return 2
}

// Multiple namespaces with same function names
namespace LibraryA {
    std::string get_name() {
        return "Library A";
    }
}

namespace LibraryB {
    std::string get_name() {
        return "Library B";
    }
}

std::string test_using_directive() {
    // FIX ME: Use a 'using' declaration to bring LibraryA::get_name into scope
    // Then call it without the LibraryA:: prefix

    // Option 1: Fully qualified
    std::string name_a = LibraryA::get_name();

    // Option 2: Using declaration (FIX THIS)
    // using ???;  // Uncomment and fix
    std::string name_b = get_name();  // Should call LibraryA::get_name

    return name_a + " and " + name_b;
}

// Argument-Dependent Lookup (ADL)
namespace MathLib {
    struct Point {
        double x, y;
    };

    // This function can be found through ADL
    double distance(const Point& p1, const Point& p2) {
        double dx = p1.x - p2.x;
        double dy = p1.y - p2.y;
        return dx * dx + dy * dy;  // Simplified: returns squared distance
    }
}

int test_adl_lookup() {
    MathLib::Point p1{0, 0};
    MathLib::Point p2{3, 4};

    // FIX ME: Call distance without MathLib:: prefix
    // ADL (Argument-Dependent Lookup) finds it because arguments are in MathLib
    double dist = distance(p1, p2);  // Should work via ADL

    return static_cast<int>(dist);  // Returns 25
}
