#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Class with default constructor.
class Demo {
public:
    int x; // Data member

    // Default constructor: called automatically when object is created.
    Demo() {
        x = 10;
        cout << "Constructor called" << endl;
    }
};

int main() {
    Demo d;        // Default constructor runs here
    cout << d.x << endl;

    return 0;
}

/*
Expected output:
Constructor called
10
*/
