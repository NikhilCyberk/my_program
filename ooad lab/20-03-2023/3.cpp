#include <bits/stdc++.h>
using namespace std;
class Shape2D
{
protected:
    string type;

public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Circle : public Shape2D
{
    double xC, yC;
    double radius;

public:
    double area()
    {
        return 3.14 * radius * radius;
    }
    double perimeter()
    {
        return 2 * 3.14 * radius;
    }
    Circle(double x, double y, double r) : xC(x), yC(y), radius(r) { type = "Circle"; }
    void print()
    {
        cout << "\nShape type: " << type << endl;
        printf("Center: %lf %lf\nRadius: %lf\nArea: %lf\nPerimeter: %lf\n\n", xC, yC, radius, area(), perimeter());
    }
};

class Triangle : public Shape2D
{
    double base;
    double height;

public:
    double area()
    {
        return 0.5 * base * height;
    }
    double perimeter()
    {
        double hyp = sqrt(base * base + height * height);
        return base + height + hyp;
    }
    Triangle(double b, double h) : base(b), height(h) { type = "Triangle"; }
    void print()
    {
        cout << "\nShape type: " << type << endl;
        printf("Base: %lf\nHeight: %lf\nArea: %lf\nPerimeter: %lf\n\n", base, height, area(), perimeter());
    }
};
int main()
{
    Circle c(0.0, 0.0, 5);
    c.print();
    Triangle t(3, 4);
    t.print();
}