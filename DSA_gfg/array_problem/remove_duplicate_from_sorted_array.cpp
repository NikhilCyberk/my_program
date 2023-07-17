#include <bits/stdc++.h>
using namespace std;
int remove_dup_in_sorted_array(int arr[], int n)
{

    int t_count = 0;
    //temp[0] = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[t_count] = arr[i];
            t_count++;
        }
    }
    for (int i = 0; i < t_count; i++)
    {
        cout << arr[i] << " ";
    }
    

    return t_count;
}

int main()
{
    int n, t;
    cin >> n;
    int arr[n];
    // cout << "enter sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << remove_dup_in_sorted_array(arr,n);


}