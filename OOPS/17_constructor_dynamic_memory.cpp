#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Class that allocates memory in constructor.
class Demo {
    int *p; // Pointer to dynamically allocated integer

public:
    // Constructor allocates memory and stores value.
    Demo(int val) {
        p = new int; // Allocate memory
        *p = val;    // Store value
    }

    // Function to display value.
    void show() {
        cout << *p << endl;
    }

    // Destructor frees allocated memory.
    ~Demo() {
        delete p;
    }
};

int main() {
    Demo d(50); // Constructor allocates and initializes memory
    d.show();   // Display stored value

    return 0;
}

/*
Expected output:
50
*/
