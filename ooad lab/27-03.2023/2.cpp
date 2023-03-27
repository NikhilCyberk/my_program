#include <bits/stdc++.h>
using namespace std;
class EXception
{
    string s;

public:
    EXception(string a)
    {
        s = a;
    }
    void print()
    {
        cout << s;
    }
};

int32_t main()
{
    int a[5] = {'1', '2', '3', '4', '5'};
    int n;
    cin >> n;
    try
    {
        if (n > 5)
        {
            EXception ex("out of bound");
            throw ex;
        }
        else
        {
            cout << "value is : " << a[n];
        }
    }
    catch (EXception obj)
    {
        obj.print();
    }
    return 0;
}