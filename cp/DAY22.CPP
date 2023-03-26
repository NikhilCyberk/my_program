#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size(), flag = 0;

    for (int i = 0; i <= n; i++)
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            string t = s.substr(0, i) + c + s.substr(i);
            string r = t;
            reverse(r.begin(), r.end());
            if (t == r)
            {
                cout << t << endl;
                flag = 1;
                break;
            }
        }
        if (flag)
            break;
    }

    if (!flag)
    {
        cout << "NA" << endl;
    }

    return 0;
}
