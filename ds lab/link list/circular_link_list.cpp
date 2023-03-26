#include <iostream>
using namespace std;
class c_ll
{
    struct Node
    {
        int val;
        Node *head=NULL;

        Node(int x)
        {
            val = x;
            head = NULL;
        }
    };
    Node *head;
    public:
        c_ll(){
            
        }
};