// reverse a number

#include <iostream>
using namespace std;
int main()
{
    int n, re = 0, rm;
    cin >> n;
    while (n > 0)
    {
        re = re * 10;
        rm = n % 10;
        n = n / 10;
        re = re + rm;
    }
    cout << re;
}
