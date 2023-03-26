// armstrong number
//  153= 1*1*1+5*5*5+3*3*3=153
//
//
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, arm = 0, rm;
    cin >> n;
    while (n > 0)
    {
        // re = re * 10;
        rm = n % 10;
        n = n / 10;
        rm = pow(rm, 3);

        arm = arm + rm;
    }
    if (n == arm)
    {
        cout << "yes it is armstrong number";
    }
    else
    {
        cout << "no";
    }
}
