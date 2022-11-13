#include<iostream>
using namespace std;

inline int product(int a,int b)
{
    return a*b;
}

int main(){

   int num1,num2;
    
cout<<"Enter two numbers";
cin>>num1>>num2;

cout<<"Product:"<<product(num1,num2);
    return 0;
}