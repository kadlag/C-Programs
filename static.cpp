#include<iostream>
using namespace std;

class employee
{
    int id;
    static int count;

    public:
    void setdata(void);
    void display(void);

    static void initcounter(void)
    {
        cout<<"value of counter is:"<<count<<endl;

    }

};



//count is the static data member of class employee
int employee::count;//Default value is zero

void employee::setdata(void)
{

  cout<<"Enter the id of the employee: "<<endl;
  cin>>id;

  count++;
}

void employee::display(void)
{
    cout<<"Id of the employee is:"<<id<<"and the employee number is: "<<count<<endl;

}




int main(){
    
    employee harry,ram,radha;
    harry.setdata();
    harry.display();
    employee::initcounter();


    ram.setdata();
    ram.display();
    employee::initcounter();

    radha.setdata();
    radha.display();
    employee::initcounter();


    return 0;
}