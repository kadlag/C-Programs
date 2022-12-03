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

      //create obj using pointer 
      shopitem *ptr=new shopitem[n];
 
      shopitem *ptrtemp=ptr;

   

    for(int i=0;i<n;i++)
    {
        cout<<"enter id of the item"<<endl;
        cin>>p;

        cout<<"enter salary of the item"<<endl;
        cin>>q;


        // (*ptr).setdata(p,q);It is equivalent to
        ptr->setdata(p,q); 
        ptr++;


    }


   for(int i=0;i<n;i++)
   {
    // (*ptrtemp).getdata();
    ptrtemp->getdata();
    

    ptrtemp++;
   }

    return 0;
}