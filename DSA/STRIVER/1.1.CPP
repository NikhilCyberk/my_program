//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int dataTypeSize(string str)
    {
        string C, I, L;
        C = "Character";
        I = "Integer";
        L = "Long";
        // Float and Double
        if (str == C)
        {
            return 1;
        }
        else if (str == I)
        {
            return 4;
        }
        else
        {
            return 8;
        }

        // your code here
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends