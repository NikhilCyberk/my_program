// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[11] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int b[6] = {1, 4, 3, 2, 6, 7};
    int i = 0, count = 0;


    int minJumps(int arr[], int n){
    if (arr[0] == 0)
    {
        return -1;
    }
    while (i <= n)
    {
        if (arr[i] == 0)
        {
            return -1;
        }
        i = a[i] + i;
        count++;
    }
    return cout;
}