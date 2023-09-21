#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int flag = 0;
        // if (a == b || c == 0)
        // {
        //     //cout << "0" << endl;

        // }
        if (a < b)
        {
            swap(a, b);
        }
        while (a > b)
        {
            a-=c;
            b+=c;
            flag++;

            // if (a == b)
            // {
            //     break;
            // }
            // else if (a - b <= c)
            // {
            //     flag++;
            //     break;
            // }
            // else
            // {
            //     flag++;
            //     a = a - c;
            //     b = b + c;
            // }
        }
        cout << flag << endl;
    }
}
