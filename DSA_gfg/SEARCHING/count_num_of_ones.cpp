#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            int t = n - mid;
            return t;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {0, 0, 1, 1, 1};
    cout << binary_search(arr, 5, 1);
}