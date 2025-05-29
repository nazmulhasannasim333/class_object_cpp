#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section;
    double math_marks;
    int cls;

    Student(const char *name, int roll, char section, double math_marks, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student s1("Alice", 101, 'A', 55.5, 4);
    Student s2("Bob", 102, 'B', 88.0, 10);
    Student s3("Charlie", 103, 'A', 32.0, 10);

    if ((s1.math_marks > s2.math_marks) && (s1.math_marks > s3.math_marks))
    {
        cout << "Top student: " << s1.name << " with marks: " << s1.math_marks << endl;
    }
    else if ((s2.math_marks > s1.math_marks) && (s2.math_marks > s3.math_marks))
    {
        cout << "Top student: " << s2.name << " with marks: " << s2.math_marks << endl;
    }
    else
    {
        cout << "Top student: " << s3.name << " with marks: " << s3.math_marks << endl;
    }

    return 0;
}