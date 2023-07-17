#include <bits/stdc++.h>
using namespace std;
bool palin(string &str, int st, int e)
{
    if (st >= e)
    {
        return true;
    }
    return (str[st] == str[e]) && palin(str, st++, e--);
}

int main()
{
    string str = "aaaaa";
    if (palin(str, 0, 4) == 1)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}