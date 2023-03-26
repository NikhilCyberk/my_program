#include<iostream>
using namespace std;

class dll{
    struct Node
    {
        int data;
        Node *next;
        Node *previous;
        Node(int x)
        {
            data = x;
            next = previous = NULL;
        }
    };
    Node *head,*tail;
    public:
    dll()
    {
        head = tail = NULL;
    }
    void insertFront(int x)
    {
        Node *newnode = new Node(x);
        if(head = NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next  = head;
            head->previous = newnode;
            head = head->previous;
        }
    }
    void insertEnd(int x)
    {
        Node *newnode = new Node(x);
        if(head == NULL)
        {
            head = tail = NULL;
        }
        else
        {
            newnode->previous = tail;
            tail->next  = newnode;
            tail  = newnode;
        }
    }
    void deleteFront()
    {
        if(head == NULL)
        {
            cout<<"\nList empty";
            return;
        }
        else
        {
            Node *current  = head;
            head = head->next;
            cout<<"\nElement deleted:="<<current->data;
            head->previous = NULL;
            free(current);
        }

    }
  void deleteEnd()
    {
        if(head == NULL)
        {
            cout<<"\nList empty";
            return;
        }
        else
        {
            Node *current  = tail;
            tail = tail->previous;
            cout<<"\nElement deleted:="<<current->data;
            tail->next = NULL;
            free(current);
        }

    }
    void displayFront()
    {
        if(head == NULL)
        {
            cout<<"\nList is empty!!";
        }
        else
        {
            Node *current = head;
            while(current)
            {
                cout<<current->data<<" ";
                current  = current->next;
            }

        }
    }
 void displayEnd()
    {
        if(head == NULL)
        {
            cout<<"\nList is empty!!";
        }
        else
        {
            Node *current = tail;
            while(current)
            {
                cout<<current->data<<" ";
                current  = current->previous;
            }

        }
    }
       
};

int main()
{
    dll ob;
    int ch;
    do
    {
        cout<<"\n1. Insert front";
        cout<<"\n2. Insert End ";
        cout<<"\n3. Delete Front ";
        cout<<"\n4. Delete End ";
        cout<<"\n5. Display front ";
        cout<<"\n6. Display end";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\nEnter the element:=";
            int x;
            cin>>x;
            ob.insertFront(x);
        }
        else if(ch==2)
        {
            cout<<"\nEnter the element:=";
            int x;
            cin>>x;
            ob.insertEnd(x);
        }
        else if(ch==3)
        {
            ob.deleteFront();
        }

        else if(ch==4)
        {
            ob.deleteEnd();
        }
        else if(ch == 5)
        {
            ob.displayFront();
        }
        else if(ch==6)
        {
            ob.displayEnd();
        }

    } while (ch<=6);
    return 0;
}