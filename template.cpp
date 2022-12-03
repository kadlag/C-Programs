#include<iostream>
using namespace std;

template<class T1,class T2>
class myclass
{
    public:
       T1 data1;
       T2 data2;

       myclass(T1 a,T2 b)
       {
        data1=a;
        data2=b;

       }

       void display()
       {
        cout<<"The value of data1 and data2 is:"<<this->data1 << this->data2<<endl;
         cout<<"The value of data1 and data2 is:"<<data1 <<data2<<endl;
       }

};

int main(){
    
    myclass <int ,float> obj1(10,10.25);
    obj1.display();

    return 0;
}