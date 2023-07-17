#include <bits/stdc++.h>
using namespace std;
int main()
{

    pair<int, int> p;
    p.first = 1;
    p.second = 2;
    cout << "p.first : " << p.first;
    cout << "\np.second : " << p.second;

    pair<int, int> g1;          // default
    pair<int, char> g2(1, 'a'); // initialized,  different data type
    pair<int, int> g3(1, 10);   // initialized,  same data type
    pair<int, int> g4(g3);      // copy of g3

    cout << "\n g1.first " << g1.first << " g1.second : " << g1.second;
    cout << "\n g2.first " << g2.first << " g2.second : " << g2.second;
    cout << "\n g3.first " << g3.first << " g3.second : " << g3.second;
    cout << "\n g4.first " << g4.first << " g4.second : " << g4.second;

    g1 = make_pair(11, 55);
    cout << "\n g1.first " << g1.first << " g1.second : " << g1.second;
    cout << endl;
    // operators(=, ==, !=, >=, <=)
    pair<int, int> pair1 = make_pair(1, 2);
    pair<int, int> pair2 = make_pair(3, 4);

    cout << (pair1 == pair2) << endl;
    cout << (pair1 != pair2) << endl;
    cout << (pair1 >= pair2) << endl;
    cout << (pair1 <= pair2) << endl;
    cout << (pair1 > pair2) << endl;
    cout << (pair1 < pair2) << endl;

    // pair.swap(pair2)
    cout << endl;
    pair1.swap(pair2);
    cout << "\n ********* swap ***********\n";
    cout << "\n pair1.first : " << pair1.first << " pair1.second :" << pair1.second;
    cout << "\n pair2.first : " << pair2.first << " pair2.second :" << pair2.second;

    /*
    Problem: Given two arrays a[] and b[] of equal size. The task is to
    sort the array b[] according to the elements of array a[]. That is,
    elements of the array b[] should be rearranged by following the
    corresponding elements of array a[] as appeared in sorted order.
    */
    int a[] = {2, 1, 5, 4, 8, 3, 6, 7};
    int b[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    pair<int, char> c[8];
    sort(a, a + 8);
    for (int i = 0; i < 8; i++)
    {
        c[i].first = a[i];
        c[i].second = b[i];
    }
    for (int i = 0; i < 8; i++)
    {
        cout << "\n c[" << i << "].first : " << c[i].first << " |c[" << i << "].second : " << c[i].second;
    }

    return 0;
}