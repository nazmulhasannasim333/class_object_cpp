#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fun()
{
    Student s(101, 6, 3.5);
    Student *p = &s;
    return p;
}

int main()
{
    Student *s1 = fun();
    cout << s1->roll << " " << s1->cls << " " << s1->gpa << endl;
    return 0;
}