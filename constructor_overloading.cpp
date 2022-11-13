#include<iostream>
using namespace std;

class point
{
    int a;
    int b;

    public:

     
     point()
     {
         a=0;
         b=0;
     }
    //parameterised constructor
    //constructor overloading- same constructor with different parameter list 

      point(int x,int y )
      {
          a=x;
          b=y;

      }

      point(int x)
      {
        a=x;
        b=0;
      }



      void display()
      {
        cout<<"point is:"<<"("<<a<<","<<b<<")"<<endl;

      }
};

int main(){
    
    point p(5,4);
    p.display();

    point q(7);
    q.display();

     point r;
     r.display();
    
    return 0;
}