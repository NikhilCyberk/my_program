#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long sum_red = 0, sum_blue = 0, count_blue = 0, count_red = 0;
    int main_loop, input_loop, flag = 0;
    cin >> main_loop;
    for (int i = 0; i < main_loop; i++)
    {
        cin >> input_loop;
        int array[input_loop];
        // input
        for (int j = 0; j < input_loop; j++)
        {
            cin >> array[j];
        }
        sort(array, array + input_loop); // sort in asc order

        sum_blue = array[0] + array[1];
        sum_red = array[input_loop - 1];
        int begin = 2;
        int last = input_loop - 2;
        while (begin <= last)
        {
            sum_blue += array[begin];
            sum_red += array[last];
            begin++;
            last--;
        }
        if (sum_red > sum_blue)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
    return 0;
}
