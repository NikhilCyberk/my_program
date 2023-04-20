#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100
class Stack
{
private:
    int top;
    int data[MAX_SIZE];

public:
    Stack()
    {
        top = -1;
    }
    bool is_empty()
    {
        return top == -1;
    }
    bool is_Full()
    {
        return top == MAX_SIZE - 1;
    }
    void push(int x)
    {
        if (is_Full())
        {
            cout << "stack is full";
        }
        else
            data[++top] = x;
    }
    void pop()
    {
        if (is_empty())
        {
            cout << "stack is empty";
        }
        else
        {
            top--;
        }
    }
    int peek()
    {
        if (is_empty())
        {
            cout << "stack is empty";
        }
        cout << data[top];
    }
};
int main()
{
    Stack s1;
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(9);
    s1.peek();
    s1.pop();
    s1.peek();
}