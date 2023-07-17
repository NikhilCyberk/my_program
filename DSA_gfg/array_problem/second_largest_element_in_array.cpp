//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
        // code here
        int lr = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > lr)
            {
                lr = arr[i];
            }
        }
     //   cout << "lar : " << lr << '\n';
        int srlr = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != lr)
            {
                if (srlr == -1)
                {
                //    cout << "if -1 : " << i << '\n';
                    srlr = arr[i];
                }
                else if (arr[i] > srlr)
                {
                  //  cout << arr[srlr] << " > " << arr[i] << '\n';
                    srlr = arr[i];
                }
            }
        }
         return srlr;
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
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        //ob.print2largest(arr, n);
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends