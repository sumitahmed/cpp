/*
when you have many items of similar type use array 
*/

#include <iostream>
using namespace std;

int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    arr[4]+=2;
    cout << arr[4];

    return 0;
}