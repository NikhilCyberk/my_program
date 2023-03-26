/*

*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *


*/

#include <iostream>
using namespace std;
int main()
{

    int n, m, t;
    cin >> n;
    n *= 2;

    t = m;

    for (int i = 0; i < n; i++)
    {
        t = n - i - 1;

        for (int j = 0; j < n; j++)
        {
            if (i < n / 2)
            {
                if (j <= i || j >= t)
                {
                    cout << "* ";
                }
                /*else if (j >= t)
                {
                    cout << "* ";
                }*/
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                if (j >= i || j <= t)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}
