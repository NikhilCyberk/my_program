#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int a[5] = {1, 8, 6, 4, 2};
    int sum, c = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            c++;
            sum = sum + a[j];
            cout << "sum " << c << " : " << sum << " ";
        }
        cout << "\nsum " << i + 1 << " : " << sum << '\n';
        sum = 0;
    }
}