#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    int x;
    int y, rem;
    cin >> x;
    y = x / 14;
    rem = x % 14;
    cout << x << " " << y << " " << rem;

    if (x < 15)
    {
        cout << "-1" << '\n';
    }
    else if (rem == 0)
    {
        cout << "-1" << '\n';
    }
    else if (rem >= 1 && rem <= 6)
    {
        cout << y << 'n';
    }
    else
    {
        cout << "-1";
    }
}