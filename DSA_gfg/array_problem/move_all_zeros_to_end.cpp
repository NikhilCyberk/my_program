#include <bits/stdc++.h>
using namespace std;
void naive_sol_move_all_array_to_end(int arr[], int n)
{

    int temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            // cout << "i : " <<i <<" ";
            temp = arr[i];
            for (int j = i + 1; j <= n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void effi_sol_move_all_array_to_end(int arr[], int n)
{

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
        naive_sol_move_all_array_to_end(arr, n);
        cout << '\n';
        effi_sol_move_all_array_to_end(arr, n);
        cout << '\n';
    }
}