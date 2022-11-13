#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;


}

// using pointer reference
void swap(int * a,int* b)
{
    int temp;
        temp=*a;
        *a=*b;
        *b=temp;
}


void swapreference(int &a,int &b)
{
    int temp =a;
        a=b;
        b=temp;

       
}
int main(){
    
    int num1,num2;

    cout<<"Enter two numbers";
    cin>>num1>>num2;
    
    // cout<<"Addition of two number is"<<sum(num1,num2);

    //swap(num1,num2);//call by value
    // swap(&num1,&num2);//call by reference

    // cout<<"swapping"<<num1<<num2<<endl;

       swapreference(num1,num2); //Using reference variable

        cout<<"swapping"<<num1<<num2<<endl;



    return 0;
}