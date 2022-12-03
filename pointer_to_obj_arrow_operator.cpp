#include<iostream>
using namespace std;

class item{

    int real;
    int imaginary;

    public:
       void getdata()
       {
        cout<<"The value of real is:"<<real<<endl;;
        cout<<"The value of imaginary is:"<<imaginary<<endl;
       }

       void setdata(int a,int b)
       {
        real=a;
        imaginary=b;

       }

};

int main(){
    

    item x;
    item *ptr=&x;

    // x.setdata(10,20);
    // x.getdata();
    //equivalent to
    // (*ptr).setdata(10,20);
    // (*ptr).getdata();

    // ptr->setdata(10,20);
    // ptr->getdata();

    //create obj using pointers

    item *ptr1=new item;
     
    ptr1->setdata(10,20);
    ptr1->getdata();





    return 0;
}