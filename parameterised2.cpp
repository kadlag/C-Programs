#include<iostream>
using namespace std;

class point
{
    int a;
    int b;

    public:
      point(int x,int y )
      {
          a=x;
          b=y;

      }

      void display()
      {
        cout<<"point is:"<<"("<<a<<","<<b<<")"<<endl;

      }
};

int main(){
    
    point p(5,4);
    p.display();
    
    return 0;
}