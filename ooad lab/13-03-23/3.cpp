#include <iostream>
using namespace std;
class point
{
protected:
    int xco, yco;

public:
    point()
    {
        cout << "\npoint constructor created\n";
    };
    ~point()
    {
        cout << "\npoint constructor destroyed\n";
    };
    void get_cor(int a, int b)
    {
        xco = a;
        yco = b;
    }
    void print()
    {
        cout << "X coordinate : " << xco << endl;
        cout << "Y coordinate : " << yco << endl;
    }
};
class Circle : public point
{
protected:
    float radius;

public:
    Circle()
    {
        cout << "\ncircle constructor created\n";
    };
    ~Circle()
    {
        cout << "\ncircle constructor destroy\n";
    };
    void get_rad()
    {
        if (yco >= xco)
        {
            radius = yco - xco;
        }
        else
        {
            radius = xco - yco;
        }
    }
    void print_area()
    {

        cout << "\narea of circle : " << 3.14 * radius * radius << endl;
    }
};
class Cylinder : public Circle
{
protected:
    float height;

public:
    // 2πrh+2πr2
    Cylinder()
    {
        cout << "\ncyclinder constructor created\n";
    };
    ~Cylinder()
    {
        cout << "\ncyclinder constructor destroyed \n";
    };
    void get_height(float h)
    {
        height = h;
    }
    void print_surface_area()
    {
        cout << "\nsurface area of cyclinder : " << 2 * 3.14 * radius * (radius + height) << endl;
    }
    void volume()
    {
        cout << "\n volume of cylinder : " << 3.14 * radius * radius * height << endl;
    }
};
int main()
{
    // for bicycle
    cout << "\n************************\n";
    cout << "--------CYLINDER---------\n";
    Cylinder c1;
    c1.get_cor(9, 2);
    c1.print();
    c1.get_rad();
    c1.print_area();
    c1.get_height(6);
    c1.print_surface_area();
    c1.volume();
    return 0;
}