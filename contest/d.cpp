#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, a, b, k, l, m, temp;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        long long arr[a], t[a];
        for (int i = 1; i <= a; i++)
        {
            cin >> arr[i];
            t[i] = arr[i];
        }
        for (int j = 1; j <= b; j++)
        {
            cin >> k >> l >> m;
            temp = 0;
            for (int p = 1; p <= a; p++)
            {
                if (p >= k && p <= l)
                {
                    temp += m;
                }
                else
                {
                    temp += t[p];
                }
            }
            if (temp % 2 == 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
}