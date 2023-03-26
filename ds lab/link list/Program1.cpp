#include <bits/stdc++.h>

using namespace std;

class CircularLL
{
    struct Node
    {
        int data;
        Node *next;
        Node(int x)
        {
            data = x;
            next = NULL;
        }
    };
    Node *head, *tail;

public:
    CircularLL()
    {
        head = tail = NULL;
    }
    void insert(int x)
    {
        Node *newnode = new Node(x);
        if (head == NULL)
        {
            head = tail = newnode;
            newnode->next = head;
        }
        else
        {
            newnode->next = head;
            tail->next = newnode;
            tail = tail->next;
        }
    }
    void deleteElement()
    {
        if (head == NULL)
        {
            cout << "\nList empty!!";
            return;
        }
        else
        {
            cout << "\nElement Deleted : " << tail->data << endl;
            Node *curr = head;
            while (curr->next->next != head)
            {
                curr = curr->next;
            }
            curr->next = tail->next;
            free(tail);
            tail = curr;
        }
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "\nList empty!!";
            return;
        }
        cout << "\nElements are : ";
        Node *curr = head;
        cout << curr->data << " ";
        curr = curr->next;
        while (curr != head)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
    }
};

int main()
{
    int ch;
    CircularLL ob;
    while (true)
    {
        cout << "\n1.Insert Element : ";
        cout << "\n2.Delete Element : ";
        cout << "\n3.Print Element : ";
        cout << "\nEnter your choice : ";
        cin >> ch;
        if (ch == 1)
        {
            int x;
            cout << "\nEnter element : ";
            cin >> x;
            ob.insert(x);
        }
        else if (ch == 2)
        {
            ob.deleteElement();
        }
        else if (ch == 3)
        {
            ob.display();
        }
        else
            break;
    }
    return 0;
}