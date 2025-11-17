#include "name_shadowing.h"
#include <iostream>

void Base::print_value() {
    std::cout << "Base value: " << value << std::endl;
}

// Koan: Name shadowing occurs when a name in an inner scope
// hides a name in an outer scope

int Derived::get_base_value() {
    // FIX ME: Access the base class's value member
    // Replace ??? with the correct way to access Base::value
    return ???;
}

int Derived::get_derived_value() {
    // FIX ME: Access the derived class's value member
    return value;  // This is correct - accesses Derived::value
}

static int global_x = 100;

int test_parameter_shadowing(int x) {
    // Parameter x shadows global_x

    // FIX ME: Calculate sum of parameter x and global_x
    // The parameter x is 5, global_x is 100, sum should be 105
    int sum = x + ???;  // Replace ??? with how to access global_x

    return sum;
}
