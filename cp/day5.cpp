#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long number, position;
    cin >> number >> position;
    //  long long array[number];
    if (number % 2 == 0)
    {

        if (position <= number / 2)
        {
            cout << 2 * position - 1;
        }
        else
        {
            cout << 2*(position - (number / 2));
        }
        // long long even = number / 2;
        // for (long long i = 1; i <= even; i++)
        // {
        //     array[i] = (i * 2) - 1;
        // }
        // long long j = 1;
        // for (long long i = even + 1; i <= number; i++)
        // {
        //     array[i] = j * 2;
        //     j++;
        // }
    }
    else{
        if (position <= (number / 2)+1)
        {
            cout << 2 * position - 1;
        }
        else
        {
            cout << 2*(position - ((number+1) / 2));
        }

    }
}
