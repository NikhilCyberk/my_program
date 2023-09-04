//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];

        for (int i = 0; i < N; i++)
            cin >> A[i];

        Solution ob;
        cout << ob.findMin(A, N) << "\n";
    }
    return 0;
}

// } Driver Code Ends