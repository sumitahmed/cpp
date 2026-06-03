#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Class with parameterized constructor.
class Demo {
public:
    int x; // Data member

    // Parameterized constructor receives initial value.
    Demo(int a) {
        x = a;
    }
};

int main() {
    Demo d(20);    // Pass value to constructor
    cout << d.x << endl;

    return 0;
}

/*
Expected output:
20
*/
