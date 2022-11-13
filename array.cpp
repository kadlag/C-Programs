#include<iostream>
using namespace std;

int main(){
    
    int marks[50];

    cout<<"Enter marks";

    for(int i=0;i<5;i++)
    {
        cin>>marks[i];

    }

    cout<<"the marks are"<<"\n";

    for(int i=0;i<5;i++)

    {
        cout<<marks[i]<<endl;

    }

    cout<<marks;

    
    

    return 0;
}