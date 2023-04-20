#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int power_sum(vector<int> &arr, int n, int p)
{
    // Find mid index
    int mid = n / 2;

    // Rotate the array around the mid value
    reverse(arr.begin(), arr.begin() + mid);
    reverse(arr.begin() + mid, arr.end());
    reverse(arr.begin(), arr.end());

    // Find the new index of p
    auto it = find(arr.begin(), arr.end(), p);
    int new_index = distance(arr.begin(), it);

    // Find the old index of p
    int old_index;
    if (new_index < mid)
    {
        old_index = n - mid + new_index;
    }
    else
    {
        old_index = new_index - mid;
    }

    // Calculate power sum
    int power_sum = new_index + old_index * arr[new_index];

    return power_sum;
}

int main()
{
    int n, p;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> p;

    int result = power_sum(arr, n, p);
    cout << result << endl;

    return 0;
}
