#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }

    number(int x)
    {
        a = x;
    }

    // when no copy constructor is found compiler will supply its own copy constructor
    number(number &obj)
    {
        cout << "copy constructor called" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The value of a:" << a << endl;
    }
};
int main()
{
    number x, y(10), z(45);

    x.display();
    y.display();
    z.display();

    number z1(z); // copy constructor invoked
    z1.display();

    number x1(x); // copy constructor invoked
    x1.display();

    number x2 = y; // copy constructor invoked
    y.display();

    return 0;
}