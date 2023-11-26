#include<iostream>
using namespace std;

class parent
{
    public:
    parent()
    {
        cout<<"Inside base class"<<endl;
    }
};

class child: public parent
{
    public:
    child()
    {
        cout<<"Inside child class"<<endl;
    }
};


int main()
{
    child obj;

}