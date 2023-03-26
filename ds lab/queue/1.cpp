#include <iostream>
#define SIZE 5
using namespace std;
class Queue
{
private:
    int items[SIZE], front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }
    bool isFull()
    {
        if (front == 0 && rear == SIZE - 1)
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
    void enQueue(int element)
    {
        if (isFull())
        {
            cout << "Queue Full !!!";
        }
        else
        {
            if (front == -1)
                front = 0;
            rear++;
            items[rear] = element;
            cout << "Inserted " << element << " \n";
        }
    }
    int deQueue()
    {
        int element;
        if (isEmpty())
        {
            cout << "Queue Empty!!!\n";
            return (-1);
        }
        else
        {
            element = items[front];
            if (front >= rear)
            {
                front = rear = -1;
            }
            else
            {
                front++;
            }
            cout << endl
                 << "\nDeleted -> " << element << endl;
            return (element);
        }
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue Emplty!!!";
        }
        else
        {
            cout << "\nFront-> " << front;
            cout << "\nitem-> ";
            for (int i = front; i <= rear; i++)
            {
                cout << items[i] << " ";
            }
            cout << "\n rear ->" <<rear << endl;
        }
    }
};
int main()
{
    Queue q;
    q.deQueue();

    q.enQueue(1);
    q.enQueue(12);
    q.enQueue(4);
    q.enQueue(6);
    q.enQueue(18);
    q.display();
    q.deQueue();
    q.display();
    
    q.deQueue();
    q.display();
    
    q.deQueue();
    q.display();
}