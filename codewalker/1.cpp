#include <iostream>
#include <cstring>

using namespace std;

const int N = 105;

int n, m, t;
int mat[N][N];

int count_good_cells()
{
    int count = 0;
    int prev_xor = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int cur_xor = 0;
            for (int k = 0; k < n; k++)
            {
                cur_xor ^= mat[k][j];
            }
            for (int k = 0; k < m; k++)
            {
                cur_xor ^= mat[i][k];
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
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> t;

    while (t--)
    {
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }

        cout << count_good_cells() << "\n";

        // reset the matrix
        memset(mat, 0, sizeof(mat));
    }

    return 0;
}
