/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, sum1 = 0, sum2 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = n - 1; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            sum1 += a[i];
        }
        else
        {
            sum2 += a[i];
        }
        cout << a[i] << " ";
    }
    if (sum1 > sum2)
    {
        cout << "\n"
             << sum1 << " " << sum2;
    }
    else
    {
        cout << "\n"
             << sum2 << " " << sum1;
    }
}



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> cards(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    int sereja = 0, dima = 0;
    int left = 0, right = n - 1;
    bool serejas_turn = true;

    while (left <= right)
    {
        int card;
        if (cards[left] > cards[right])
        {
            card = cards[left];
            left++;
        }
        else
        {
            card = cards[right];
            right--;
        }

        if (serejas_turn)
        {
            sereja += card;
        }
        else
        {
            dima += card;
        }

        serejas_turn = !serejas_turn;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}
*/
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int cards[n];
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }
    int sereja = 0, dima = 0;
    int left = 0, right = n - 1;
    bool serejaTurn = true;
    while (left <= right)
    {
        if (cards[left] > cards[right])
        {
            if (serejaTurn)
            {
                sereja += cards[left];
            }
            else
            {
                dima += cards[left];
            }
            left++;
        }
        else
        {
            if (serejaTurn)
            {
                sereja += cards[right];
            }
            else
            {
                dima += cards[right];
            }
            right--;
        }
        serejaTurn = !serejaTurn;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}
