/* Programmer =  Roshan Mehra
Purpose = Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not.
Date = 09/11/2022  */

#include<iostream>
using namespace std;

bool checkeligible(int age){
    if(age>=18){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    
    int a;
    cout<<"Enter your age: "<<endl;
    cin>>a;

    cout<<checkeligible(a);

    return 0;
}