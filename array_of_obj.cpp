#include<iostream>
using namespace std;

class shopitem
{
   int id;
   float price;

   public:
      void setdata(int a,float b)
      {
           id=a;
           price=b;

      }

      void getdata()
      {
        cout<<"Id is:"<<id<<endl;
        cout<<"Price is:"<<price<<endl;

      }
};

int main(){
    
   
    int p;
    float q;

    int n;
    cout<<"Enter how many item"<<endl;
    cin>>n;

      shopitem sh[n];
   

    for(int i=0;i<n;i++)
    {
        cout<<"enter id of the item"<<endl;
        cin>>p;

        cout<<"enter salary of the item"<<endl;
        cin>>q;


        sh[i].setdata(p,q);

    }

   for(int i=0;i<n;i++)
   {
    sh[i].getdata();
   }

    return 0;
}