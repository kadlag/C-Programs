#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    

    public:
      
      //Constructor in c++
      complex(void)  //This is default constructor it takes no arguments
      {
        a=10;
        b=20;

      }
      

      void printnumber(void)
      {
        cout<<"Complex number is:"<<a<<"+"<<b<<"i"<<endl;


      }


};
int main(){
    
  complex c;
  c.printnumber();

    return 0;
}