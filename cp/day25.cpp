/*#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, m;
    cin >> n >> m;

    vector<long long> a(n), l(n + 1, -1);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_set<long long> d;
    vector<long long> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        d.insert(a[i]);
        l[a[i]] = i;
        ans[i] = d.size();
    }

    for (int i = 0; i < m; i++)
    {
        int li;
        cin >> li;
        int res = ans[li - 1];
        for (int j = li; j < n; j++)
        {
            if (l[a[j]] < li - 1)
                res--;
        }
        cout << res << endl;
    }

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    set<int> s;
    int n, m;
    cin >> n >> m;

    vector<int> v(n), f(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        f[i] = s.size();
    }

    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        cout << f[t - 1] << endl;
    }

    return 0;
}