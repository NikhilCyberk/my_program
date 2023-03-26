// 1
// 1 1
// 1 2 1
// 1 3 3 1    pascal triangle
#include <iostream>
using namespace std;
int fact(int x)
{
    int i = 1;
    while (x > 0)
    {
        i = i * x;
        x--;
    }
    return i;
}
int nCr(int x, int y)
{
    if (x >= y)
    {
        return fact(x) / (fact(x - y) * fact(y));
    }
}
int main()
{
    int n, r;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
}
