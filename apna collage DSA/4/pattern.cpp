// 10.4.1

#include <iostream>
using namespace std;
int main()
{

    int n, m, t;
    cin >> n;
    cin >> m;
    t = m;
    while (n--)
    {
        m = t;
        while (m--)
        {
            cout << "*";
        }
        cout << endl;
    }
}