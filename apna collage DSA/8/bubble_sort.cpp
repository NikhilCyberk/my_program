#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    /* int n;
     cout << "enter size of array : ";
     cin >> n;*/
    int a[5] = {1, 8, 6, 4, 2};
    /* cout << "\nenter array : ";
     for (int i = 0; i < n; i++)
     {
         cin >> a[i];
     }
 */
    int temp;
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                cout << a[j];
                temp = a[j];
                cout << " " << a[j + 1];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                temp = 0;

                //            cout << a[i] << " : " << a[j] << '\n';
            }
            cout << endl;
            for (int i = 0; i < 5; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}