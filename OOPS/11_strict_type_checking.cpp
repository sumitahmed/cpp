#include <iostream>  // For cout
#include <string>    // For std::string
using namespace std; // Avoid std:: prefix

int main() {
    int a = 10;      // Integer variable
    float b = 5.5f;  // Floating-point variable

    // Implicit conversion happens here: a becomes float during addition.
    cout << a + b << endl;

    string s = "Hello"; // String type variable
    // int x = s;         // Error if uncommented: incompatible types

    // Explicit conversion example (casting).
    int x = static_cast<int>(b);
    cout << "After explicit cast, x = " << x << endl;

    return 0;
}

/*
Expected output:
15.5
After explicit cast, x = 5
*/
