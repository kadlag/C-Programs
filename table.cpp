#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number"<<endl;
    cin>>n;
     
     int i=1;
     int total;
    do
    {
       total=n*i;
       cout<<total<<endl;

       i++;

        
        
    } while (i<=10);
    


    return 0;

}