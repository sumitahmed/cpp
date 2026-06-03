/*
A school has following rules for grading system:
a. below 25 - F
b. 25-44 - E
c. 45-49 - D
d. 50-59 - C
e. 60-79 - B
f. 80-100 - A
ask user to enter marks and print the corresponding grade
*/
#include <iostream>
using namespace std;

int main() {
    int grade;
    cin >> grade;

    if (grade < 25) {
        cout << "F\n";
    }
    else if (grade >= 25 && grade <= 44) {
        cout << "E\n";
    }
    else if (grade >= 45 && grade <= 49) {
        cout << "D\n";
    }
    else if (grade >= 50 && grade <= 59) {
        cout << "C\n";
    }
    else if (grade >= 60 && grade <= 79) {
        cout << "B\n";
    }
    else if (grade >= 80 && grade <= 100) {
        cout << "A\n";
    }

    return 0;
}
