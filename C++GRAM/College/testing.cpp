#include<iostream>
using namespace std;

class test
{
    private:
    int a,b;

    public:
    void sum(int i,int j)
    {
        a = i;
        b = j;
        cout<<a+b<<endl;
    }

    void show_Data()
    {
        cout<<a<<endl<<b;
    }
};



int main()
{
    test t1;
    t1.sum(2,5);
    t1.show_Data();
}