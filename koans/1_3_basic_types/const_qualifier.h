#ifndef CONST_QUALIFIER_H
#define CONST_QUALIFIER_H

int test_const_variable();
int test_const_pointer();
int test_const_reference();
int test_const_member_function();

class ConstDemo {
private:
    int value;
    mutable int cache;

public:
    ConstDemo(int v) : value(v), cache(0) {}

    int get_value() const;
    void set_value(int v);
    int get_cached() const;
};

#endif // CONST_QUALIFIER_H
