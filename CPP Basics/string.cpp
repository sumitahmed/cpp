#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
In string the starting index is also from 0;
While the length of the string is the last index;
*/
int main(){
    string str = "nigger";
    // cout << str;
    // cout <<str[0] <<endl;
    // cout <<str[1] <<endl;
    // cout <<str[2] <<endl;
    // cout <<str[3] <<endl;
    // cout <<str[4] <<endl;
    // cout <<str[5] <<endl;

    // cout << str[(str.length()-1)];
    // or
    int len = str.size();
    str[len -1]='z';
    cout<<str[len -1 ];






    return 0;
}