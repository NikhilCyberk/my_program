/*
https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=sorting-elements-of-an-array-by-frequency
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
        unordered_map<int, int> m;
    while (t--)
    {
        m.clear();
        int n;
        cin >> n;
        int num;
        /* The `for` loop is iterating `n` times and taking input of `n` integers from the user and
        storing them in the `num` variable. It is then incrementing the count of the `num` in the
        `unordered_map` `m`. */
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            m[num]++;
        }
    }
    for (auto x : m)
    {
        cout << x.first << " " << x.second << '\n';
    }
    return 0;
}