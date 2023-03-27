#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int a[n];
    cout << "\nenter array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                cout << a[i] << " : " << a[j] << '\n';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}