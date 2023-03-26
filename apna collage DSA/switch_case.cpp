#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout << "1 language";
        break;
    case 'b':
        cout << "2 language";
        break;
    case 'c':
        cout << "3 language";
        break;
    case 'd':
        cout << "4 language";
        break;
    case 'e':
        cout << "5 language";
        break;
    default:
        cout << "no language found";
        break;
    }
    return 0;
}