#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
        int data;
        node* next;
        
        node(){
            data = 0;
            next = NULL;
        }

        node(int val){
            data = val;
            next = NULL;
    }
};

void displayLL(node* head){
    while (head){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

// My approach 1 : using three pointers (kinda sliding window type)
node* reverseLL(node* head){
    node * prev=NULL, *cur=head, *next=NULL;
    while(cur!=NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}

node* reverseLL(node* head, int low, int high){
    vector<node *> to_be_reversed;
    int count = 1;
    node *temp = head;
  
    if (high==low){
        return head;
    } 

    while (temp!=NULL && count<=high){
        if (count>=low){
            to_be_reversed.push_back(temp);
        }
        temp = temp->next;
        count++;
    }
    node* after_high = temp;
    // int n = to_be_reversed.size();
    count = 1;
    temp = head;
    while(count<high){
        if (count>=low-1){
            temp->next = to_be_reversed[high-count-1];
        }
        temp = temp->next;
        count++;
    }
    temp->next = after_high;
    
    if (low==1){
        head = to_be_reversed[high-low];
        head->next = to_be_reversed[high-low-1];
    }

    return head;

}

/*
10->20->30->40->50->NULL
2,4
10->40->30->20->50->NULL
1,5
40->30->20->10->NULL

*/




int main(){
    node * head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);

    displayLL(head);
    head = reverseLL(head, 1, 1);
    displayLL(head);

}