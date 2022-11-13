#include<iostream>
using namespace std;

int main(){
    
    int marks[10];


   cout<<"Enter a marks";

    for(int i=0;i<5;i++)
    {
        cin>>marks[i];

    }

    for(int i=0;i<5;i++)
    {
        cout<<marks[i]<<"\n";

    }

   int *p;
   p=marks;

   cout<<"Array using pointer";
   cout<<*p<<"\n";
   cout<<(*p+1)<<"\n";
    cout<<(*p+2)<<"\n";
     cout<<(*p+3)<<"\n";
    cout<<(*p+4)<<"\n";
   


    return 0;
}