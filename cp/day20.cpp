#include <bits/stdc++.h>
using namespace std;
int n, k, l, a;
string s, p;
int main()
{
    cin >> p >> n;
    while (n--)
    {
        cin >> s;
        if (s == p)
        {
            a = 1;
        }
        if (p[0] == s[1])
        {
            k = 1;
        }
        if (p[1] == s[0])
        {
            l = 1;
        }
    }
    if (l + k == 2 || a)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    // cout << (l + k == 2 || a ? "YES" : "NO");
    return 0;
}