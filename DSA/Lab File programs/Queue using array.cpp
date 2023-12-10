#include<iostream>
using namespace std;

class Queue
{
    int front, rear;
    int arr[100];
    public:
        Queue()
        {
            front = -1;
            rear = -1;
        }
        void enqueue(int);
        int dequeue();
        void display();
};

void Queue::enqueue(int val)
{
    if(rear == 99)
        cout<<"Queue overflow"<<endl;
    else
    {
        if(front == -1)
            front = 0;
        rear++;
        arr[rear] = val;
    }    
}

int Queue::dequeue()
{
    if(front == -1)
    {
        cout<<"Queue underflow"<<endl;
        return -1;
    }
    
    else
    {
        int x = arr[front];
        front++;
        return x;
    }
}

void Queue::display()
{
    if(front == -1)
        cout<<"Queue underflow"<<endl;
    else
    {
        cout<<"The elements of the queue are: ";
        for(int i = front; i <= rear; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main()
{
    Queue q;
    int choice, val;
    do
    {
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the value to be enqueued: ";
                cin>>val;
                q.enqueue(val);
                break;
            case 2:
                val = q.dequeue();
                if(val != -1)
                    cout<<"The dequeued element is: "<<val<<endl;
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout<<"Exit"<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }while(choice != 4);
    return 0;
}