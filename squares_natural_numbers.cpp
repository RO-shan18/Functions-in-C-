/* Programmer =  Roshan Mehra
Purpose = Q1 - Write a function to print squares of the first 5 natural numbers.
Date = 09/11/2022  */

#include<iostream>
using namespace std;

void squares(int n){
    for(int i=1; i<=n; i++){
        cout<<i*i<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the numbers: "<<endl;
    cin>>n;

    squares(n);
    return 0;
}