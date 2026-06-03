#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Class to demonstrate static member function.
class Demo {
public:
    static int x; // Static data member

    // Static function can directly use static members.
    static void show() {
        cout << "Value of x: " << x << endl;
    }
};

// Define static data member.
int Demo::x = 10;

int main() {
    Demo::show(); // Call static function using class name

    return 0;
}

/*
Expected output:
Value of x: 10
*/
