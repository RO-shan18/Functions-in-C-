/* Programmer =  Roshan Mehra
Purpose = Q2 - Given radius of a circle. Write a function to print the area and circumference of the circle.
Date = 09/11/2022  */

#include<iostream>
using namespace std;

void circle(int r){
    float pi=3.14, a, c;
    a = pi*r*r;
    c = 2*pi*r;
    cout<<"Area of a circle: "<<a<<endl;
    cout<<"Circumference of a circle: "<<c<<endl;
}

int main(){
    int radius;
    cout<<"Enter the radius: "<<endl;
    cin>>radius;

    circle(radius);
    return 0;
}
