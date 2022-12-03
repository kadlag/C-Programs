#include<iostream>
using namespace std;

template<class T>
void swapp(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;

}


template <class T1,class T2>
float average(T1 a,T2 b)
{
    float avg=(a+b)/2;
    return avg;
}
int main(){
    
    float av=average(5,2.5);
    cout<<"Average is :"<<av<<endl;

    int x=5;
    int y=8;

    swapp(x,y);
    cout<<x<<endl<<y<<endl;

    return 0;
}