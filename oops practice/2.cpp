#include <bits/stdc++.h>
using namespace std;
struct product
{
    int product_id;
    int rating;
};
int main()
{
    cout << "enter the number of product :";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        struct product p1[i];
        cout << "enter product id : ";
        cin >> p1[i].product_id;
        cout << "enter rating : ";
        int rate;
        while (1)
        {

            cin >> rate;

            if (rate >= 1 && rate <= 5)
            {
                p1[i].rating = rate;
                break;
            }
            else
            {
                cout << "wrong rating input again";
            }
        }
    }
}