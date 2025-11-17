#ifndef EXTERN_C_LINKAGE_H
#define EXTERN_C_LINKAGE_H

// C++ function - will be mangled
int cpp_function(int x);

// C linkage - will NOT be mangled
extern "C" {
    int c_function(int x);
    int another_c_function(double x);
}

// Conditional compilation for C/C++ compatibility
#ifdef __cplusplus
extern "C" {
#endif

int compatible_function(int x);

#ifdef __cplusplus
}
#endif

int test_c_linkage();
int test_no_overloading_in_c();
int test_c_cpp_interop();

#endif // EXTERN_C_LINKAGE_H
