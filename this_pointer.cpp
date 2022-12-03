#include<iostream>
using namespace std;

class complex
{
    int a;

    public:
        complex &setdata(int a)
        // void setdata(int a)
        {
           this->a=a;
           return *this;

        }

        void getdata()
        {
            cout<<"The value of a is:"<<a<<endl;

        }

};

int main(){

    complex c,c1;
    c.setdata(20);
    c.getdata();
   
    c1.setdata(10);
    c1.getdata();

    
    return 0;
}

