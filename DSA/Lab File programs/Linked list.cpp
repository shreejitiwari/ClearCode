#include<iostream>
using namespace std;

// Write a C++ programs to implement list ADT to perform following operations (a) Insert an element into a list. (b) Delete an element from list (c) Search for a key element in list (d) Display list contents (e) Exit.

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
        friend class List;
};

class List
{
    node *head;
    public:
        List()
        {
            head = NULL;
        }
        void insert(int);
        void del(int);
        void search(int);
        void display();
};

void List::insert(int val)
{
    node *temp = new node(val);
    if(head == NULL)
        head = temp;
    else
    {
        node *ptr = head;
        while(ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}

void List::del(int val)
{
    if(head == NULL)
        cout<<"List empty"<<endl;
    else
    {
        node *ptr = head;
        node *prev = NULL;
        while(ptr != NULL)
        {
            if(ptr->data == val)
                break;
            prev = ptr;
            ptr = ptr->next;
        }
        if(ptr == NULL)
            cout<<"Element not found"<<endl;
        else
        {
            if(prev == NULL)
                head = head->next;
            else
                prev->next = ptr->next;
            delete ptr;
        }
    }
}

void List::search(int val)
{
    if(head == NULL)
        cout<<"List empty"<<endl;
    else
    {
        node *ptr = head;
        while(ptr != NULL)
        {
            if(ptr->data == val)
            {
                cout<<"Element found"<<endl;
                break;
            }
            ptr = ptr->next;
        }
        if(ptr == NULL)
            cout<<"Element not found"<<endl;
    }
}

void List::display()
{
    if(head == NULL)
        cout<<"List empty"<<endl;
    else
    {
        node *ptr = head;
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
    List l;
    int ch, val;
    do
    {
        cout<<"1. Insert an element"<<endl;
        cout<<"2. Delete an element"<<endl;
        cout<<"3. Search for an element"<<endl;
        cout<<"4. Display the list"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter the value to be inserted: ";
                cin>>val;
                l.insert(val);
                break;
            case 2:
                cout<<"Enter the value to be deleted: ";
                cin>>val;
                l.del(val);
                break;
            case 3:
                cout<<"Enter the value to be searched: ";
                cin>>val;
                l.search(val);
                break;
            case 4:
                l.display();
                break;
            case 5:
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }while(ch != 5);
    return 0;
}