#include<iostream>
using namespace std;

struct text
{
    int data=50;
    int *to = &data;
};

int main()
{
    text *t = new text;
    // cout<<t.data;w
    cout<<t->data;
    return 0;
}
