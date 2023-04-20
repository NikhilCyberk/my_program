#include <bits/stdc++.h>
#define SIZE 5
using namespace std;
class Queue
{
    int item[SIZE];
    int front;
    int rear;

public:
    Queue()
    {
        front = rear = -1;
    }
    bool isFull()
    {
        if (front == 0 && rear == (SIZE - 1))
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
        if (front == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void enQueue(int x)
    {
        if (isFull())
        {
            cout << "q f" << '\n';
            return;
        }
        else
        {
            if (front == -1)
            {
                front = 0;rear=0;
            }
            else if (front == SIZE)
            {
                if (rear != 0)
                {
                    front = -1;
                }
            }
            else if (rear == SIZE)
            {
                if (front != 0)
                {
                    rear = -1;
                }
            }
            rear++;
            item[rear] = x;
        }
    }
    void deQueue()
    {
        if (isEmpty())
        {
            cout << "q e" << '\n';
        }
        else
        {
            if (front >= rear - 1)
            {
                front = rear = -1;
            }
            else
            {
                front++;
            }
        }
    }
    void Display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << item[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Queue q1;
    q1.enQueue(1);
    q1.enQueue(2);
    q1.enQueue(13);
    q1.enQueue(15);
    q1.enQueue(17);
    q1.Display();
    q1.deQueue();
    q1.deQueue();
    q1.enQueue(1);
    q1.enQueue(2);
    q1.Display();
}