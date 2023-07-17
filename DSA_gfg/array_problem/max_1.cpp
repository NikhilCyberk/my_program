#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n, c_one = 0, m_count = 0;
    cin >> n;
    while (n > 0)
    {
        cout << "\n n%2 : " << n % 2;
        if (n % 2 == 1)
        {
            cout << "\n c_one :" << ++c_one;
            if (c_one > m_count)
            {
                m_count = c_one;
            }
        }
        else
        {
            c_one = 0;
        }
        n = n / 2;
        cout << "\n n:" << n;
    }
    cout << m_count;
    return 0;
}

/*
void decimalToBinary(int decimal)
{
    if (decimal == 0)
    {
        cout << "Binary: 0" << endl;
        return;
    }

    int binary[32];
    int index = 0;

    while (decimal > 0)
    {
        binary[index] = decimal % 2;
        decimal = decimal / 2;
        index++;
    }

    cout << "Binary: ";
    for (int i = index - 1; i >= 0; i--)
    {
        cout << binary[i];
    }
    cout << endl;
}

int main()
{
    int decimal;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    decimalToBinary(decimal);

    return 0;
}
*/