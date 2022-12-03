#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

class base
{
    
public:

   int base_var=20;
    virtual void display()
    {
        cout<<"The value of base class variable is:"<<base_var<<endl;

    }
};

class Derived:public base
{
   

    public:
     int derived_var=30;

    void display()
    {
        cout<<"The value of base class variable is:"<<base_var<<endl;
        cout<<"The value of derived class variable is:"<<derived_var<<endl;


    }

};


int main(){
    

    base * base_ptr;
    base b;

    base_ptr=&b;

    //derived class object
    Derived d;
    base_ptr=&d;

    base_ptr->display();
    
    return 0;
}