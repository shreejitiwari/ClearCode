#include<iostream>
using namespace std;

class Stack
{
    int top;
    int arr[100];
    public:
        Stack()
        {
            top = -1;
        }
        void push(int);
        int pop();
        void display();
};      


void Stack::push(int x)
{
    if(top == 99)
        cout<<"Stack overflow"<<endl;
    else
    {
        top++;
        arr[top] = x;
    }
}

int Stack::pop()
{
    if(top == -1)
    {
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    else
    {
        int x = arr[top];
        top--;
        return x;
    }
}

void Stack::display()
{
    if(top == -1)
        cout<<"Stack underflow"<<endl;
    else
    {
        cout<<"The elements of the stack are: ";
        for(int i = 0; i <= top; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main()
{
    Stack s;
    int choice, x;
    do
    {
        cout<<"1. Push an element into the stack"<<endl;
        cout<<"2. Pop an element from the stack"<<endl;
        cout<<"3. Display the elements of the stack"<<endl;
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
    } while(choice != 4);
    return 0;
}