/*
Pythagorean Triples
a^2=b^2+c^2
*/
#include <bits/stdc++.h>
using namespace std;
bool isPythoTriplet(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (b >= a && b >= c)
    {
        if (pow(b, 2) == (pow(c, 2) + pow(a, 2)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (pow(c, 2) == (pow(b, 2) + pow(a, 2)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int32_t main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (isPythoTriplet(x, y, z))
    {
        cout << "yes ";
    }
    else
    {
        cout << "no";
    }
}