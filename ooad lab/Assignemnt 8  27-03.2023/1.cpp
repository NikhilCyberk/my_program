#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    long a, b;
    float div;
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw(1);
        }
    }
    catch (int x)
    {
        cerr << "denom cannot be zero" << '\n';
    }
    try
    {
        if (b < -1000000000)
        {
            throw(2);
        }
    }
    catch (int y)
    {
        cerr << "denom cannot be large negetive number" << '\n';
    }
    try
    {
        if (b > 1000000000)
        {
            throw(3);
        }
    }
    catch (int z)
    {
        cerr << "denom cannot be large number" << '\n';
    }
    div = a / b;
    cout << "div : " << div;
}