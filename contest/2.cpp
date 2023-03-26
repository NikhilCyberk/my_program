#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, n2, odd, even;

    cin >> n;
    while (n--)
    {
        even = odd = 0;
        cin >> n2;
        long long arr[n2];
        for (int i = 0; i < n2; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even += arr[i];
            }
            else
            {
                odd += arr[i];
            }
        }
        if (even > odd)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
}