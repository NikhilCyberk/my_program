#include <iostream>
#include <math.h>
using namespace std;
class Poin2D
{
private:
    int xCo;
    int yCo;

public:
    Poin2D() : xCo(0), yCo(0) {}
    Poin2D(int x, int y) : xCo(x), yCo(y) {}
    ~Poin2D(void) { cout << "\nObject is Destroyed!!"; }


 void getPoint()
    {
        cout << "\n getNumber Called\n";
        cout << "\n enter x Cordinate : ";
        cin >> xCo;
        cout << "\nenter y  Cordinate : ";
        cin >> yCo;
        cout << "(" << xCo <<","<<yCo <<")";
        cout << "\n \n ";
    }
    bool insideCircle(int r, )
};
int main(){
    Poin2D p1,p2;



}