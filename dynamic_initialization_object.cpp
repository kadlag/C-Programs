#include <iostream>
using namespace std;

class Bankdeposit
{
    int principal;
    int years;
    float interstRate;
    float returnvalue;

    public:
    // default constructor
    Bankdeposit()
    {
    }

    Bankdeposit(int p, int y, float r)
    {
        principal = p;
        years = y;
        interstRate = r;
        returnvalue = principal;

        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + interstRate);
        }
    }


    Bankdeposit(int p, int y, int r)
    {
        principal = p;
        years = y;
        interstRate = float (r)/100;
        returnvalue = principal;

        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + interstRate);
        }
    }

    void show()
    {
        cout << "Principal amount is:" << principal << "  Years:" << years << "  Interestrate:" 
        << interstRate << "  Return value:" << returnvalue<<endl;
    }
};

int main()
{

   Bankdeposit bd1,bd2,bd3;
    
    int p,y;
    float r;
    int R;

    cout<<"enter principal,years and rate:"<<endl;
    cin>>p>>y>>r;

    bd2=Bankdeposit(p,y,r);
    bd2.show();

     cout<<"enter principal,years and rate:"<<endl;
    cin>>p>>y>>R;

    bd3=Bankdeposit(p,y,R);
    bd3.show();

    return 0;
}