/**
 * This function takes an input matrix, finds all the zeros in it, and sets the corresponding rows and
 * columns to zero, then outputs the modified matrix.
 * 
 * @return The program returns 0, which is the exit status of the main function.
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));

    // Input the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    vector<int> r, c;

    // Find zeros and store their indices
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 0)
            {
                r.push_back(i);
                c.push_back(j);
            }
        }
    }

    // Set rows to zero
    for (int i : r)
    {
        cout <<"\n i = " << i ;
        for (int j = 0; j < m; j++)
        {
            v[i][j] = 0;
        }
    }

    // Set columns to zero
    for (int j : c)
    {
        cout <<"\n j = " << j ;
        for (int i = 0; i < n; i++)
        {
            v[i][j] = 0;
        }
    }
cout << endl;
    // Print the modified matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
