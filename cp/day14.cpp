#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k = n;
        while (k & (k - 1))
        {
            k &= k - 1; // Clear the least significant bit of k
        }
        cout << k - 1 << endl; // Output k - 1 as the answer
    }
    return 0;
}
