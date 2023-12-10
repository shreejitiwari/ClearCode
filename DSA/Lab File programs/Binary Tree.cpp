// Write C++ programs that use recursive functions to traverse the given binary tree in a) Preorder b) in order and c) post order

#include<iostream>
using namespace std;

class node
{
    int data;
    node *left, *right;
    public:
        node(int val)
        {
            data = val;
            left = NULL;
            right = NULL;
        }
        friend class Tree;
};

class Tree
{    
    public:
        node *root;
        Tree()
        {
            root = NULL;
        }
        void create();
        void preorder(node*);
        void inorder(node*);
        void postorder(node*);
};

void Tree::create()
{
    int val;
    cout<<"Enter the value of the root node: ";
    cin>>val;
    root = new node(val);
    node *ptr = root;
    char ch;
    do
    {
        cout<<"Enter the value of the left child of "<<ptr->data<<": ";
        cin>>val;
        ptr->left = new node(val);
        cout<<"Enter the value of the right child of "<<ptr->data<<": ";
        cin>>val;
        ptr->right = new node(val);
        cout<<"Do you want to continue? (y/n): ";
        cin>>ch;
        ptr = ptr->left;
    } while (ch == 'y' || ch == 'Y');
}

void Tree::preorder(node *ptr)
{
    if(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

void Tree::inorder(node *ptr)
{
    if(ptr != NULL)
    {
        inorder(ptr->left);
        cout<<ptr->data<<" ";
        inorder(ptr->right);
    }
}

void Tree::postorder(node *ptr)
{
    if(ptr != NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout<<ptr->data<<" ";
    }
}

int main()
{
    Tree t;
    int choice;
    do
    {
        cout<<"1. Create a binary tree"<<endl;
        cout<<"2. Traverse the tree in preorder"<<endl;
        cout<<"3. Traverse the tree in inorder"<<endl;
        cout<<"4. Traverse the tree in postorder"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                t.create();
                break;
            case 2:
                cout<<"The preorder traversal of the tree is: ";
                t.preorder(t.root);
                cout<<endl;
                break;
            case 3:
                cout<<"The inorder traversal of the tree is: ";
                t.inorder(t.root);
                cout<<endl;
                break;
            case 4:
                cout<<"The postorder traversal of the tree is: ";
                t.postorder(t.root);
                cout<<endl;
                break;
            case 5:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    } while (choice != 5);
    return 0;
}
