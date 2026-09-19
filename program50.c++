#include <iostream>
using namespace std;

class A {
public:
    // Virtual function for runtime polymorphism
    virtual void display() {
        cout << "Base class" << endl;
    }
};

class B : public A { // B inherits from A
public:
    void display() override { // Override base class method
        cout << "Derived class" << endl;
    }
};

int main() {
    A* a;      // Pointer to base class
    A a_obj;   // Base class object
    B b_obj;   // Derived class object

    // Pointing base class pointer to derived class object
    a = &b_obj;
    a->display(); // Calls B::display() due to virtual function

    // Direct call on base class object
    a_obj.display(); // Calls A::display()

    return 0;
}
