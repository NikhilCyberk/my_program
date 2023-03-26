#include <iostream>
using namespace std;
void print(int c)
{
    cout << c << endl;
}

int add(int a, int b)
{
    print(a);
    print(b);
    return a + b;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << add(n, m);
}