#include <bits/stdc++.h>
using namespace std;
void naive_sol_left_rotate_array_by_one(int arr[], int n)
{
    int temp=arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    


    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void effi_sol_move_all_array_to_end(int arr[], int n)
{
}

int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        // cout << "enter sorted array : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        naive_sol_left_rotate_array_by_one(arr, n);
        cout << '\n';
        // effi_sol_move_all_array_to_end(arr, n);
        // cout << '\n';
    }
}