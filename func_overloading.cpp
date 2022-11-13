#include<iostream>
using namespace std;

//volume of cylinder
int volume(int r,int h)
{
    return 3.14*r*r*h;


}

//volume of cube
int volume(int a)
{
    return a*a*a;
}

int main(){
    
    cout<<"Volume of Cylinder is:"<<volume(10,24)<<endl;
    cout<<"Volume of cube is:"<<volume(5)<<endl;



    return 0;
}