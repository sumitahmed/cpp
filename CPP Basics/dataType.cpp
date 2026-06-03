#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    //int
    int x=10;
    // cin >> x;
    cout << x;
    cout << "\n";

    //long
    long y=10;
    // cin >> y;
    cout << y;
    cout << "\n";



    //long long 
    long long k=10;
    // cin >> k;
    cout << k;
    cout << "\n";


    //float
    float g = 5.6;
    // cin >>g;
    cout <<g;
    cout << "\n";


    //double
    double f= 2.5;
    // cin >>f;
    cout <<f;
    cout << "\n";


    //string & getline
    string s;
    cin >>s; //will only get the string value till theres any space, basically it will get only a word not a line 
    cout << s = "nifyh";
    cout << "\n";

    //solution: use get line, this gets a whole line, till the line breaks
    string str;
    getline(cin, str);
    cout << str;

    //character
    char ch='h';
    // cin >> ch;
    cout << ch;


    return 0;
}