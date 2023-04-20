#include <bits/stdc++.h>
using namespace std;
class InStack
{
private:
    int top;
    int *p;
    int capacity;

public:
    // default const
    InStack()
    {
        capacity = 10;
        p = new int[capacity];
        top = -1;
    }
    // paramerize const
    InStack(int size)
    {
        capacity = size;
        p = new int[capacity];
        top = -1;
    }
    // copy const
    InStack(const InStack &obj)
    {
        capacity = obj.capacity;
        p = new int[capacity];
        top = obj.top;
        for (int i = 0; i < top; i++)
        {
            p[i] = obj.p[i];
        }
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "stack empty :(";
            return 0;
        }
        cout << "element popped : " << p[top];
        top--;
    }
    void push(int val)
    {
        if (top == capacity - 1)
        {
            cout << "stack full :(";
            return;
        }
        top++;
        cout << "element pushed : " << p[top];
    }
};

int main()
{
    InStack s1;
    s1.push(9);
    s1.push(9);
    s1.push(9);
    s1.push(9);
    s1.push(9);
    s1.push(9);
    s1.push(9);
}