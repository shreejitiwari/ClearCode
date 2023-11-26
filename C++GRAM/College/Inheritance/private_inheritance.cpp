#include<iostream>
using namespace std;

class base
{
    protected:
        int a=10, b=20;

    public:
        void show_a()
        {
            cout<<a<<endl;
        }

        void show_b()
        {
            cout<<b<<endl;
        }

        int sum(int a, int b)
        {
            return a+b;
        }
};


class inherited : private base
{
    private:
        int x,y;

    public:
        void do_something()
        {
            cout<<"Enter x and y : ";
            cin>>x>>y;
            cout<<"Something is done with x and y : "<<sum(x,y)<<endl;
        }

        void what_you_have()
        {
            show_a();
            show_b();
            cout<<sum(a, b);
        }

};

int main()
{
    inherited test;
    test.do_something();
    test.what_you_have();
    
    return 0;
}

