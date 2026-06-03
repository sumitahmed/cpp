

#include <bits/stdc++.h>
using namespace std;
//**Pass by reference and value**//
//pass by value, when you call a funtion with a value a copy of that value goes not the actual memory...see the below code and output it will be clear

void doSome(int num){
    cout << num <<endl;
    num+=5;

    cout << num <<endl;
    num+=5;

    cout << num <<endl;
    num+=5;
}

void doSom(string s){
    s[0]='b';
    cout << s <<endl;
}

int main(){
    int num =10;
    string s="nigger";
    doSome(num);
    doSom(s);

    cout << num << endl;
    cout << s;

    return 0;
}