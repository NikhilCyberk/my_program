#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long l, r, tmpl, tmpr, lcm, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        if (l * 2 <= r)
        {
            cout << l << " " << l * 2 << endl;
        }
        else
        {
            cout << "-1 -1" << endl;
        }
    }
}