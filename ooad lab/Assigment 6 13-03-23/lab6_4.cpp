/*
4)  Implement the following muliple-inheritance hierarchy. Demonstrate overridding
    of printdata() and object slicing while showing a function call to the corresponding
    version of each parent class.

    Class : VegCuisine
    Member : name, cost
    Function: constructors, destructors, printdata()

    Class: NonVegCuisine
    Member : name, cost
    Functions : constructors, destructors, printdata()

    Class : ComboCuisine(Inherits VegCuisine and NonVegCuisine)
    Members: (all inherited)
    Functions: constructors, destructors, printdata()

*/

#include <bits/stdc++.h>
using namespace std;
#define nn cout << endl;
class VegCuisine
{
protected:
    string name;
    float cost;

public:
    VegCuisine(string n, float f)
    {
        name = n;
        cost = f;
    }
    ~VegCuisine() { cout << "\ndtor for VegCuisine Object" << endl; }
    void printData()
    {
        cout << "\nName of Veg-Cuisine : " << name << "\nCost : " << cost << endl;
    }
};

class NonVegCuisine
{
protected:
    string name;
    float cost;

public:
    NonVegCuisine(string n, float f)
    {
        name = n;
        cost = f;
    }
    ~NonVegCuisine() { cout << "\ndtor for NonVegCuisine Object" << endl; }
    void printData()
    {
        cout << "\nName of Non-Veg Cuisine : " << name << "\nCost : " << cost << endl;
    }
};
class ComboCuisine : public VegCuisine, public NonVegCuisine
{
public:
    ComboCuisine(string n, float c) : VegCuisine(n, c), NonVegCuisine(n, c)
    {
        // cout << "\nCombo Cuisine name : " << n << "\nCost : " << c;
    }
    ~ComboCuisine()
    {
        cout << "\nDestroyed a ComboCuisine object\n";
    }
    void printData()
    {
        cout << "\nName of Combo Cuisine : " << VegCuisine::name << "\nCost : " << VegCuisine::cost << endl;
    }
};

int main()
{
    VegCuisine *vPtr = new VegCuisine("salad", 30);
    NonVegCuisine *nvPtr = new NonVegCuisine("chicken nuggets", 60);
    ComboCuisine *cPtr;
    cPtr = new ComboCuisine("egg salad", 75);
    nn
        cPtr->printData();
    nn
        vPtr = cPtr;
    vPtr->printData();
    nn
        nvPtr->printData();
    nn

        delete (cPtr);
    delete (vPtr);
    delete (nvPtr);

    return 0;
}