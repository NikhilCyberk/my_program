#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int a[5] = {1, 8, 6, 4, 2};
    for (int i = 1; i < 5; i++)
    {
        int current = a[i];
        int j = i - 1;
        while (a[j] > current && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = current;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}