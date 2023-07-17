/**
 * The function removes the outermost parentheses of a given string and returns the resulting string.
 */

/*
https://practice.geeksforgeeks.org/problems/outermost-parentheses/1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string removeOuter(string &s)
    {
        // code here
        string t;
        int count = 0;
        for (char x : s)
        {
            if (x == '(')
            {
                if (count > 0)
                {
                    t = t + x;
                }
                count++;
            }
            else if (x == ')')
            {
                count--;
                if (count > 0)
                {
                    t = t + x;
                }
            }
        }
        return t;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends