#include <bits/stdc++.h>
using namespace std; /*
 vector funct(){

     vector<int>v;
     return v;
 }
 */

int main()
{

    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(4);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }

    for (int x : vec)
    {
        cout << x << endl;
    }

    // traversing using iterator

    vector<int>::iterator itr;
    for (itr = vec.begin(); itr != vec.end(); itr++)
    {
        cout << *itr << endl;
    }
    // alternative
    // uisng auto keyword
    for (auto itr2 = vec.begin(); itr2 != vec.end(); itr2++)
    {
        cout << *itr2 << endl;
    }

    // Initializing Vector using an Array

    int arr[] = {10, 20, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ar(arr, arr + n);

    for (auto itr3 = ar.begin(); itr3 < ar.end(); itr3++)
    {
        cout << *itr3 << endl;
    }

    // display capacity of emplty vector

    vector<int> ve;
    cout << "\nve.capacity :" << ve.capacity() << endl;
    cout << "\nvec.capacity :" << vec.capacity() << endl;
    cout << "\nar.capacity :" << ar.capacity() << endl;

    vec.push_back(2);
    cout << "\nvec.capacity :" << vec.capacity() << endl;

    return 0;
}