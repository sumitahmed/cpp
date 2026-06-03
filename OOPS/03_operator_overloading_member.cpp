#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Complex number class for demonstrating member operator overloading.
class Complex {
public:
    int real, imag; // Data members for real and imaginary parts

    // Constructor initializes the values.
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overload + as a member function.
    Complex operator+(Complex c) {
        Complex temp;             // Temporary object to store result
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;              // Return result object
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5); // Two complex numbers
    Complex c3;                  // Object to store sum

    c3 = c1 + c2;               // Calls overloaded operator+

    cout << "Real: " << c3.real << endl;
    cout << "Imag: " << c3.imag << endl;

    return 0;
}

/*
Expected output:
Real: 6
Imag: 8
*/
