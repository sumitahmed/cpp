#include <bits/stdc++.h>
using namespace std;

//array is passed like this: arr[] 
void dosum(int arr[], int n){
    arr[0]+=68;
    for(int i=0;i<n;i++){
        cout << arr[i] <<endl;
    }
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    //takign array input
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    //passing arrayy
    dosum(arr, n);

    return 0;
}