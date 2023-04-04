#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, string_length = 0, string_length2 = 0;
    int a, count = 0;
    string s, b, temp, t2, e1, e2, result;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> s;
        string_length = s.length();
        /* for (int i = 0; i < a-1; i++)
         {
             temp[i]=s[i];
         }
         temp[a]=b;
         string_length2=temp.length();
         for (int i = string_length2+1; i < string_length; i++)
         {
             temp[i]=s[]
         }

         cout << temp.append()


 */
        for (int i = 0; i < a+1; i++)
        {
            /* code */

            temp = s.substr(0, i);
            t2 = s.substr(i, s.length());
            e2 = temp + b + t2;
            if (e2 > result)
            {
                result = e2;
            } 
        }
        cout << result;
        cout << endl;
        result.clear();
    }

    /*      e1 = s.substr(s.length() - a, s.length());
          e2 = s.substr(0, s.length() - a);
          cout << e1 << b << e2;

          cout << endl;
     */

    return 0;
}