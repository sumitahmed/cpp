#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Class to demonstrate copy constructor.
class Demo {
public:
    int x; // Data member

    // Parameterized constructor.
    Demo(int a) {
        x = a;
    }

    // Copy constructor: creates object from another object of same class.
    Demo(const Demo &d) {
        x = d.x;
    }
};

int main() {
    Demo d1(10);   // First object
    Demo d2 = d1;  // Copy constructor called

    cout << d2.x << endl;

    return 0;
}

/*
Expected output:
10
*/
