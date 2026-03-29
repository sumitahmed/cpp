#include <iostream>  // For cout
using namespace std; // Avoid std:: prefix

// A simple class that receives a message via function call.
class Student {
public:
    void display() {
        cout << "Message received: Display student info" << endl;
    }
};

int main() {
    Student s;   // Create object
    s.display(); // Send message to object (method call)

    return 0;
};

/*
Expected output:
Message received: Display student info
*/
