#ifndef LINKAGE_H
#define LINKAGE_H

// External linkage - visible across translation units
extern int external_counter;

// Function with external linkage
void increment_external();
int get_external();

// Static (internal linkage) - only visible in this translation unit
static int static_value = 42;

// Inline function
inline int get_static_value() {
    return static_value;
}

int test_external_linkage();
int test_internal_linkage();

#endif // LINKAGE_H
