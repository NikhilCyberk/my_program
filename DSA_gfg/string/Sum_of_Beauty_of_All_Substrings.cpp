#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        unordered_map<char, int> mp;
        for (int j = i; j < n; j++)
        {
           // cout << "\n j: " << j;
            mp[s[j]]++;
            int min = INT_MAX;
            int max = INT_MIN;
            for (auto x : mp)
            {
             //   cout << " x.first: " << x.first << " s.second: " << x.second << endl;
                if (x.second < min)
                    min = x.second;
                if (x.second > max)
                    max = x.second;
            }
            //cout << "min: " << min << "max: " << max;
            ans += (max - min);
            //cout << " ans : " << ans;
        }
    }

   // cout << ans;
    return 0;
}