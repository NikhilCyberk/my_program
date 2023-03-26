#include <bits/stdc++.h>  
using namespace std;
 
struct node{  
    int data;  
    struct node *next;  
};      
 
 
struct node *head, *tail = NULL;  
 
 
void addNode(int data) {  
 
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
 
 
    if(head == NULL) {  
 
        head = newNode;  
        tail = newNode;  
    }  
    else {  
 
        tail->next = newNode;  
 
        tail = newNode;  
    }  
}  
 
 
void display() {  
 
    struct node *current = head;  
 
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Nodes of singly linked list: \n");  
    while(current != NULL) {  
 
 
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  
 
int main()  
{  
    int ch,num;
 
 
    while(1)
    {
        cout<<"\n** 1 to Insertion ";
        cout<<"\n** 2 to Display";
        cout<<"\n** Any other key to Exit\n";
 
 
    cin>>ch;
    if(ch==1)
    {
        cout<<"Enter number:  ";
         cin>>num;
        addNode(num);
    }
    else if(ch==2)
    {
 
        display();
    }
    else 
    {
        cout<<"exited";
        exit(0);
    }
 
    }
 
 
    return 0;  
}  