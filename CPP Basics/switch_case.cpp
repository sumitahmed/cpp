/*
take the day no and print the corresponding day 
for 1 print monday

for 2 print tuesday and so on 
for 7 print sunday
*/

#include <iostream>
using namespace std;

int main(){
    int day;
    cin >> day;

    switch(day){
        case 1:
        cout << "Monday";
        break;

        case 2:
        cout << "Tues";
        break;


        case 3:
        cout << "wed";
        break;


        case 4:
        cout << "thurs";
        break;


        case 5:
        cout << "fri";
        break;


        case 6:
        cout << "sat";
        break;


        case 7:
        cout << "sun";
        break;

        default:
        cout << "please chose from 1-7";

        return 0;
           
    }
}