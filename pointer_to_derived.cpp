#include <iostream>
using namespace std;

class base
{
    
public:

   int base_var;
    void display()
    {
        cout<<"The value of base class variable is:"<<base_var<<endl;

    }
};

class Derived:public base
{
   

    public:
     int derived_var;

    void display()
    {
        cout<<"The value of base class variable is:"<<base_var<<endl;
        cout<<"The value of derived class variable is:"<<derived_var<<endl;


    }

};
int main()
{

    base * base_ptr;
 //base class object
    base b;

    base_ptr=&b;

    base_ptr->base_var=20;
    base_ptr->display();

//derived class object

Derived d;
base_ptr=&d; //pointing base class pointer to derived

base_ptr->base_var=30;
base_ptr->display();

//derived class pointer points derved class object 
Derived * der_ptr;
der_ptr=&d;
der_ptr->derived_var=50;
der_ptr->display();


    return 0;
}