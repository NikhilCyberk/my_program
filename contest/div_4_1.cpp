#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a, b, c, n;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        if ((a + b) == c)
        {
            cout << "+\n";
        }
        else if ((a - b) == c)
        {
            cout << "-\n";
        }
    }
}