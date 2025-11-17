#ifndef NAME_SHADOWING_H
#define NAME_SHADOWING_H

class Base {
public:
    int value;
    Base() : value(10) {}
    void print_value();
};

class Derived : public Base {
public:
    int value;  // Shadows Base::value
    Derived() : Base(), value(20) {}
    int get_base_value();
    int get_derived_value();
};

int test_parameter_shadowing(int x);

#endif // NAME_SHADOWING_H
