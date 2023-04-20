#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no, cgpa;
    string name, branch, institute;

public:
    student()
    {
        cout << "\nstudent constructor created\n";
    };
    ~student()
    {
        cout << "\nstudent constructor destroyed\n";
    };
    void get_student_detail(int a, int b, string c, string d, string e)
    {
        roll_no = a;
        cgpa = b;
        name = c;
        branch = d;
        institute = e;
    }
    void print_student_details()
    {
        cout << "\nroll no : " << roll_no;
        cout << "\n CGPA : " << cgpa;
        cout << "\nName " << name;
        cout << "\nBrach " << branch;
        cout << "\ninstitute : " << institute;
    }
};

class employee
{
protected:
    int emp_id, salary;
    string name, organization;

public:
    employee()
    {
        cout << "\nemployee constructor created\n";
    };
    ~employee()
    {
        cout << "\nemployee constructor destroyed\n";
    };
    void get_employee_detail(int a, int b, string c, string d)
    {
        emp_id = a;
        salary = b;
        name = c;
        organization = d;
    }
    void print_student_details()
    {
        cout << "\nemployee ID : " << emp_id;
        cout << "\n salary : " << salary;
        cout << "\nName " << name;
        cout << "\norganization " << organization;
    }
};

class working_student : public student, public employee
{
public:
    working_student()
    {
        cout << "\nworking student  constructor created\n";
    };
    ~working_student()
    {
        cout << "\nworking student constructor destroy\n";
    };
    void print_data()
    {
        cout << "\nroll no : " << roll_no;
        cout << "\n CGPA : " << cgpa;
        cout << "\nName " << name;
        cout << "\nBrach " << branch;
        cout << "\ninstitute : " << institute;
        cout << "\nemployee ID : " << emp_id;
        cout << "\n salary : " << salary;
        cout << "\nName " << name;
        cout << "\norganization " << organization;
    }
};
int main()
{
    // for bicycle
    cout << "\n************************\n";
    cout << "--------CYLINDER---------\n";

    return 0;
}