#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, z;
        cin >> n >> z;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 29; i >= 0; i--)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if ((a[j] >> i) & 1)
                {
                    cnt++;
                }
            }
            if (cnt == n || ((z >> i) & 1))
            {
                for (int j = 0; j < n; j++)
                {
                    a[j] |= (1 << i);
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}