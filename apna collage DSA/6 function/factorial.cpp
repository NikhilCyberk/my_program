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

int main()
{
    int n, r;
    cin >> n >> r;
    if (n >= r)
    {
        cout << "nCr ";
        cout << fact(n) / (fact(n - r) * fact(r));
    }
    else
    {
        cout << "wrong input";
    }
}
