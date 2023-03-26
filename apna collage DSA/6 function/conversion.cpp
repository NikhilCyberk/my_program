/*
converion

*/
#include <bits/stdc++.h>
using namespace std;
int dec_to_bin(int a)
{
    int rem = 0, bin = 0;

    while (a > 0)
    {
        bin = bin * 10;
        rem = a % 2;
        a = a / 2;

        bin = bin + rem;
        // cout << bin << " ";
    }
    return bin;
}

int32_t main()
{
    int n;
    cin >> n;
    cout << dec_to_bin(n);
}