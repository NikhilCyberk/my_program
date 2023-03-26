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
        int n, m;
        cin >> n >> m;

        vector<int> arr(n + 1);
        vector<int> pre(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            pre[i] = pre[i - 1] + arr[i];
        }

        while (m--)
        {
            int l, r, v;
            cin >> l >> r >> v;

            int sum = pre[r] - pre[l - 1];
            int len = r - l + 1;

            if ((sum + len * v) % 2 == 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}
