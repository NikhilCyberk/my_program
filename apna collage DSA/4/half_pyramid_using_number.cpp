/*
1
22
333
4444
55555



*/

#include <iostream>
using namespace std;
int main()
{

    int n, m, t, s = 1;
    cin >> n;
    // n++;
    t = n;
    while (n--)
    {
        m = t - n;

        while (m--)
        {
            cout << s << " ";
            s++;
        }
        cout << endl;
    }
}