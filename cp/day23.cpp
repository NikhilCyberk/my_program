
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int k, c = 0;
    string s;
    cin >> k >> s;
    unordered_map<char, int> freq;
    for (char ch : s)
    {
        freq[ch]++;
        if (freq[ch] == 1)
        {
            c++;
        }
    }

    if (c >= k)
    {
        cout << "YES" << endl;

        int p = 0;
        for (char ch : s)
        {
            if (freq[ch] > 0 && p < k)
            {
                cout << endl
                     << ch;
                freq[ch] = 0;
                p++;
            }
            else
            {
                cout << ch;
            }
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
