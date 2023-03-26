#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], b[n - 1], c[n - 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        cin >> c[i];
    }
    int s1 = 0, s2 = 0, s3 = 0;
    for (int i = 0; i < n; i++)
    {
        s1 += a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        s2 += b[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        s3 += c[i];
    }
    cout << s1 - s2 << "\n" << s2 - s3;
}