#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, dragon_s, bonus, flag = 0;
    cin >> a >> b;
    // map
    multimap<int, int> m;
    for (int i = 1; i <= b; i++)
    {
        cin >> dragon_s >> bonus;
        m.insert({dragon_s, bonus});
    }

    // other method of map
    multimap<int, int>::iterator it;
    //cout << "*************************\n";
    for (it = m.begin(); it != m.end(); ++it)
    {
      //  cout << (*it).first << " " << (*it).second << endl;
        if (a > (*it).first)
        {
            a = a + (*it).second;
        }
        else
        {
            flag++;
        }
    }
   // cout << "*************************\n";
    if (flag == 0)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
}