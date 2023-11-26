#include <iostream>
using namespace std;

class base
{
    private:
        int i,j;
    public:
        void set(int a, int b)
        {
            i=a;j=b;
        }

        void show()
        {
            cout<<i<<" "<<j<<endl;
        }
};

class derived : public base
{
    private:
        int k;
        

    public:
        derived(int x)
        {
            k=x;
        }

        void showk()
        {
            cout<<k<<endl;
        }
};

int main()
{
    derived object(3);
    object.set(1,2);
    object.show();
    object.showk();

    return 0;
}