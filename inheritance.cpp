#include <iostream>
using namespace std;

// Base class
class employee
{
public:
    int id;
    float salary;

    employee(int ipid)
    {
        id = ipid;
        salary = 34.00;
    }


   //Default constructor
    employee()
    {
    }
};

// Derived class
class programmer : public employee
{
public:
    programmer(int ipid)
    {

        id = ipid;

        cout << "Id is:" << id << endl;
    }
};

int main()
{

   //employee e(10);

    
    programmer p(20);
    int a = p.id;
   // int b = e.id;
    float sal=p.salary;

    cout << "id:" << a << endl;
    //cout << "id:" << b << endl;
    cout<<"Salary:"<<sal<<endl;
    return 0;
}