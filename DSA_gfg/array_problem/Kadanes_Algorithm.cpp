//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
        long long n_sum = arr[0], p_sum = arr[0], n_flag = 0, t, temp = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            n_flag = p_sum + arr[i];
            t = arr[i];
            p_sum = max(t, n_flag);

            n_sum = max(p_sum, n_sum);
        }
        return n_sum;

        // Your code here
    }
};

//{ Driver Code Starts.

int main()
{
    int t, n;

    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {

        cin >> n; // input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; // inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends