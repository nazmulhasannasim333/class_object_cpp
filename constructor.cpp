#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    Student s1(101, 10, 3.5);
    cout << s1.roll << " " << s1.cls << " " << s1.gpa << endl;
    return 0;
}