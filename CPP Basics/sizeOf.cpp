#include <iostream>

using namespace std;
int main()
{
    int x =10;
    int d;
    cout << sizeof(int) << "\n";
    //sizeOf is a compile time operator, 
    cout << sizeof(x++) << "\n";
    //this expression of  ++ will not be evaluateed
    cout << x;
    cout << sizeof(d);
    cout << (10.5);
    cout << (10ll); //turns into long 

    return 0;
}