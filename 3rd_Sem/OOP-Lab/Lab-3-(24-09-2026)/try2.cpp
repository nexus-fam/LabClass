#include <bits/stdc++.h>
using namespace std;

// Multiple Inheritance

class Teacher
{
public:
    string dept;
    int num_of_course;
};

class Employee
{
public:
    string email;
    int salary;
};

class Researcher
{
public:
    string research_area;
    int num_of_paper;
};

class Professor : public Teacher, public Employee, public Researcher
{
public:
    Professor()
    {
        cout << " Professor inheritaed from Teacher , Employee and Reseacher . " << endl;
    }
    string name_of_uni;
    int num_of_adviced_stu;
};

int main()
{
    cout << endl;

    Professor p1;
    p1.dept = "CSE";
    p1.num_of_course = 3;
    p1.email = "p1@ist.edu";
    p1.salary = 50000;
    p1.research_area = "ML/AI";
    p1.num_of_paper = 3;
    p1.name_of_uni = "IST";
    p1.num_of_adviced_stu = 10;

    cout << "Name of dept : " << p1.dept << endl;
    cout << "Number of course teach : " << p1.num_of_course << endl;
    cout << "Email address : " << p1.email << endl;
    cout << "Salary : " << p1.salary << endl;
    cout << "Research area : " << p1.research_area << endl;
    cout << "Number of paper : " << p1.num_of_paper << endl;
    cout << "Name of university : " << p1.name_of_uni << endl;
    cout << "Number of student adviced of research : " << p1.num_of_adviced_stu << endl;

    return 0;
}