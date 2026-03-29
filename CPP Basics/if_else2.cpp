/*
take the age from the user and then decide accordingly 
if age < 18,
print: not tligible for job
if age>= 18,
print:  eligible for the job,
if age >= 55 & age <=57,
print eligible but rretirment soon
if age > 57
print retirment time
*/

#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age:\n";
    cin>>age;

    if(age<18){
        cout<<"not eligibile for the job: " << age;
    }
    else if(age <= 18){
        cout<<"eligibile for the job: " << age;
    }

    else if(age>= 55 && age <=57){
        cout<<"eligible but rretirment soon: " << age;
    }
    else if(age>57){
        cout<<"retirment time: "  << age;
    }

    return 0;
}