#include <bits/stdc++.h>
using namespace std;
int pattern(int no_of_line = 5, int difference = 1)
{
    int value = 1;
    for (int i = 1; i <= no_of_line; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (value > 9)
            {
                value = 1;
            }
            cout << value << " ";
            value = value + difference;
        }
        cout << endl;
    }
}
int main()
{
    int a, b;
    cout << "enter number of line :";
    cin >> a;
    cout << "enter difference:";
    cin >> b;
    pattern(a, b);
    return 0;
}