#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int ruppe = 15, no_of_choco = 15, no_of_wrap = 0;
    for (int i = 0; i < no_of_choco; i++)
    {
        no_of_wrap++;
        if (no_of_wrap == 3)
        {
            no_of_choco++;
            no_of_wrap = 0;
        }
    }
    cout << "no of choco : " << no_of_choco;
}