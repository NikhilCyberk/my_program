#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class linkedList
{
private:
    Node *head;

public:
    linkedList()
    {
        head = NULL;
    }
    void insert(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    void add(linkedList *list1, linkedList *list2)
    {
        Node *current1 = list1->head;
        Node *current2 = list2->head;
        int carry = 0;
        while (current1 != NULL || current2 != NULL)
        {
            int sum = carry;
            if (current1 != NULL)
            {
                sum += current1->data;
                current1 = current1->next;
            }
            if (current2 != NULL)
            {
                sum += current2->data;
                current2 = current2->next;
            }
            carry = sum / 10;
            sum %= 10;
            insert(sum);
        }
        if (carry != 0)
        {
            insert(carry);
        }
    }
    void print()
    {
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data;
            current = current->next;
        }
        cout << endl;
    }
};
int main()
{
    string num1, num2;
    cout << "Enter first number :";
    cin >> num1;
    cout << "\nEnter second number :";
    cin >> num2;
    linkedList l1, l2, r;
    for (int i = num1.size() - 1; i >= 0; i--)
    {
        int digit = num1[i] - '0';
        l1.insert(digit);
    }
    for (int i = num2.size() - 1; i >= 0; i--)
    {
        int digit = num2[i] - '0';
        l2.insert(digit);
    }
    r.add(&l1, &l2);
    cout << "result : ";
    r.print();
    return 0;
}