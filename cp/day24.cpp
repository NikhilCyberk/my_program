#include <bits/stdc++.h>
using namespace std;
int main()
{

#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);   // can need to change file . this one for taking input
    freopen("output.txt", "w", stdout); // this one for output
#endif

    // Your Code

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        int st = 0;
        int e = s.size() - 1;
        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == '1')
            {
                st = i;
            }
            else if (s[i] == '0')
            {
                e = i;
                break;
            }
        }
        cout << e - st + 1 << '\n';
    }
#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
#endif
    return 0;
}