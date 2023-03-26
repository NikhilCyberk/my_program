#include <iostream>
#include <math.h>
using namespace std;
class Fraction
{
private:
    int num;
    int denom;

public:
    Fraction() : num(0), denom(0) {}
    Fraction(int nm, int dnm) : num(nm), denom(dnm) {}
    ~Fraction(void) { cout << "\nObject is Destroyed!!"; }

    void getNumber()
    {
        cout << "\n getNumber Called\n";
        cout << "\nenter a num : ";
        cin >> num;
        cout << "\nenter a denom : ";
        cin >> denom;
        cout << num << "/" << denom;
        cout << "\n \n ";
    }

    void addFraction(Fraction x, Fraction y)
    {
        cout << "\naddFraction called\n";
        num = x.num + y.num;
        denom = x.denom + y.denom;
        cout << "\n \n ";
        cout << num << "/" << denom;
        cout << "\n \n ";
    }

    void reduceFraction()
    {
        cout << "\nreduceFraction called\n";
        int i, m, hcf;
        m = min(num, denom);
        for (i = 2; i <= m; i++)
        {
            if (num % i == 0 && denom % i == 0)
            {
                hcf = i;
            }
        }
        cout << "\n \n ";
        num /= hcf;
        denom /= hcf;
        cout << num << "/" << denom;
    }
};
int main()
{
    Fraction f1;
    Fraction f2;
    Fraction f3;
    f1.getNumber();
    f2.getNumber();
    f3.addFraction(f1, f2);
    f1.reduceFraction();
    f2.reduceFraction();
}