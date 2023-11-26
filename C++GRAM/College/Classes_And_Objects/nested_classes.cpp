#include<iostream>
using namespace std;

class enclosing
{
    private:
        int a;

    public:
        enclosing()
        {
            a=10;
        }

        void show()
        {
            cout<<"a = "<<a<<endl;
        }

        class nested
        {
            private:
                int b;

            public:
                nested()
                {
                    b=100;
                }

                void show_encl()
                {
                    cout<<"encl a = "<<a<<endl;
                }

  
                  
        }
 


};