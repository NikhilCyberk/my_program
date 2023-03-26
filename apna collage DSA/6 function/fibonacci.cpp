#include <iostream>
using namespace std;
void fibo(int x)
{
    int t1 = 0;
    int t2 = 1;
    int next;
    for (int i = 0; i < x; i++)
    {
        cout << t1 << " ";
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
}

int main()
{
    int n, re = 0, rm;
    cin >> n;
    fibo(n);
}
