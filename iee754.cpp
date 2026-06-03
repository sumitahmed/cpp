#include <iostream>
#include <bitset>
using namespace std;

int main() {
    float num;
    cout << "Enter a floating point number: ";
    cin >> num;

    // reinterpret float bits as unsigned int
    unsigned int bits = *reinterpret_cast<unsigned int*>(&num);

    bitset<32> binary(bits);

    cout << "\nIEEE 754 Representation (32-bit float):\n";
    cout << "Sign bit     : " << binary[31] << endl;
    cout << "Exponent     : ";

    for (int i = 30; i >= 23; i--)
        cout << binary[i];
    cout << endl;

    cout << "Mantissa     : ";
    for (int i = 22; i >= 0; i--)
        cout << binary[i];
    cout << endl;

    cout << "\nFull 32-bit  : " << binary << endl;

    return 0;
}
