#include <iostream>
using namespace std;

class base {
public:
    virtual void fun() { // Virtual enables dynamic dispatch
        cout << "base class" << endl;
    }
};

class derived : public base {
public:
    void fun() override { // override for clarity
        cout << "derived1" << endl;
    }
};

class derived1 : public base {
public:
    void fun() override {
        cout << "derived2" << endl;
    }
};

int main() {
    derived d1;
    base* bptr = &d1;
    bptr->fun(); // Calls derived::fun()

    derived1 d2;
    base* dptr = &d2;
    dptr->fun(); // Calls derived1::fun()
}
