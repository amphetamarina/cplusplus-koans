#ifndef STATIC_DYNAMIC_LINKAGE_H
#define STATIC_DYNAMIC_LINKAGE_H

// External linkage - visible to other translation units
int external_function(int x);

// Function declarations
int test_static_linkage();
int test_external_linkage();
int test_internal_vs_external();
int test_anonymous_namespace();

// Helper function from "another translation unit"
int call_external_from_other_tu();

#endif // STATIC_DYNAMIC_LINKAGE_H
