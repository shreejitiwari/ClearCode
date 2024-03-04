#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node()
    {
        data = 0;
        next = NULL;
    }

    node(int val)
    {
        data = val;
        next = NULL;
    }

};

vector<int> intersection(node* head1, node* head2)
{
    vector<int> res;
    vector<int> v1;
    vector<int> v2;

    for (node* i = head1; i != NULL; i = i->next)
    {
        v1.push_back(i->data);
    }

    for (node* i = head2; i != NULL; i = i->next)
    {
        v2.push_back(i->data);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(res));

    return res;
}

void print_vector(vector<int> v)
{
    for (auto i : v)
    {
        cout << i << ", ";
    }
    cout << endl;
}

int main()
{
    node* head1 = new node(1);
    head1->next = new node(2);
    head1->next->next = new node(3);
    head1->next->next->next = new node(4);
    head1->next->next->next->next = new node(5);
    head1->next->next->next->next->next = new node(6);
    head1->next->next->next->next->next->next = new node(7);

    // Create another linked list or reuse head1 to demonstrate intersection
    node* head2 = new node(3);
    head2->next = new node(5);
    head2->next->next = new node(7);

    cout << "Linked List 1: ";
    for (node* curr = head1; curr != NULL; curr = curr->next)
    {
        cout << curr->data << "->";
    }
    cout << endl;

    cout << "Linked List 2: ";
    for (node* curr = head2; curr != NULL; curr = curr->next)
    {
        cout << curr->data << "->";
    }
    cout << endl;

    vector<int> result = intersection(head1, head2);
    cout << "Intersection: ";
    print_vector(result);

    return 0;
}