/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a[5] = {1, 2, 4, 5, 7};
    // int b[5] = {3, 4, 5, 6, 8};
    int a[6] = {-1, -2, 4, -6, 5, 7};
    int b[4] = {6, 3, 4, 0};
    int low = 0, high = 3, x = 8, count = 0;
    vector<pair<int, int>> p;
    for (int i = 0; i < 6; i++)
    {
        int want = x - a[i];
        // cout << "\n --want " << want;
        // cout << "\n low " << low;
        // cout << "\n high " << high;
        low = 0;
        high = 3;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            // cout << "\n mid " << mid;
            if (b[mid] == want)
            {
                p.push_back(make_pair(a[i], b[mid]));

                //                cout << "\n * first " << p[count].first;
                // p[count].second = b[mid];
                //              cout << "\n * second " << p[count].second;
                count++;
                //            cout << "\n count " << count;
                break;
            }
            else if (b[mid] > want)
            {
                high = mid - 1;
                //          cout << "\n high " << high;
            }
            else if (b[mid] < want)
            {
                low = mid + 1;
                //        cout << "\n low " << low;
            }
            else
            {
                break;
            }
        }
    }
    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i].first << " " << p[i].second << '\n';
    }
    return 0;
}
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here
        sort(A, A + N);
        sort(B, B + M);
        vector<pair<int, int>> p;
        int low = 0, high = M;

        for (int i = 0; i < N; i++)
        {
            int want = X - A[i];
            low = 0;
            high = M;

            while (low <= high)
            {
                int mid = (low + high) / 2;
                if (B[mid] == want)
                {
                    p.push_back(make_pair(A[i], B[mid]));
                    break;
                }
                else if (B[mid] > want)
                {
                    high = mid - 1;
                }
                else if (B[mid] < want)
                {
                    low = mid + 1;
                }
                else
                {
                    break;
                }
            }
        }
        return p;
    }
};

//{ Driver Code Starts.
int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        int N, M, X;
        cin >> N >> M >> X;
        int A[N], B[M];

        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < M; i++)
            cin >> B[i];

        Solution ob;
        vector<pair<int, int>> vp = ob.allPairs(A, B, N, M, X);
        int sz = vp.size();
        if (sz == 0)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < sz; i++)
            {
                if (i == 0)
                    cout << vp[i].first << " " << vp[i].second;
                else
                    cout << ", " << vp[i].first << " " << vp[i].second;
            }
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends