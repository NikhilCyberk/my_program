#include <bits/stdc++.h>
using namespace std;
string Exception()
{
    return "string Error";
}
int32_t main()
{
    try
    {
        try
        {
            throw(Exception());
        }
        catch (int x)
        {
            cerr << "Integer Error";
        }
    }
    catch (string s)
    {
        cout << "error : " << s;
    }
    return 0;
}
