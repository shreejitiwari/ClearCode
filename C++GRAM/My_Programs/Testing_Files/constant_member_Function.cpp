/*
cant even change public data members using constant member functions
*/


#include<iostream>
using namespace std;

class A 
{
    public:
        int a;
        
        A()
        {
            a = 10;
        }
        
        void get_data() const
        {
            a++;
            cout<<a;
        }
};

int main()
{
    A test;
    test.get_data();
}