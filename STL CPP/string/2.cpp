/*
https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=roman-number-to-integer
*/

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int romanToDecimal(string &str)
    {
        // code here

        unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};

        int n = 0, p_value = 0;
        for (int i = str.size(); i >= 0; i--)
        {
            int c_value = romanValues[str[i]];
            if (c_value >= p_value)
            {
                n += c_value;
            }
            else
            {
                n -= c_value;
            }
            p_value = c_value;
        }
        return n;
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
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends