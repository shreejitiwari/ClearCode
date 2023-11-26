#include<iostream>
using namespace std;

class linked_list
{
    private:
        int total_nodes;
        struct node
        {
            int data;
            node *next;
        } *head ;

        

    public:
        linked_list()
        {
            head = nullptr;
            total_nodes = 0;
        }

        bool isEmpty()
        {
            return (head == nullptr);
        }


        void add_first_node(int num)
        {
            node *temp = new node;
            temp->data = num;
            temp->next = nullptr;
            head = temp;
        }

        void append(int num)
        {
            if (isEmpty())
            {
                add_first_node(num);
            }

            else
            {
                node *temp = head;
                node *new_node = new node;
                while (temp->next != nullptr)
                {
                    temp = temp->next;
                }
                new_node->data = num;
                new_node->next = nullptr;
                temp->next = new_node;
            }
        }

        void insert(int num, int pos=0)
        {
            if (pos<=1 or isEmpty())
            {
                add_first_node(num);
            }

            else
            {
                node *temp= head;
                node *new_node = new node;
                int count=1;
                while(temp->next != nullptr and count<pos-1)
                {
                    count++;
                    temp=temp->next;
                }

                new_node->data = num;
                new_node->next = temp->next;
                temp->next = new_node;
            }

        }

        void display()
        {
            if (isEmpty())
            {
                cout<<"Linked List is EMPTY !!"<<endl;
                return;
            }
            
            node *temp=head;
            cout<<"Head--->";
            while (temp != nullptr)
            {
                cout<<temp->data<<"--->";
                temp = temp->next;
            }
            cout<<"nullptr"<<endl;
        }

        // void insert(int position=1, int num);
        ~ linked_list()
        {
            node * temp=head;
            while (head != nullptr)
            {
                temp=head;
                head = head->next;
                delete temp;
                
            }
        }
        
};


// a b c d e
int main()
{
    linked_list LL;
    LL.display();
    cout<<LL.isEmpty()<<endl;
    LL.add_first_node(20);
        LL.display();
    LL.append(25);
        LL.display();
    LL.append(26);
        LL.display();
    LL.append(29);
        LL.display();
    LL.insert(28,4);
        LL.display();
    LL.insert(27,4);
    // cout<<LL.isEmpty()<<endl;
    LL.display();
    cout<<LL.isEmpty();
    // LL.~linked_list();
}