/*
****
***
**
*

*/

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    n++;
    while (n--)
    {
        m = n;
        while (m--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}