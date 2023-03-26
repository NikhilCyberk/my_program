/*
        *
      * *
    * * *
  * * * *
* * * * *


*/

#include <iostream>
using namespace std;
int main()
{
    int n, m, t, a;
    cin >> n;
    n++;
    t = n;
    while (n--)
    {
        m = n;
        while (m--)
        {
            cout << "  ";
        }
        a = t - n;
        while (a--)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}
