#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Class to demonstrate constructor and destructor calls.
class Demo {
public:
    // Constructor runs when object is created.
    Demo() {
        cout << "Constructor called" << endl;
    }

    // Destructor runs automatically when object goes out of scope.
    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Demo d; // Constructor called here

    return 0; // Destructor called automatically here
}

/*
Expected output:
Constructor called
Destructor called
*/
