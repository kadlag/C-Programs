#include<iostream>
using namespace std;

class simplecalculator
{
   public:
   int a;
   int b;
   int add;
   int sub;


   void setdata(int num1,int num2)
   {
       a=num1;
       b=num2;

   }

   void arithmetic()
   {
      add=a+b;
      sub=a-b;

   }


};

class scientific
{
    public:
    int mul;
    int div;
    int c,d;

     void setdata2(int num1,int num2)
   {
       c=num1;
       d=num2;

   }

   void arithmetic2()
   {
      mul=c*d;
      div=c/d;

   }


};


class hybridcalculator: public simplecalculator,public scientific
{

    public:

    void display()
    {
        cout<<"Addition is:"<<add<<endl;
         cout<<"subtraction is:"<<sub<<endl;
        cout<<"multiplication is:"<<mul<<endl;
         cout<<"Division is:"<<div<<endl;

    }
};


     

int main(){
    
    hybridcalculator h;

    h.setdata(10,20);
    h.arithmetic();

    h.setdata2(50,20);
    h.arithmetic2();

    h.display();



    return 0;
}