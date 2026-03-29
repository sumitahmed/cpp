
#include <bits/stdc++.h>
using namespace std;
/*
When you dont wanna send copy, you want to send the orginal one out of the memory, to make changes
*/
//Use "& operator" when passing the parameter in that case it will take the address of the parameter hence, gets the orginal one

void dosum(string &s){
    s[0]='g';
}

int main(){
    string str="hola";
    cout <<"before pass by ref: " << str <<endl;
    dosum(str);

    cout <<"after pass by ref: " << str;

    return 0;
}