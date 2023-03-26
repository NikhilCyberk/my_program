#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n, maxno = INT_MIN, minno = INT_MAX;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxno = max(maxno, a[i]);
        minno = min(minno, a[i]);
    }
    cout << "max : " << maxno << endl;
    cout << "min : " << minno << endl;
} 