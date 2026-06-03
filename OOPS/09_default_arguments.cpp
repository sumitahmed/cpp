#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Function with default value for second argument.
int add(int a, int b = 10) {
    return a + b;
}

int main() {
    cout << add(5) << endl;      // Uses default b = 10
    cout << add(5, 20) << endl;  // Uses given b = 20

    return 0;
}

/*
Expected output:
15
25
*/
