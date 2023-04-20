#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    int a[10], b[2][5], c[2][2][2];
    cout << "enter the element of ID array \n";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "Array elements : ";
    for (int i = 0; i < 10; i++)
    {
        cout << *(a + i) << " ";
    }
    int flag = 0, n;
    cout << "\n enter any element to search : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) == n)
        {
            flag = 1;
            row = i;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "\n element not found ";
    }
    else
    {
        cout << "\n element found once " << row;
    }
    cout << "enter the elementn of 20 array";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> *(*(b + i) + j);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << *(*(b + i) + j) << " ";
        }
    }
    flag = 0;
    cout << "\n enter the element to search in 2d array";
    cin >> n;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (*(*(b + i) + j) == n)
            {
                flag = 1;
                row = i;
                col = j;
                break;
            }
        }
    }
    if (flag == 1)
    {
        break;
    }
    else if (flag == 0)
    {
        cout << "element not found;";
    }
    else
    {
        cout << "element founf in " << row + 1 << "row and" << col + 1 << "column\n";
    }
}