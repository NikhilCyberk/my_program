#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    // first sort the array
    sort(a, a + 5);
    int t = binary_search(a, a + 5, 4); // it return bool value
    cout << t;

    return 0;
}