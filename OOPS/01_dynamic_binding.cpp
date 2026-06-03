#include <iostream>  // For input/output operations
using namespace std; // So we can use cout without std:: prefix

// Base class with a virtual function for runtime polymorphism.
class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

// Derived class overrides the virtual function.
class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base* b;    // Base-class pointer
    Derived d;  // Derived-class object

    b = &d;     // Base pointer points to Derived object
    b->show();  // Dynamic binding: calls Derived::show at runtime

    return 0;   // Program ended successfully
}

/*
Expected output:
Derived class show function
*/
