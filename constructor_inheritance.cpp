#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 constructor is called" << endl;
    }

    void printdatabase1()
    {
        cout << "The value of data1 is:" << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 constructor is called" << endl;
    }

    void printdatabase2()
    {
        cout << "The value of data2 is:" << data2 << endl;
    }
};

class Derived : public base1, public base2
{
    int derived1;
    int derived2;

public:

   //Derived class constructor
    Derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;

        cout << "Derived constructor is called" << endl;
    }

    void printdataderived()
    {
        cout << "The value of derived1 is:" << derived1 << endl;
        cout << "The value of derived2 is:" << derived2 << endl;
    }
};
int main()
{

    Derived der(1, 2, 3, 4);
    der.printdatabase1();
    der.printdatabase2();
    der.printdataderived();
    return 0;
}