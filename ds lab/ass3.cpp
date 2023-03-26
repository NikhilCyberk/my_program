//question 1:
//-------------------------

/*
#include <stdio.h>
#include <stdlib.h>

struct node
{
  int value;
  struct node *next;
};
struct node *head;

void push()
{
  int value;
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  if (ptr == NULL)
  {
      printf("Not able to push element");
  }
  else
  {
      printf("enter the value : ");
      scanf("%d", &value);
      if (head == NULL)
      {
          ptr->value = value;
          ptr->next = NULL;
          head = ptr;
      }
      else
      {
          ptr->value = value;
          ptr->next = head;
          head = ptr;
      }
      printf("element pushed\n");
  }
}
void pop()
{
  int info;
  struct node *ptr;
  if (head == NULL)
  {
      printf("underflow\n");
  }
  else
  {
      info = head->value;
      ptr = head;
      head = head->next;
      free(ptr);
      printf("element poped \n");
  }
}
void display()
{
  int i;
  struct node *ptr;
  ptr = head;
  if (ptr == NULL)
  {
      printf("stack is empty");
  }
  else
  {
      printf("stack elements are :");
      while (ptr != NULL)
      {
          printf("%d ", ptr->value);
          ptr = ptr->next;
      }
  }
}
int main()
{
  int choice;
  while (1)
  {
      printf("\npress 1 for push\npress 2 for pop\npress 3 for display\npress 4 for exit\n");
      printf("enter your choice : ");
      scanf("%d", &choice);
      switch (choice)
      {
      case 1:
          push();
          break;
      case 2:
          pop();
          break;
      case 3:
          display();
          break;
      case 4:
          exit(0);
          break;
      default:
          printf("\nenter correct choice");
      }
  }
}
*/
/*
-------------------------------------------------------
question:2;
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};
struct node *front = NULL, *rear = NULL;
void insert_queue(int x)
{
  struct node *newNode = malloc(sizeof(struct node));
  newNode->data = x;
  newNode->next = NULL;
  if (front == NULL && rear == NULL)
      front = rear = newNode;
  else
  {
      rear->next = newNode;
      rear = newNode;
  }
}

void dequeue()
{
  int temp;
  if (front == NULL)
  {
      printf("queue is empty");
  }
  else
  {
      temp = front;
      front = front->next;
      if (front == NULL)
          rear = NULL;
      free(temp);
  }
}
void displaylist()
{
  struct node *temp = front;
  while (temp)
  {
      printf("%d ", temp->data);
      temp = temp->next;
  }
}
int main()
{
  insert_queue(34);
  insert_queue(54);
  insert_queue(60);
  printf("Queue : ");
  displaylist();
  dequeue();
  printf("\nafter dequeue new queue : ");
  displaylist();
  dequeue();
  printf("\nafter dequeue new queue : ");
  displaylist();
  return 0;
}
/*
-----------------------------------------------
question:3



#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next
};
struct node *head, *tail = NULL;

void createNode(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    if (head == NULL)
    {
        head = tail = newnode;
        head->prev = NULL;
        tail->next = NULL;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        tail->next = NULL;
    }
}
void display()
{
    struct node *current = head;
    if (head == NULL)
    {
        printf("list is empty");
    }
    printf("\nnode of doubly linked list : ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
}
int main()
{
    createNode(34);
    createNode(48);
    createNode(84);
    createNode(58);
    display();
    return 0;
}

*/