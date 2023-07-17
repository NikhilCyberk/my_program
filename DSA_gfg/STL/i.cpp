#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    auto i = v.begin();
    cout << (*i) << " \n";
    i++;
    cout << (*i) << " ";

    i = v.end(); //  this point to the next to the last element
    i--;
    cout << (*i) << " ";

    // next()
    cout << "\n **** next() **** \n";
    i = v.begin(); // it point to 10
    i = next(i);   // it move itretor to one step

    cout << (*i) << " ";
    cout << "\n **** prev() **** \n";
    i = prev(i);
    cout << "prev() : " << (*i) << " \n";

    // advanced
    /*
    advance(): This function is used to increment the iterator position
    until the specified number mentioned in its arguments is met.
    It simply modifies the existing value of the iterator with the given value.
    */
    cout << "\n **** advance() **** \n";
    advance(i, 2);
    cout << "advance() : " << (*i) << " \n";

    return 0;
}