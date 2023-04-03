#include <bits/stdc++.h>
using namespace std;
class FamilyMember
{
protected:
    string name;
    string fname;
    string origin;

public:
    FamilyMember(string n, string f, string o)
    {
        name = n;
        fname = f;
        origin = o;
    }
    ~FamilyMember()
    {
        cout << "Obj deleted for class FamilyMember\n";
    }
    virtual void about()
    {
        cout << "\nFamily Member details:\n";
        printf("Name: %s\nFamily Name: %s\nOrigin: %s\n", name.c_str(), fname.c_str(), origin.c_str());
    }
};

class Citizen
{
protected:
    string name;
    string country;
    int year;

public:
    Citizen(string n, string c, int y)
    {
        name = n;
        country = c;
        year = y;
    }
    ~Citizen()
    {
        cout << "Obj deleted for class Citizen\n";
    }
    virtual void about()
    {
        cout << "\nCitizen details:\n";
        printf("Name: %s\nCountry %s\nCitizen Since: %d\n\n", name.c_str(), country.c_str(), year);
    }
};

class Employee : public Citizen, public FamilyMember
{
protected:
    string empid;

public:
    Employee(string n, string f, string o, string c, int y, string e) : FamilyMember(n, f, o), Citizen(n, c, y) { empid = e; }
    ~Employee()
    {
        cout << "Obj destroyed for class Employee\n";
    }
    void about()
    {
        cout << "\nEmployee Details:\n";
        FamilyMember::about();
        Citizen::about();
    }
};

int main()
{
    Employee emp("NIkhil", "Kumar", "Jaipur", "India", 1998, "EMP123");
    FamilyMember *f;
    Citizen *c;
    f = &emp;
    c = &emp;
    f->about();
    f->FamilyMember::about();
    c->Citizen::about();
    return 0;
}