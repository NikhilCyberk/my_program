#include<bits/stdc++.h>

using namespace std;

class Queue{
    stack<int> in;
    stack<int> out;
    int front,rear;

    public:
    Queue()
    {
        front = rear = -1;
    }
    void push(int x)
    {
        in.push(x);
    }
    void pop()
    {
        if(in.empty())
        {
            cout<<"\nQueue empty";
            return ;
        }
        stack<int> temp=in;
        while(!temp.empty())
        {
            out.push(temp.top());
            temp.pop();
        }

        cout<<"Element:="<<out.top();
        while(!out.empty())
        {
            out.pop();
        }
    }
    void display()
    {
        if(in.empty())
        return;
            stack<int> temp1 = in;
            stack<int> temp2;
            while(!temp1.empty())
            {
                temp2.push(temp1.top());
                temp1.pop();
            }
        cout<<"\nelements are:=";
        while(!temp2.empty())
        {
            cout<<temp2.top()<<" ";
            temp2.pop();
        }
    }
};

int main()
{
    int ch;
    Queue ob;
    while(true)
    {
        cout<<"\n1.Insert Element,";
        cout<<"\n2.Delete Element,";
        cout<<"\n3.Print Element";
        cout<<"\nEnter your choice,";
        cin>>ch;
        if(ch==1)
        {
            int x;
            cout<<"\nEnter element:=";
            cin>>x;
            ob.push(x);
        }
        else if(ch==2)
        {
            ob.pop();
        }
        else if(ch==3)
        {
            ob.display();
        }
        else
        break;
    }
    return 0;
}