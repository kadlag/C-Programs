#include<iostream>
using namespace std;

class base1
{
    protected:
        int base1int;

        public:

        void setbase1(int a)
        {
            base1int=a;

        }

};


class base2
{
    protected:
        int base2int;

        public:

        void setbase2(int b)
        {
            base2int=b;

        }

};

class Derived:public base1,public base2
{
    
    public:
       void show()
       {
        cout<<"The value of base 1:"<<base1int<<endl;
        cout<<"The value of base 2:"<<base2int<<endl;
        cout<<"the sum of the value is:"<<(base1int+base2int)<<endl;


       }
};

/*
//The inherited derived class look like this

//Data members
base1int----->protected
base2int------>proteced

//members function

setbase1()-------->public
setbase2()-------->public
show()-------->public
*/

int main(){
    Derived  d;
    d.setbase1(20);
    d.setbase2(5);
    d.show();
    return 0;
}