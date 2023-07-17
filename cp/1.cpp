//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        // Your code here
        int last = n - 1, jump = 0, value = 0;
        int i = 0;
        for (int i = 1; i <= n - 1; i++)
        {
            if (arr[i] == 0 || i == last)
            {
                return value;
            }
            if (i == jump)
            {
                value++;
                jump += arr[i];
            }
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends