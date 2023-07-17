/*
https://practice.geeksforgeeks.org/problems/find-maximum-equal-sum-of-three-stacks/1
*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        vector<int> s1(n1), s2(n2), s3(n3);
        for (int i = 0; i < n1; i++)
        {
            cin >> s1[i];
        }
        for (int i = 0; i < n2; i++)
        {
            cin >> s2[i];
        }
        for (int i = 0; i < n3; i++)
        {
            cin >> s3[i];
        }
        int a = accumulate(s1.begin(), s1.end(), 0);
        int b = accumulate(s2.begin(), s2.end(), 0);
        int c = accumulate(s3.begin(), s3.end(), 0);

        cout << " \na : " << a << " b : " << b << " c : " << c << "\n";
        int sum = 0, i = 0, j = 0, k = 0;
        while (i < n1 && j < n2 && k < n3)
        {
            if (a == b && b == c)
            {
                cout << "\nf_sum : ";
                cout << sum << '\n';
                break;
            }
            sum = min(a, min(b, c));
            cout << "\n sum : " << sum;
            if (a > sum)
            {
                a -= s1[i];
                i++;
            }
            if (b > sum)
            {
                b -= s2[j];
                j++;
            }
            if (c > sum)
            {
                c -= s3[k];
                k++;
            }
        }
        sort()
    }

    return 0;
}
// } Driver Code Ends
