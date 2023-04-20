#include <bits/stdc++.h>
using namespace std;
class employee
{
private:
    int empid;
    string doj;
    int salary;

public:
    // paramerize const
    employee(int emp = 0, string dj = "01/01/2000", int sal = 0)
    {
        empid = emp;
        doj = dj;
        salary = sal;
    }
    // copy const
    employee(const employee &obj)
    {
        empid = obj.empid;
        doj = obj.doj;
        salary = obj.salary;
    }

    void setEmpdata(string date)
    {
        doj=data;
    }
    


};

int main()
{
    InStack s1;
    s1.push(9);
    s1.push(9);
    s1.push(9);
    s1.push(9);
    s1.push(9);
    s1.push(9);
    s1.push(9);
}