#include <iostream>
using namespace std;
int main()
{
    int n, f, w, h, flag;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w >> h >> f;
        if (w % 2 != 0 && h % 2 != 0)
        {
            if (f == 1)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        else if (w % 2 == 0 && h % 2 != 0)
        {
            int a = w, count = 1;
            while (a % 2 == 0)
            {
                a = a / 2;
                count = count * 2;
            }
            if (count >= f)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        else if (w % 2 != 0 && h % 2 == 0)
        {
            int a = h, count = 1;
            while (a % 2 == 0)
            {
                a = a / 2;
                count = count * 2;
            }
            if (count >= f)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        else if (w % 2 == 0 && h % 2 == 0)
        {
            int a = w, b = h, count_1 = 1, count_2 = 1;
            while (a % 2 == 0)
            {
                a = a / 2;
                count_1 = count_1 * 2;
            }
            while (b % 2 == 0)
            {
                b = b / 2;
                count_2 = count_2 * 2;
            }
            if (count_1 * count_2 >= f)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
        return 0;
    
}