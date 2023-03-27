#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    string s;
    // cout << "enter string : ";
    // cin >> s;
    int n;
    cout << "enter cut steing : ";
    cin >> n;
    try
    {
        if (s.size() <= 0)
        {
            throw("null string");
        }
    }
    catch (char const *s)
    {
        cerr << "error : " << s;
    }
    return 0;
}