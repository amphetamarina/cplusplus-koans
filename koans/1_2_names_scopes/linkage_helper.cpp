// This file demonstrates external linkage
// Variables and functions with external linkage can be accessed across translation units

// FIX ME: Declare external_counter as extern so we can use it here
// This refers to the same external_counter defined in linkage.cpp
extern int external_counter;

void modify_external_from_helper() {
    // We can access external_counter from another translation unit
    external_counter++;
}
