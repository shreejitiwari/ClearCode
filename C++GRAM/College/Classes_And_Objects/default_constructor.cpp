#include<iostream>
using namespace std;

class number
{
    private:
        int i;
        float f;
        char ch;

    public:

        number()
        {
            i=0; f=0.00f; ch='~';
        }


        void show_vals()
        {
            cout<<"i = "<<i<<",f = "<<f<<",ch = "<<ch;
        }

};

int main()
{
    number num;
    num.show_vals();
    return 0;
}