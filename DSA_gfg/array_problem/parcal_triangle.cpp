#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, tem = 0;
    cin >> n;
    vector<vector<int>> a;
    vector<int> b;
    b.push_back(1);
    a.push_back(b);
    for (int i = 2; i < n; i++)
    {
        vector<int> temp(i, 1);
        for (int j = 1; j < i - 1; j++)
        {
            temp[j] = b[j] + b[j - 1];
        }
        a.push_back(temp);
        b = temp;
    }
    // Print the modified matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
vector<vector<long long int>> printPascal(int n)

{

    vector<vector<long long int>> ans;

    vector<long long int> prev;

    prev.push_back(1); // initialise the first row mannually

    ans.push_back(prev); // just store the first row into the ans

    for (int i = 2; i <= n; i++)
    {

        vector<long long int> temp(i, 1);

        // initialise every element with 1 so that you dont have to push 1 for the first and the last element

        for (int j = 1; j < i - 1; j++)
        {

            temp[j] = prev[j] + prev[j - 1];
        }

        ans.push_back(temp);

        prev = temp;
    }

    return ans;
}
*/