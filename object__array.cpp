#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 122;
        cout << "Enter the id of the employee" << endl;
        cin >> id;
    }

    void getid(void)
    {
        cout << "Id of the employee is:" << id << endl;
    }
};

int main()
{

    employee emp[100];

    for (int i = 0; i < 4; i++)
    {
        emp[i].setid();
        emp[i].getid();
    }
    return 0;
}