#include<iostream>
using namespace std;

//forward declaration
class complex;

class calculator
{
    public:
      int add(int a,int b)
   {
    return a*b;

   }

   int sumcomplex(complex,complex );
};


class complex
{
    int a;
    int b;

    public:

      //declaring function from other class as friend  function
      //friend int calculator::sumcomplex(complex o1,complex o2);

      //Alter :Declaring entire class as calculator
       friend class calculator;
       
      void setnumber(int v1,int v2)
      {
        a=v1;
        b=v2;

      }

      void printnumber(void)
      {
        cout<<"Complex number is:"<<a<<"+"<<b<<"i"<<endl;


      }


};

int calculator::sumcomplex(complex o1,complex o2)
{
    return o1.a+o2.a;

}

int main(){

    complex c1,c2;
    c1.setnumber(1,4);
    c2.setnumber(5,6);

    c1.printnumber();
    c2.printnumber();

     calculator c3;
    int res= c3.sumcomplex(c1,c2);
    cout<<"addition of real number:"<<res<<endl;




    
    return 0;
}