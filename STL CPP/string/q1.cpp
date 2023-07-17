/*https://practice.geeksforgeeks.org/problems/largest-odd-number-in-string/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-odd-number-in-string*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string maxOdd(string s)
    {
        // your code here

        long long mx = s.length();
        int x = 0;
        string t, tmp;
        for (int i = mx - 1; i >= 0; i--)
        {
            tmp = s[i];
            x = stoi(tmp);
            // cout << "\n x: " << x;
            tmp.clear();
            if (x % 2 != 0)
            {
                //      cout << "\nin ";
                return s;
            }
            else
            {
                s.pop_back();
            }
        }
        return "";
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

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends