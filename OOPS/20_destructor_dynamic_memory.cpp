#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Class to show memory cleanup in destructor.
class Demo {
    int *p; // Pointer for dynamic memory

public:
    // Constructor allocates memory.
    Demo() {
        p = new int;
        *p = 100;
    }

    // Destructor releases memory.
    ~Demo() {
        delete p;
        cout << "Memory freed" << endl;
    }
};

int main() {
    Demo d; // Object created; memory allocated

    return 0; // Object destroyed; memory freed
}

/*
Expected output:
Memory freed
*/
