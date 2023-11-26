#include<iostream>
#include<string>

using namespace std;

class A
{
    public:
        string name = "Class A";
};

class B : public A
{
    public:
        string name = "Class B";
};


int main()
{
    B b;
    A * a = &b;
    cout<<b.name<<endl<<a->name;
    
}