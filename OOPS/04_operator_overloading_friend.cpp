#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Complex number class for demonstrating friend operator overloading.
class Complex {
public:
    int real, imag; // Real and imaginary parts

    // Constructor initializes object values.
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Friend function declaration for operator+.
    friend Complex operator+(Complex c1, Complex c2);
};

// Friend function definition outside class.
Complex operator+(Complex c1, Complex c2) {
    Complex temp;                  // Temporary result object
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;                   // Return summed complex number
}

int main() {
    Complex c1(1, 2), c2(3, 4); // Create two objects
    Complex c3 = c1 + c2;       // Calls friend operator+

    cout << "Real: " << c3.real << endl;
    cout << "Imag: " << c3.imag << endl;

    return 0;
}

/*
Expected output:
Real: 4
Imag: 6
*/
