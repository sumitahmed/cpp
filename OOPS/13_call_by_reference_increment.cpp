#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Function receives reference and updates original value.
void increment(int &n) {
    n++; // Increment original variable
}

int main() {
    int x = 5;   // Initial value

    increment(x); // x is modified directly

    cout << x << endl;

    return 0;
}

/*
Expected output:
6
*/
