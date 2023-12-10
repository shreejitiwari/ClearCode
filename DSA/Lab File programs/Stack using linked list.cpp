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
        friend class Stack;
};

class Stack
{
    node *top;
    public:
        Stack()
        {
            top = NULL;
        }
        void push(int);
        int pop();
        void display();
};

void Stack::push(int val)
{
    node *temp = new node(val);
    if(top == NULL)
        top = temp;
    else
    {
        temp->next = top;
        top = temp;
    }
}

int Stack::pop()
{
    if(top == NULL)
    {
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    else
    {
        int x = top->data;
        node *temp = top;
        top = top->next;
        delete temp;
        return x;
    }
}

void Stack::display()
{
    if(top == NULL)
        cout<<"Stack underflow"<<endl;
    else
    {
        cout<<"The elements of the stack are: ";
        node *ptr = top;
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
    Stack s;
    int choice, x;
    do
    {
        cout<<"1. Push an element"<<endl;
        cout<<"2. Pop an element"<<endl;
        cout<<"3. Display the stack"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the element to be pushed: ";
                cin>>x;
                s.push(x);
                break;
            case 2:
                x = s.pop();
                if(x != -1)
                    cout<<"The popped element is: "<<x<<endl;
                break;
            case 3:
                s.display();
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
