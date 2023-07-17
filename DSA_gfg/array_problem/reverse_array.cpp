#include <bits/stdc++.h>
using namespace std;
void naive_sol_reverse_an_array(int arr[], int n)
{
    int low = 0, high = n - 1, a, b;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }

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
        naive_sol_reverse_an_array(arr, n);
        cout << '\n';
        //effi_sol_move_all_array_to_end(arr, n);
        //cout << '\n';
    }
}