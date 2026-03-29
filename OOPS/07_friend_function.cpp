#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Class with private member to demonstrate friend function access.
class Box {
private:
    int length; // Private member

public:
    Box() {
        length = 10; // Initialize private value
    }

    // Friend function declaration.
    friend void display(Box b);
};

// Friend function is not a class member but can access private data.
void display(Box b) {
    cout << "Length: " << b.length << endl;
}

int main() {
    Box b;      // Create object
    display(b); // Friend function accesses private member

    return 0;
}

/*
Expected output:
Length: 10
*/
