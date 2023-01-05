/* Programmer =  Roshan Mehra
Purpose = Q4 - Given two numbers a and b, write a program using functions to print all the odd numbers between them.
Date = 09/11/2022  */

#include<iostream>
using namespace std;

void oddnumbers(int first, int last){
    for(int i=first; i<=last; i++){
        if(i%2==1){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n1, n2;
    cin>>n1>>n2;

    oddnumbers(n1,n2);

    return 0;
}