/* Programmer =  Roshan Mehra
Purpose = Q5 - Given two numbers a and b, write a program to print all the prime numbers present between
a and b.
Date = 09/11/2022 */

#include<iostream>
using namespace std;

void primenumbers(int first, int last){

    for(int i=first; i<=last; i++){
        int count = 0;

        for(int j=2; j<last; j++){
            if(i==j)
            continue;

            if((i%j)==0)
            count++;
        }
        if(i==1)
        count++;

        if(count==0)
        cout<<i<<" "; 
    }
}

int main(){
    int n1, n2;
    cout<<"Enter the numbers: "<<endl;
    cin>>n1>>n2;

    primenumbers(n1,n2);
    return 0;
}