#include "linkage.h"

// Koan: Linkage determines whether a name can be referred to from other files

// FIX ME: Define the external_counter variable
// This was declared 'extern' in the header, so it needs a definition
int external_counter = ???;  // Initialize to 0

void increment_external() {
    external_counter++;
}

int get_external() {
    return external_counter;
}

int test_external_linkage() {
    // This function is in linkage_helper.cpp
    extern void modify_external_from_helper();

    external_counter = 10;
    modify_external_from_helper();  // Should increment it

    return external_counter;  // Should be 11
}

// Static variable - internal linkage
static int internal_value = 100;

int test_internal_linkage() {
    // FIX ME: Return the internal_value
    // Static variables in .cpp files have internal linkage
    // They're NOT visible to other translation units
    return internal_value;
}
