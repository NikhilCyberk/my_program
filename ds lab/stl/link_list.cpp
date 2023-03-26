#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x){
        data =x;
        next =NULL;
    }
};
Node *head=NULL;
void insertElement(int x){
    Node *newnode = new Node(x);
    if(head==NULL){
        head = newnode;
    }
    else{
        Node *n= new Node(x+x);
        newnode->next = n;
    }
}
void display(){
    
}
int main(){
    int m;
    cout << "enter an element :" ;
    cin >> m;
    insertElement(m);
}