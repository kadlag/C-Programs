#include <iostream>
using namespace std;

class point
{
    int a;
    int b;

public:
    // constructor with default argument
    point(int x, int y = 9)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "point is:"
             << "(" << a << "," << b << ")" << endl;
    }
};

int main()
{

    point p(5, 4);
    p.display();

    point q(2);
    q.display();
    return 0;
}