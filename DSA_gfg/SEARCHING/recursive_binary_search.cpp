#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int low, int high,int x)
{
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            return binary_search(arr,0,mid-1,x);
        }
        else if (arr[mid] < x)
        {
            return binary_search(arr,mid+1,high,x);
        }
    return -1;
}

int main()
{
    int arr[5] = {12, 14, 15, 16, 20};
    cout << binary_search(arr,0,5,15);
}