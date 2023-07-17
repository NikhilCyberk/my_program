/*
https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&sortBy=submissions

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        // Your code here
        vector<int> m;
        long long i = 0, l = 0, sum = 0;
        while (i < n)
        {
            if (sum < s)
            {
                sum += arr[l];
                // cout <<"\n sun : "<<sum;
            }
            else
            {
                if (sum == s)
                {
                    m.push_back(i + 1);
                    m.push_back(l + 1);
                    return m;
                }
                else
                {
                    l++;
                    if (l == n)
                    {
                        i++;
                        l = i;
                        sum = 0;
                    }
                }
            }
        }
        m.push_back(-1);
        return m;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends