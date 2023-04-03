#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Queue
{
private:
    vector<T> v;

public:
    void enqueue(T element)
    {
        v.push_back(element);
    }

    void dequeue()
    {
        v.erase(v.begin());
    }

    T front()
    {
        return v.front();
    }

    bool isEmpty()
    {
        return v.empty();
    }

    int size()
    {
        return v.size();
    }
};

int main()
{
    Queue<int> q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout << "Queue size is " << q.size() << endl;

    while (!q.isEmpty())
    {
        cout << q.front() << " ";
        q.dequeue();
    }

    return 0;
}
