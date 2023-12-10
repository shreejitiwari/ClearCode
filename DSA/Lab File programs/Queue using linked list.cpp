//Write C++ programs to implement the following using a singly linked list. Queue ADT

#include<iostream>
using namespace std; 

class node
{
    int data;
    node *next;
    public:
        node(int val)
        {
            data = val;
            next = NULL;
        }
        friend class Queue;
};

class Queue
{
    node *front, *rear;
    public:
        Queue()
        {
            front = NULL;
            rear = NULL;
        }
        void enqueue(int);
        int dequeue();
        void display();
};

void Queue::enqueue(int val)
{
    node *temp = new node(val);
    if(front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

int Queue::dequeue()
{
    if(front == NULL)
    {
        cout<<"Queue underflow"<<endl;
        return -1;
    }
    else
    {
        int x = front->data;
        node *temp = front;
        front = front->next;
        delete temp;
        return x;
    }
}

void Queue::display()
{
    if(front == NULL)
        cout<<"Queue underflow"<<endl;
    else
    {
        cout<<"The elements of the queue are: ";
        node *ptr = front;
        while(ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }
}

int main()
{
    Queue q;
    int choice, x;
    do
    {
        cout<<"Enter 1 to enqueue an element"<<endl;
        cout<<"Enter 2 to dequeue an element"<<endl;
        cout<<"Enter 3 to display the elements of the queue"<<endl;
        cout<<"Enter 4 to exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the element to be enqueued: ";
                cin>>x;
                q.enqueue(x);
                break;
            case 2:
                x = q.dequeue();
                if(x != -1)
                    cout<<"The dequeued element is: "<<x<<endl;
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }while(choice != 4);
    return 0;
}

