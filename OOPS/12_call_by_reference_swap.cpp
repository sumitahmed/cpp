#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Swap function using references.
void swapValues(int &x, int &y) {
    int temp = x; // Store x temporarily
    x = y;        // Put y into x
    y = temp;     // Put temp into y
}

int main() {
    int a = 5, b = 10; // Initial values

    swapValues(a, b);  // Original variables are modified

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

/*
Expected output:
a = 10, b = 5
*/
