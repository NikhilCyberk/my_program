//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void missingNumber(int a[], int n);

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int i = 0, n;
        cin >> n;
        int a[n + 5];
        for (i = 0; i < n - 1; i++)
            cin >> a[i];

        missingNumber(a, n);
        ;
    }
}
// } Driver Code Ends

void missingNumber(int A[], int N)
{
    // Your code goes here

    sort(A, A + N);
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << "-";
    }
    cout << endl;

    for (int i = 0; i < N; i++)
    {
        if (A[i] != (i + 1))
        {
            cout << i + 1;
            break;
        }
        // a++;
    }
}