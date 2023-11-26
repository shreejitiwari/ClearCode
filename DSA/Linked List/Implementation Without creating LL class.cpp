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
    Node*  head = new Node(10);
    display(head);
    insertAtBeginning(head, 20);
    display(head);
    insertAtBeginning(head, 30);
    display(head);

    return 0;
}