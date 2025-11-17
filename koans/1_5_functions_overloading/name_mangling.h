#ifndef NAME_MANGLING_H
#define NAME_MANGLING_H

// Overloaded functions - each gets a unique mangled name
int calculate(int x);
int calculate(double x);
int calculate(int x, int y);

// Function in a namespace
namespace math {
    int calculate(int x);
}

int test_mangling_enables_overloading();
int test_namespace_mangling();
int test_mangling_differences();

#endif // NAME_MANGLING_H
