#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Class to demonstrate public, private, and protected members.
class Demo {
public:
    int a; // Public member: accessible outside class

private:
    int b; // Private member: accessible only inside class

protected:
    int c; // Protected member: class + derived class

public:
    void setValues() {
        a = 10;
        b = 20;
        c = 30;
    }

    void show() {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
    }
};

int main() {
    Demo d;

    d.a = 5;       // Allowed because a is public
    // d.b = 10;   // Error if uncommented: b is private
    // d.c = 15;   // Error if uncommented: c is protected

    d.setValues(); // Set all values from inside class method
    d.show();      // Print all values

    return 0;
}

/*
Expected output:
a: 10
b: 20
c: 30
*/
