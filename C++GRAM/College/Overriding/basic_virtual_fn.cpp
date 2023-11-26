#include<iostream>
using namespace std;

class base
{
    public:
        virtual void show() 
        {
            cout<<"IN BASE at "<<endl;
        }
        
};

class derived: public base
{
    public:
        void show()
        {
            cout<<"IN DERIVED with "<<endl;
        }
};

int main()
{
    derived a;
    base * b = &a;
    // b = new derived();

    b->show();
    b->show();


    return 0;
}