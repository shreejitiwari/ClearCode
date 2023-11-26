#include<iostream>
using namespace std;

int main()
{
    // char first_name[30], last_name[30];
    // cout<<"Enter your first name : ";
    // cin>>first_name;
    // cout<<"Enter your last_name : ";
    // cin>>last_name;

    // OR 

    string name;
    cout<<"Enter your full name : ";
    getline(cin, name);

    cout<<name;  

    return 0;
}