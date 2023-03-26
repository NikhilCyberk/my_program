#include <bits/stdc++.h>
using namespace std;

class Student
{
protected:
    int Rollno;
    string name, branch, institute;
    double cgpa;

public:
    Student(int r = 0, string n = "", string b = "", string i = "", double c = 0.0)
    {
        Rollno = r;
        name = n;
        branch = b;
        institute = i;
        cgpa = c;
    }
    ~Student()
    {
        cout << "Student Destructor is Called " << endl;
    }

    void printData()
    {
        cout << "RollNumber : " << Rollno;
        cout << "\nName : " << name;
        cout << "\nBranch : " << branch;
        cout << "\nInstitute : " << institute;
        cout << "\ncgpa : " << cgpa << endl;
    }
};

class Employee
{
protected:
    int empid, salary;
    string name, organisation;

public:
    Employee(int e = 0, int s = 0, string n = "", string o = "")
    {
        empid = e;
        salary = s;
        name = n;
        organisation = o;
    }
    ~Employee()
    {
        cout << "Employee Destructor is Called " << endl;
    }

    void printData()
    {
        cout << "Employee ID : " << empid;
        cout << "\nEmployee Salary : " << salary;
        cout << "\nEmployee Name : " << name;
        cout << "\nOrganisation Name : " << organisation << endl;
    }
};

class WorkingStudent : public Student, Employee
{
    string name; // same name of variable in base an derive class --no problem
public:
    WorkingStudent(string s = "")
    {
        name = s;
    }
    ~WorkingStudent()
    {
        cout << "Working Student Destructor is Called " << endl;
    }
    void printData()
    {

        cout << "Working Student  : " << name << endl;
    }
};
int main()
{
    Student *s = new Student(8, "Vinay", "MCA", "NITJSR", 7.5);
    Employee *e = new Employee(101, 10000, "Alekha", "NITJSR");
    WorkingStudent *ws = new WorkingStudent("Shivam");
    s->printData();
    e->printData();
    ws->printData();
    return 0;
}