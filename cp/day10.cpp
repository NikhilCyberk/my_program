#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin >> a;
    while (a--)
    {
        long long n;
        cin >> n;
        int mx_b = 0;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int top = a[0];
        int m;
        cin >> m;
        int top_card = 0;
        for (int i = 0; i < m; i++)
        {
            int bj;
            cin >> bj;

            top_card += bj;
            top_card %= n;
        }
        cout << a[top_card] << endl;
    }

    return 0;
}