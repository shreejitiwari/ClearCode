//Write a C++ program to perform the following operations: (a) Insert an element into a binary search tree. (b) Delete an element from a binary search tree. (c) Search for a key element in a binary search tree

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
        void insert(node*, node*);
        void del(node*, int);
        void search(node*, int);
        void preorder(node*);
        void inorder(node*);
        void postorder(node*);
        void display();
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

void Tree::insert(node *ptr, node *temp)
{
    if(temp->data < ptr->data)
    {
        if(ptr->left == NULL)
            ptr->left = temp;
        else
            insert(ptr->left, temp);
    }
    else
    {
        if(ptr->right == NULL)
            ptr->right = temp;
        else
            insert(ptr->right, temp);
    }
}

void Tree::del(node *ptr, int val)
{
    if(ptr == NULL)
        cout<<"Tree empty"<<endl;
    else
    {
        node *prev = NULL;
        while(ptr != NULL)
        {
            if(ptr->data == val)
                break;
            prev = ptr;
            if(val < ptr->data)
                ptr = ptr->left;
            else
                ptr = ptr->right;
        }
        if(ptr == NULL)
            cout<<"Element not found"<<endl;
        else
        {
            if(ptr->left == NULL && ptr->right == NULL)
            {
                if(prev->left == ptr)
                    prev->left = NULL;
                else
                    prev->right = NULL;
                delete ptr;
            }
            else if(ptr->left == NULL)
            {
                if(prev->left == ptr)
                    prev->left = ptr->right;
                else
                    prev->right = ptr->right;
                delete ptr;
            }
            else if(ptr->right == NULL)
            {
                if(prev->left == ptr)
                    prev->left = ptr->left;
                else
                    prev->right = ptr->left;
                delete ptr;
            }
            else
            {
                node *temp = ptr->right;
                while(temp->left != NULL)
                    temp = temp->left;
                ptr->data = temp->data;
                del(ptr->right, temp->data);
            }
        }
    }
}

void Tree::search(node *ptr, int val)
{
    if(ptr == NULL)
        cout<<"Tree empty"<<endl;
    else
    {
        while(ptr != NULL)
        {
            if(ptr->data == val)
            {
                cout<<"Element found"<<endl;
                break;
            }
            if(val < ptr->data)
                ptr = ptr->left;
            else
                ptr = ptr->right;
        }
        if(ptr == NULL)
            cout<<"Element not found"<<endl;
    }
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

void Tree::display()
{
    if(root == NULL)
        cout<<"Tree empty"<<endl;
    else
    {
        cout<<"The preorder traversal of the tree is: ";
        preorder(root);
        cout<<endl;
        cout<<"The inorder traversal of the tree is: ";
        inorder(root);
        cout<<endl;
        cout<<"The postorder traversal of the tree is: ";
        postorder(root);
        cout<<endl;
    }
}

int main()
{
    Tree t;
    int choice;
    do
    {
        cout<<"1. Create a binary search tree"<<endl;
        cout<<"2. Insert an element into the tree"<<endl;
        cout<<"3. Delete an element from the tree"<<endl;
        cout<<"4. Search for an element in the tree"<<endl;
        cout<<"5. Display the tree"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                t.create();
                break;
            case 2:
                int val;
                cout<<"Enter the value to be inserted: ";
                cin>>val;
                node *temp = new node(val);
                if(t.root == NULL)
                    t.root = temp;
                else
                    t.insert(t.root, temp);
                break;
            case 3:
                cout<<"Enter the value to be deleted: ";
                cin>>val;
                t.del(t.root, val);
                break;
            case 4:
                cout<<"Enter the value to be searched: ";
                cin>>val;
                t.search(t.root, val);
                break;
            case 5:
                t.display();
                break;
            case 6:
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    } while (choice != 6);
    return 0;
}
