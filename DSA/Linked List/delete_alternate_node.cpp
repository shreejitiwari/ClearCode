#include<iostream>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

        Node(int value)
        {
            val = value;
            next = nullptr;
        }
};

class Linked_list
{
    public:
        Node* head;

        Linked_list()
        {
            head = nullptr;
        }

        void insertAtTail(int val)
        {
            Node* new_node = new Node(val);

            if (head == nullptr)
            {
                head = new_node;
                return;
            }

            Node* temp = head;ṭ
            
            
        }

};