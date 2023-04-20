#include <bits/stdc++.h>
using namespace std;
#define MAX_S 10
class Stack1
{
public:
    int value[MAX_S];
    int top;
    Stack1()
    {
        top = -1;
    }
    bool isFull()
    {
        if (top == MAX_S - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void push(int x)
    {
        if (isFull())
        {
            cout << "stack overflow";
        }
        else
        {
            value[++top] = x;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "stack underflow";
        }
        else
        {
            top--;
            // cout << value[top + 1];
        }
    }
    void peek()
    {
        cout << value[top];
    }
};
int main()
{
    Stack1 s1;
    s1.push(1); 
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.peek();
    s1.pop();
    s1.peek();\
    s1.peek();
}