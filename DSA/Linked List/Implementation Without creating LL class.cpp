#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node * next;

        Node(int val)
        {
            data = val;
            next = nullptr;
        }
};


void insertAtBeginning(Node * &head, int val)
{
    Node * new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtEnd(Node* head, int val)  // well not needed bcoz of insertAtPosition
{
    Node* new_node = new Node(val);
    Node* temp  = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtPosition(Node* head, int val, int position)
{
    if (position==0)
        insertAtBeginning(head, val);

    else
    {
        Node* temp = head;
        Node* new_node = new Node(val);
        int count=0;

        while(temp->next != nullptr && count<position-1)
        {
            temp = temp->next;
            count++;
        }

        new_node->next = temp->next;
        temp->next = new_node;
    }
}

void deleteFromBeginning(Node* &head)
{
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteAtEnd(Node* &head)
{    
    Node* cur = head;
    if (cur->next == nullptr)
    {
        deleteFromBeginning(head);
    }



    while (cur->next->next != nullptr)
    {
        cur = cur->next;
    }

    Node* to_delete = cur->next;
    cur->next = cur->next->next;
    delete to_delete;        
}

void deleteAtPosition(Node* &head, int position)
{
    if (position==0) 
    {
        deleteFromBeginning(head);
        return;
    }

    Node* cur = head;
    int count = 0;
    while (cur->next != nullptr && count!=position-1)
    {
        cur = cur->next;
        count++;
    }

    
    if (count+1 == position && cur->next != nullptr)
    {        
        Node* temp = cur->next;
        cur->next = cur->next->next;
        delete temp;     
    }

    else
    {
        cout<<"Linked List is shorter than "<<position<<endl;
    }

}

void display(Node * head)
{
    Node * temp = head;
    cout<<"Head-->";
    while (temp != nullptr)
    {
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"Null"<<endl;
}


int main()
{
    Node*  head = nullptr;
    display(head);
    insertAtBeginning(head, 10);
    display(head);
    insertAtBeginning(head, 20);
    display(head);
    insertAtBeginning(head, 30);
    display(head);
    insertAtEnd(head, 50);
    display(head);
    insertAtPosition(head, 15, 2);
    display(head);
    insertAtPosition(head, 25, 3);
    display(head);
    deleteFromBeginning(head);
    display(head);
    insertAtPosition(head, 456,5);
    display(head);
    deleteAtPosition(head, 2);
    display(head);
    deleteAtPosition(head, 40);
    display(head);
    

    for (int i=4; i>=0; i--)
    {
        // deleteAtPosition(head, i);
        // deleteAtEnd(head);
        deleteFromBeginning(head);
        display(head);
    }
    return 0;
}