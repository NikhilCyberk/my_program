/*
2)  Implement the following class hierarchy by defining all functions of each class.
    Demonstrate the call of each function and access to each data member using an
    object of bottom most class. In addition to all operations, show the order of
    execution for constructors and destructors for multi-level inheritance.

    Class : Point
    Members: xco, yco
    Functions: constructors, destructors, print()

    Class : Circle (inherits Point)
    Members : radius
    Functions: consturctors, destructors, print(), float area()

    Class: Cylinder (inherits Circle)
    Members : height
    Functions: constructors, destructors, print, float surarea(), float volume()
*/

#include <bits/stdc++.h>
using namespace std;

class Point
{
    int xco, yco;

public:
    Point() { cout << "\ndefault ctor for (x,y) : (" << xco << ',' << yco << ')' << endl; }
    Point(int x, int y) { cout << "\nparameterised ctor for (x,y) : (" << (xco = x) << ',' << (yco = y) << ')' << endl; }
    ~Point() { cout << "\ndtor for (x,y) : (" << xco << ',' << yco << ')' << endl; }
    void print()
    {
        cout << "\n(x,y) : (" << xco << ',' << yco << ')' << endl;
    }
};

class Circle : public Point
{
protected:
    float radius;

public:
    Circle(float r, int x, int y) : Point(x, y) { cout << "\nctor for circle radius : " << (radius = r) << endl; }
    ~Circle() { cout << "\ndtor for circle radius : " << (radius) << endl; }
    void print()
    {
        Point::print();
        cout << "\nCircle Radius : " << radius << endl;
    }
    float area()
    {
        return (3.14 * radius * radius);
    }
};

class Cylinder : public Circle
{
    float height;

public:
    Cylinder(int h, float r, int x, int y) : Circle(r, x, y) { cout << "\nctor for Cylinder height : " << (height = h) << endl; }
    ~Cylinder() { cout << "\ndtor for Cylinder height : " << (height) << endl; }
    void print()
    {
        Circle::print();
        cout << "\nCylinder height : " << (height) << endl;
    }
    float surarea()
    {
        return (2 * 3.14 * radius * (radius + height));
    }
    float volume()
    {
        return (3.14 * radius * radius * height);
    }
};

int main()
{
    Cylinder clr(5, 3, 2, 2);
    clr.print();
    return 0;
}