#include <iostream>
using namespace std;

class Student
{
protected:
    int rollno;

public:
    void set_roll_no(int);
    void get_roll_no();
};

void Student::set_roll_no(int r)
{
    rollno = r;
}

void Student::get_roll_no(void)
{
    cout << "Student Roll no is:" << rollno << endl;
}

class Exam : public Student
{

protected:
    float physics;
    float chemistry;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam::set_marks(float p, float c)
{
    physics = p;
    chemistry = c;
}

void Exam::get_marks()
{
    cout << "Physics marks is:" << physics << endl;
    cout << "Chemistry marks is:" << chemistry << endl;
}

class Result : public Exam
{
protected:
    float percentage;

public:
    void display()
    {
        get_roll_no();
        get_marks();

        cout << "Percentage is:" << (physics + chemistry) / 2 << endl;
    }
};

int main()
{
    Result res;
    res.set_roll_no(20);
    res.set_marks(90, 94);

    res.display();

    return 0;
}