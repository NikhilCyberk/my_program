#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, flag = 1, tempFlag = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (j > 0)
        {
            if (a[j-1] <= a[j])
            {
                tempFlag++;
                // cout << tempFlag << " ";
            }
            else
            {
                if (flag < tempFlag)
                {
                    flag = tempFlag;
                }
            }
            if (flag < tempFlag)
            {
                flag = tempFlag;
            }
            if (a[j] > a[j + 1])
            {
                tempFlag = 1;
                // cout << tempFlag << " ";
            }
        }
    }
    cout << flag;
}
