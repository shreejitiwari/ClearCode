#include<iostream>
using namespace std;

class M
{
    protected:
        int a = 10;

    public:
        void display()
        {
            cout<<"Inside M"<<endl;
        }
};

class N
{
    protected:
        int a = 19;

    public:
        void display()
        {
            cout<<"Inside N"<<endl;
        }

};

class MN : public M, protected N
{
    protected:
        int a = 30;



    
};


int main()
{
    MN mn;
    // mn.display();
    mn.M::display();
    // mn.N::display();
    return 0;

}