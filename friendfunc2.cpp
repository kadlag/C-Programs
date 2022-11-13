#include <iostream>
using namespace std;
class c2;

class c1
{
    int val1;

public:
    // declaring friend function
    friend void exchange(c1 &o1, c2 &o2);

    void indata(int data)
    {
        val1 = data;
    }

    void display(void)
    {
        cout << "The value of data is" << val1 << endl;
    }
};

class c2
{
    int val2;

public:
    // declaring friend function
    friend void exchange(c1 &o1, c2 &o2);

    void indata(int data)
    {
        val2 = data;
    }

    void display(void)
    {
        cout << "The value of data is" << val2 << endl;
    }
};

void exchange(c1 &o1, c2 &o2)
{
    int temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}

int main()
{

    c1 oc1;
    oc1.indata(15);

    c2 oc2;
    oc2.indata(20);

    oc1.display();
    oc2.display();

   cout<<"The value of c1 and c2  before exchange"<<endl;
    oc1.display();
    oc2.display();

    exchange(oc1, oc2);

    cout<<"The value of c1 and c2  After exchange"<<endl;
    oc1.display();
    oc2.display();


    return 0;
}