#include <iostream>
using namespace std;

//forward declaration

class y;

class x
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }

    //Declaring friend function
    friend void add(x,y);
};



class y
{
    int num;

public:
    void setvalue(int value)
    {
        num = value;
    }

    //Declaring friend function
    friend void add(x,y);
};

void add(x o1, y o2)
{
    int add = o1.data + o2.num;

    cout << "Addition of two number:" << add << endl;
}

int main()
{

    x a1;
    a1.setvalue(3);

    y a2;
    a2.setvalue(4);

    add(a1,a2);
    return 0;
}