#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Inline function request: compiler may expand this at call site.
inline int square(int x) {
    return x * x;
}

int main() {
    int num = 5; // Input number

    cout << "Square: " << square(num) << endl; // Function call

    return 0;
}

/*
Expected output:
Square: 25
*/
