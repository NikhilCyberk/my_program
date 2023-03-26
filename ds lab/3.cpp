#include<iostream>
#include<deque>

using namespace std;
int main()
{
    int x,y,ele;
    deque<int> d;
    while(1)
    {
        cout<<"\n1. Insertion: "
        <<"\n2. Deletion: "
        <<"\n3. Display: "
        <<"\n4. Exit"
        <<"\n Enter your choice: ";
        cin>>x;
        switch (x)
        {
            case 1:
                cout<<"\n 1. Insert from front: "<<"\n 2. Insert from back: "<<"\n Enter your choice: ";
                cin>>y;
                switch (y)  
                {
                    case 1: cout<<"\nEnter element: ";
                        cin>>ele;
                        d.push_front(ele);
                    break;
                    case 2:
                        cout<<"\nEnter element: ";
                        cin>>ele;
                        d.push_back(ele);
                    break;
                }
            break;
 
            case 2:cout<<"\n 1. Delete from front: "<<"\n 2. Delete from back: "<<"\n Enter your choice: ";
                cin>>y;
                switch (y){
                    case 1: cout<<"\nEnter element: ";
                        cin>>ele;
                        d.pop_front();
                        break;
                    case 2:
                    cout<<"\nEnter element: ";
                    cin>>ele;
                    d.pop_back();
                break;
                }
            break;
 
            case 3:
            cout<<"\n All elements of Dequeue: ";
            for(int i: d){
            cout<<i<<" ,";
            }
            break;
 
            case 4:
            cout<<"\n Exit";
            return 0;
        }
    }
    return 0;
}
