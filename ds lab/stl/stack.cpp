#include <iostream>
using namespace std;
#define MAX 10
int size = 0;
struct stack
{
    int item[MAX];
    int top;
};
typedef struct stack st;

void creatEmptyStack(st *s)
{
    s->top = -1;
}
// check if the stack is full
int isFull(st *s)
{
    if (s->top == MAX - 1)
    {
        // cout << "stack Full!!";
        return 1;
    }
    else
    {
        return 0;
    }
}
// check if the  stack if emty
int isEmpty(st *s)
{
    if (s->top == -1)
    {
        // cout << "stack Empty!!!";
        return 1;
    }
    else
    {
        return 0;
    }
}
// add element to stack
void push(st *s, int x)
{
    if (isFull(s))
    {
        cout << "STACK IS FULL !!!";
    }
    else
    {
        s->top++;
        s->item[s->top] = x;
    }
    size++;
}
void pop(st *s)
{
    if (isEmpty(s))
    {
        cout << "STACK IS EMPTY!!";
    }
    else
    {
        cout << "intem popped: " << s->item[s->top];
        s->top--;
    }
    size--;
    cout << "\n";
}
// print the stack
void printStack(st *s)
{
    cout << "Stack : ";
    for (int i = 0; i < size; i++)
    {
        cout << s->item[i] << " ";
    }
    cout << endl;
}
int main()
{
    int ch;
    st *s = (st *)malloc(sizeof(st));
    creatEmptyStack(s);
    push(s, 9);
    push(s, 5);
    push(s, 7);
    push(s, 3);
    push(s, 8);
    printStack(s);
    pop(s);
    cout << "\n after popped";
    printStack(s);
}
