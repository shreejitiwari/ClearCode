#include<iostream>
#include<string>

using namespace std;

class A
{
    private:
        string name = "Class A";

    public:
        void virtual show()
        {
            cout<<name<<endl;
        }        
};

class B : public A
{
    private:
        string name = "Class B";

    public:
        void show()
        {
            cout<<name<<endl;
        }

};

class C : public B
{
    private:
        string name = "Class C";
        
    public:
        void show()
        {
            cout<<name<<endl;
        }

};


int main()
{
    C c;
    B b;
    A * ab = &b;
    B * bc = &c;
    A * ac = &c;

    c.show();
    b.show();
    ab->show();    
    bc->show();
    ac->show();
}