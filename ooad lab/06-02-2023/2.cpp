#include<iostream>
using namespace std;
# define size 5
    int front=-1;
    int rear=-1;
    int arr[size];
    void enqueue(){
        if((front==0&&rear==size-1)||(front>rear)){
            cout<<"queue is overflow"<<endl;
            return;
        }
        if(front==-1){
            front++;
        }
        if(rear==size-1){
          rear=-1;
        }
        
         rear++;
        cout<<"enter the element:";
        cin>>arr[rear];
        cout<<endl<<arr[rear]<<"is eneterd in the queue"<<endl;
    }
    
    void dequeue()
    {
        if(front==-1){
            cout<<"queue is underflow"<<endl;
            return;
        }
        int temp;
        if(front==rear){
            temp=arr[front];
            front=-1;
            rear=-1;
        }
        else if(front==size-1){
            temp=arr[front];
            front=0;
        }
        else{
          temp=arr[front];
          front++;  
        }
        cout<<endl<<temp<<" is deleted"<<endl;
    }
    void display(){
            if(front==-1){
            cout<<"queue is underflow"<<endl;
            return;
        }
        cout<<"elements in queue:"<<endl;
        if(front<=rear){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
       }
       else{
        for(int i=front;i<size;i++){
        
            cout<<arr[i]<<" ";
          }
          for(int i=0;i<=rear;i++){
            cout<<arr[i]<<" ";
          }
           }
       cout<<endl;
    }

int main(){
    int ch;
    do{
    
    cout<<"1.enqueue"<<endl;
    cout<<"2.dequeue"<<endl;
    cout<<"3.display"<<endl;
    cout<<"4.exit"<<endl;
    cout<<"enter your choice:";
    cin>>ch;
    switch(ch){
        case 1:enqueue();
        break;
        case 2: dequeue();
        break;
        case 3: display();
        break;
        case 4: exit(0);
        break;
        default:
            cout<<"wrong choice:"<<endl;;
    }
}while(1);
    return 0;
}