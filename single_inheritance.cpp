#include<iostream>
using namespace std;

class Base
{
    int data1; //  private by default and is not inheritable
    public:

      int data2;

      void setdata();
      int getdata1();
      int getdata2();



};


void Base::setdata(void)
{
    data1=10;
    data2=20;

}

int Base::getdata1(void)
{
    return  data1;

}

int Base::getdata2(void)
{
    return  data2;

    
}

class Derived:public Base
{
int data3;

public:
  void process();
  void display();


};

void  Derived:: process(void)
{
    data3=data2*getdata1();
   
    cout<<"data3:"<<data3<<endl;
}

void Derived:: display(void)
{
     cout<<"data1:"<<getdata1()<<endl;
      cout<<"data2:"<<data2<<endl;
    cout<<"process output is:"<<data3<<endl;
}

int main(){
    

    Derived d;

    d.setdata();
    d.getdata1();
    d.getdata2();
    d.process();
    d.display();
    return 0;
}