#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    int n = s.size(), x = 0;
    unordered_map<char, int> m;
    char c = 'A';
    for (auto i : s)
        if (++m[i] > m[c])
            c = i;
    if (m[c] > (n + 1) / 2)
        return "-1";
    while (m[c])
    {
        s[x] = c;
        x += 2;
        m[c]--;
    }
    for (auto i : m)
    {
        while (i.second)
        {
            if (x > n - 1)
                x = 1;
            s[x] = i.first;
            i.second--;
            x += 2;
        }
    }
    return s;

    return 0;
}