#include<iostream>
using namespace std;

void pointer (int var)
{
    int *ptr;
    ptr = &var;
    cout<<var<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr = 56;
    cout<<*ptr<<endl;
}

int main()
{
    // int var = 8;
    // int *ptr;
    // ptr = &var;
    // cout<<var<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    int var ;
    cout<<"Enter var value "<<endl;
    cin>>var;
    pointer(var);

    return 0;
}