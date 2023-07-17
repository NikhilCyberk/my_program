#include <bits/stdc++.h>
using namespace std;
int sq_root_by_B_Search(int x)
{
    int low = 1, high = x, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int sq = mid * mid;

        if (sq == x)
        {
            return mid;
        }
        else if (sq > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    cout << sq_root_by_B_Search(10);
}