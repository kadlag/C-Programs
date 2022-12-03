#include <iostream>
using namespace std;
/*
student[base class]
student----->test
student------>sports

test and sports------->result

*/

class Student
{
protected:
  int rollno;

public:
  void set_number(int a)
  {
    rollno = a;
  }

  void print_number(void)
  {
    cout << "Roll no of student:" << rollno << endl;
  }
};

class test : virtual public Student
{

protected:
  float math, physics;

public:
  void set_marks(float m1, float m2)
  {
    math = m1;
    physics = m2;
  }

  void print_marks(void)
  {
    cout << "math marks is:" << math << endl;
    cout << "physics marks is:" << physics << endl;
  }
};

class sports : virtual public Student
{
protected:
  float score;

public:
  void set_score(float s)
  {
    score = s;
  }

  void print_score()
  {
    cout << "Sports Score is:" << score << endl;
  }
};

class Result : public test, public sports
{

private:
  float total;

public:
  void display()
  {
    total = physics + math + score;

    print_number();
    print_marks();
    print_score();
    cout<<"Total:"<<total<<endl;

  }
};


int main()
{

 Result res;
 res.set_number(100);
 res.set_marks(95.25,85.36);
 res.set_score(85);

 res.display();

  return 0;
}