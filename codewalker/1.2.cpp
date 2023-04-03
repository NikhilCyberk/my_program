#include <iostream>
#include <vector>
using namespace std;

int count_good_cells(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int count = 0;
    int prev_xor = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int cur_xor = 0;
            for (int k = 0; k < n; k++)
            {
                cur_xor ^= matrix[k][j];
            }
            for (int k = 0; k < m; k++)
            {
                cur_xor ^= matrix[i][k];
            }

            if (prev_xor == -1 || prev_xor == cur_xor)
            {
                count++;
                prev_xor = cur_xor;
            }
        }
    }

    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }
        cout << count_good_cells(matrix) << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
int goodCells(vector<vector<int>> &v)
{
    // Write your code here
    int n = v.size();
    int m = v[0].size();
    int count, curxor, prexor = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            curxor = 0;
            for (int k = 0; k < n; k++)
            {
                curxor ^= v[k][j];
            }
            for (int k = 0; k < m; k++)
            {
                curxor ^= v[i][k];
            }
            if (prexor == curxor)
            {
                count++;
                prexor = curxor;
            }
        }
    }
    return count;
}