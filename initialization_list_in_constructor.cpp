#include <iostream>
using namespace std;

/*
  syntax for initialiation list in constructor:

  constructor(argument-list):initialization-section
  {
    asssignment+other code
  }


*/

class test
{
    int a;
    int b;

public:
    // test(int i,int j):a(i),b(j)
    // test(int i,int j):b(j),a(b+i)------>>Red flag this will create problems because a will be initialized first
    test(int i, int j) : a(i), b(a + j)
    {
        cout << "constructor executed" << endl;
        cout << "The value of a is:" << a << endl;
        cout << "the value of b is:" << b << endl;
    }
};

int main()
{
    test t(3, 4);
    return 0;
}