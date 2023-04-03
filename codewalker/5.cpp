#include <bits/stdc++.h>
using namespace std;

string find_largest_string(string s)
{
    int n = s.length();
    string prefix = "", suffix = "";

    // Find longest proper prefix which is also a suffix of s
    for (int i = 0; i < n - 1; i++)
    {
        prefix += s[i];
        suffix = s.substr(n - i - 1, i + 1);
        if (prefix == suffix)
        {
            suffix = "";
        }
    }

    // Find the first occurrence of the substring which is not prefix or suffix
    for (int i = 1; i < n - 1; i++)
    {
        string t = s.substr(i, n - 2 * i);
        if (s.find(t) != string::npos)
        {
            return t;
        }
    }

    return "not found";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << find_largest_string(s) << endl;
    }
    return 0;
}
