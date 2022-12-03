#include<iostream>
using namespace std;

template<class T1=int,class T2=float>
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
        cout<<"the value of data1 is:"<<data1<<endl;
        cout<<"The value of data2 is:"<<data2<<endl;
      }

};
int main(){
    
    //Default parameter
    myclass<> my(10,10.65);
    my.display();

    cout<<endl;
    //main parameter
    myclass<int,int> my1(10,20);
    my1.display();


    return 0;
}