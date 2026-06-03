#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// Class to show static data member behavior.
class Student {
public:
    static int count; // Shared by all objects

    Student() {
        count++;      // Increase shared count on every object creation
    }
};

// Static member definition (required outside class).
int Student::count = 0;

int main() {
    Student s1, s2, s3; // Three objects increment same static variable

    cout << "Total Students: " << Student::count << endl;

    return 0;
}

/*
Expected output:
Total Students: 3
*/
