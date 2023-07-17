#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "nikhil";
    // cin >> s;
    // string length
    cout << s << " length of string : " << s.length();
    cout << endl;

    string ::iterator it;
    for (it = s.begin(); it < s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    s = 34;
    for (auto x : s)
    {
        cout << x << " ";
    }

    return 0;
}