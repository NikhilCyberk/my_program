//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    void leftRotate(int arr[], int k, int n)
    {
        int temp[k],count=0;
        for (int i = 0; i < n; i++)
        {
            if (i < k)
            {
                temp[i] = arr[i];
                cout << "temp : "<<temp[i] <<'\n';
            }
            else if (i >= k)
            {
                arr[i - k] = arr[i];
                cout << "arr : "<<arr[i] <<'\n';
            }
        }
        for (int i = n-k; i < n; i++)
        {

            arr[i] = temp[count];
            count++;
            cout << i <<" arr 1 : " << arr[i] << '\n';
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        // Your code goes here
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
        int k;
        cin >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // um[a[i]]++;
        }

        Solution ob;
        ob.leftRotate(a, k, n);
        /*

           cout << "\n";
          */
    }
    return 0;
}

// } Driver Code Ends