#include<bits/stdc++.h>
using namespace std;

class LinkedList{
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *head;
public:
    LinkedList()
    {
        head = NULL;
    }
    void insertElement(int x)
    {
        Node *newnode = new Node(x);
    if(head==NULL)
    {
        head = newnode;
    }
    Node *anothernode = new Node(x+x);
    newnode->next = anothernode;
    Node *thirdnode = new Node(x*x);
    anothernode->next = thirdnode;
    Node *current = head;
    while(current!=NULL)
    {
    cout<<current->data<<" ";
    current = current->next;}
    }
};

int main()
{
    int x;
    cout<<"\nEnter the value of x:=";
    cin>>x;
    LinkedList ll = LinkedList();
    ll.insertElement(x);
    
}