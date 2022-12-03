#include<iostream>
using namespace std;

int main(){


   //basic exammple

    int a=4;
    int* ptr=&a;

    cout<<"the value of a is:"<<*(ptr)<<endl;     



    //new keyword

    int* p=new int(40);
    cout<<"the value at address p is "<<*(p)<<endl;


      int *arr=new int[3];

    arr[0]=3;
    arr[1]=5;
    arr[2]=9;

    cout<<arr[0]<<endl;
     cout<<arr[1]<<endl;
      cout<<arr[2]<<endl;

     //delete keyword
      delete arr;

       cout<<arr[0]<<endl;
     cout<<arr[1]<<endl;
      cout<<arr[2]<<endl;

    //  delete p;
    //   cout<<"the value at address p is "<<*(p)<<endl;


    return 0;

  


    
}
