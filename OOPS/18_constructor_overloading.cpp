#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Class with overloaded constructors.
class Demo {
public:
    int x; // Data member

    // Default constructor.
    Demo() {
        x = 0;
    }

    // Parameterized constructor.
    Demo(int a) {
        x = a;
    }
};

int main() {
    Demo d1;      // Calls default constructor
    Demo d2(25);  // Calls parameterized constructor

    cout << "d1.x = " << d1.x << endl;
    cout << "d2.x = " << d2.x << endl;

    return 0;
}

/*
Expected output:
d1.x = 0
d2.x = 25
*/
