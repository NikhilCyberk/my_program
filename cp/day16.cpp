#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sol()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int j = 0; j < n / 2; j++)
    {
        cout << v[j] << " " << v[n - j - 1] << " ";
    }
    if (n % 2 != 0)
        cout << v[n / 2];
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}