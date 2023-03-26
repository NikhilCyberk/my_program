/*#include <stack>

class MyQueue {
private:
    std::stack<int> inStack;
    std::stack<int> outStack;

    void transferStacks() {
        while (!inStack.empty()) {
            outStack.push(inStack.top());
            inStack.pop();
        }
    }

public:
    void push(int x) {
        inStack.push(x);
    }

    int pop() {
        if (outStack.empty()) {
            transferStacks();
        }

        int x = outStack.top();
        outStack.pop();
        return x;
    }

    int peek() {
        if (outStack.empty()) {
            transferStacks();
        }

        return outStack.top();
    }

    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};*/
////////////////////////////

#include <bits/stdc++.h>

class MyQueue
{
private:
    int *inStack;
    int *outStack;
    int inTop;
    int outTop;
    int capacity;

    void transferStacks()
    {
        while (inTop >= 0)
        {
            outStack[++outTop] = inStack[inTop--];
        }
    }

public:
    MyQueue(int cap)
    {
        inStack = new int[cap];
        outStack = new int[cap];
        inTop = -1;
        outTop = -1;
        capacity = cap;
    }

    void push(int x)
    {
        if (inTop == capacity - 1)
        {
            transferStacks();
        }

        inStack[++inTop] = x;
    }

    int pop()
    {
        if (outTop == -1)
        {
            transferStacks();
        }

        int x = outStack[outTop--];
        return x;
    }

    int peek()
    {
        if (outTop == -1)
        {
            transferStacks();
        }

        int x = outStack[outTop];
        return x;
    }

    bool empty()
    {
        return inTop == -1 && outTop == -1;
    }

    ~MyQueue()
    {
        delete[] inStack;
        delete[] outStack;
    }
};
