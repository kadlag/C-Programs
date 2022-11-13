#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    // parameterized constructor
    complex(int x, int y) // this is parameterised constructor .it takes two parameters
    {
        a = x;
        b = y;
    }

    void printnumber(void)
    {
        cout << "Complex number is:" << a << "+" << b << "i" << endl;
    }
};

int main()
{

    // Implicit call
    complex c1(2, 7);
    c1.printnumber();

    //explicit call
    complex c2=complex(5,3);
    c2.printnumber();

    return 0;
}