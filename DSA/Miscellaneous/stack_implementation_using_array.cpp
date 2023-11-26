#include<iostream>
using namespace std;

class stack
{
    int top = -1;
    int *a;
    int max;

    public:
        stack(int x)
        {
            a = new int[x];
            max=x;
        }

        ~stack()
        {
            delete a;
        }

        void push(int val)
        {
            if (top==max)
                cout<<"Stack Overflow !!";

            else
            {
                top++;
                a[top] = val;
            }
        }

        int pop()
        {
            if (top==-1)
            {
                return -1;
            }

            else
            {
                int x = a[top--];
                return x;
            }
        }

        int peek()
        {
            if (top==-1)
            {
                cout<<"Stack is empty !!";
                return -1;
            }

            else
            {
                int x = a[top];
                return x;
            }            
        }

        bool isEmpty()
        {
            return (top==-1);
        }

        void printStack()
        {
            int i=top;
            while (i>-1)
            {
                cout<<a[i--]<<endl;                
            }
        }

    
};


int main()
{
    // stack s(10);
    // s.push(5);
    // s.push(12);
    // s.push(9);
    // cout<<s.peek()<<endl;
    // cout<<"Popping : "<<s.pop()<<endl;
    // cout<<s.peek()<<endl;
    int size, choice;
    cout<<"Enter the size of the stack : ";
    cin>>size;
    stack S(size);
    
    while (true)
    {
        cout<<"1. Push \
               2. Pop\
               3. Peek\
               4. Display\
               5. Exit"<<endl;

        cout<<"Enter your choice : ";
        cin>>choice;

        switch (choice)
        {
        case 1:
        {    cout<<"Enter value : ";
            int x;
            cin>>x;
            S.push(x);
            cout<<"DONE"<<endl;
            break;
        }
        case 2:
        {    int val = S.pop();
            cout<<"Value : "<<val<<endl;
            break;
        }
        case 3:
        {    int t = S.peek();
            cout<<"Peek :  TOP--------->"<<t<<endl;
            break;
        }
        case 4:
        {    S.printStack();
            break;
        }
        case 5:
        {    cout<<"Okay, bye bye !";
            break;}
        }

        if (choice==5)
            break;
    }

    return 0;
}