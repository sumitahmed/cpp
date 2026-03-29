#include <bits/stdc++.h>
using namespace std;

/*
Functions are set of code which performs soemthing for you

fucntions are used to modularise code

functions are used to increase readability 

functions are used to use same code multiple times  

diff types of functions:
1. void -> doesnt return any thing, say 
2. return 
3. parameterised
4. non para  
*/

// void printName(string name){
//     cout << "hey " << name << endl;
// }

// int main(){
//     string name1, name2;
//     cin >> name1 >> name2; 
//     printName(name1);
//     printName(name2);

//     return 0;
// }

//take 2 no.s and print their sum 

// void sum(int x, int y){
//     cout << x+y;
// }
// int main(){
//     int x,y;
//     cin >> x >>y;

//     sum(x,y);
//     return 0;
// }

//2. Return
// int sum(int x, int y){
//     int add = x+y;
//     return add;
// }


// int main(){
//     int x,y;
//     cin >> x >> y;

//     int result = sum(x,y);
//     cout << result;

//     return 0;
// }


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