//nesting member function example
#include<iostream>
#include<string>
using namespace std;

class binary
{

   string s;


 public:

    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);


};

void binary::read(void)
{
    cout<<"enter a binary number"<<endl;
    cin>>s;

}

void binary::chk_bin(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);

        }
    }
}

void binary::ones_complement()
{
    chk_bin();//nesting member function

    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }

        else
        {
            s.at(i)='0';

        }
    }

}

void binary::display(void)
{
    cout<<"Your binary number is";
    for(int i=0;i<s.length();i++)
    {
        //cout<<"Your binary number is"<<endl;
        cout<<s.at(i);

    }

    cout<<endl;
}
int main(){
    
    binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.ones_complement();
    b.display();



    return 0;
}