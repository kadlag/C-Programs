#include<iostream>
using namespace std;

int count=0;

class num
{

    public:
    num()
    {
        count++;
        cout<<"Constructor is called when object is created"<< count<<endl;

    }

//Destructor never takes an argument nor does it return any value 
   ~num()
   { 

    cout<<"destructor is called when object is destroyed"<< count <<endl;
    count--;


   }
    
};

int main(){
    
    cout<<"Inside the main block"<<endl;
    cout<<"Creating a first object"<<endl;

    num n1;
    {
        //Block 1
        cout<<"Inside Block 1 "<<endl;

        cout<<"Creating two or more objects t2 and t3"<<endl;
        num n2,n3;

        cout<<"Leaving block"<<endl;

    }

    cout<<"Back inside the main block"<<endl;

    return 0;
}