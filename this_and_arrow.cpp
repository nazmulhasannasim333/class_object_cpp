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

int main()
{
    Student s1(101, 10, 3.5);
    Student s2(102, 11, 3.8);
    cout << s1.roll << " " << s1.cls << " " << s1.gpa << endl;
    cout << s2.roll << " " << s2.cls << " " << s2.gpa << endl;
    return 0;
}