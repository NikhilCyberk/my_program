#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    /* ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
 */
    int n, m, j, it1, it2, val1, val2, flag, swap, temp;
    //  cout << "enter n ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        //    cout << "\nenter M ";
        cin >> m;

        int a[m];
        for (j = 0; j < m; j++)
        {
            //       cout << "\nenter arra " << j << " :";
            cin >> a[j];
        }
        for (j = 0; j < m; j++)
        {
            if (m == 1)
            {
                if (a[j] % 2 != 0)
                {
                    // cout << "\nj " << j;
                    swap = -1;
                }
                else
                {
                    swap = 0;
                }
            }

            if (j > 0)
            {
                it1 = (j - 1) % 2;
                //         cout << "\n it1 " << it1;
                val1 = a[j - 1] % 2;
                //       cout << " val1 " << val1 << " arr " << a[j - 1];
                it2 = j % 2;
                //     cout << "\n it2 " << it2;
                val2 = a[j] % 2;
                //   cout << " val2 " << val2 << " arr " << a[j];
                // cout << "\nbefore\n";
                // cout << "\nit1 " << it1 << " val1 " << val1;
                // cout << "\nit2 " << it2 << " val2 " << val2;

                if (it1 != val1)
                {
                    //   cout << "\nafter\n";
                    // cout << "\nit1 " << it1 << " val1" << val1;
                    if (it2 != val2)
                    {
                        //   cout << "\nit2 " << it2 << " val2" << val2;

                        temp = a[j - 1];
                        a[j - 1] = a[j];
                        a[j] = temp;
                        // cout << "\nswap temp " << swap;

                        swap++;
                    }
                }
            }
        }

        cout << swap << " ";
        swap = 0;
    }
}