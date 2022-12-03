#include <iostream>
using namespace std;

class base1
{

public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class base2
{

public:
    void greet()
    {
        cout << "kashi aahes?" << endl;
    }
};

class derived : public base1, public base2
{
public:
    // Ambiguity resolution
    void greet()
    {
        base1::greet();
    }
};

class B
{
public:
 void say()
 {
    cout<<"Hello world"<<endl;

 }

};

class D: public B{
    public:
    //    void say()
    //    {
    //       cout<<"Hello beautiful world";

    //    }
};


int
main()
{

    base1 b1;
    b1.greet();

    base2 b2;
    b2.greet();

    derived d;
    d.greet();


     D d1;
     d1.say();

    return 0;
}