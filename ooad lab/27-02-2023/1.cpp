#include<iostream>


using namespace std;

class LinkedList{
struct Node
{
    int data;
    Node *next;
    Node(int n)
    {
        data = n;
        next = NULL;
    }
};

Node *head,*tail;
public:
LinkedList()
{
    head = tail = NULL;
}

void insertNode(int temp)
{
    Node *newnode = new Node(temp);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = tail ->next;
        }

}
void display()
{
    Node *current = head;
    while(current)
    {
        cout<<current->data<<" ";
        current = current->next;
    }
}

};

int main()
{
    int n;
    cin>>n;
    LinkedList l;
    while(n--)
    {
        cout<<"\nEnter the value of node:=";
        int temp;
        cin>>temp;
        l.insertNode(temp);
        
    }
    l.display();
    
    return 0;
}