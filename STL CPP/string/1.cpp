/*
https://practice.geeksforgeeks.org/problems/anagram-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=anagram
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {

        // Your code here

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        // int b=a.compare(b);
        if (b == a)
        {
            return 1;
        }
        else
        {
            return 0;
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
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.isAnagram(c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// } Driver Code Ends