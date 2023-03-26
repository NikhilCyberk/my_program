#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, s = 0;
    cin >> t;
    while (t--)
    {
        int n = 1, p = 0, nm;
        cin >> nm;
        while (1)
        {
            s = n * (4 + (n - 1) * 3) / 2;
            int r = 2 + n * 3;
            n++;
            if (nm < 2)
            {
                break;
            }
            else if (nm - s < r)
            {
                p++;
                nm -= s;
                n = 1;
            }
        }
        cout << p << endl;
    }
    return 0;
}
