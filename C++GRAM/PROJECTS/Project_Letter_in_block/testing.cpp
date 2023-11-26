#include<iostream>
using namespace std;

void A(int n)
{
    if (n==8)
    {
        return;
    }

    else
    {
        for (int col=1; col<=5; col++)
        {
            if (1<=n && n<=3)
            {
                if (col+n == 4 || col-n==2)
                {
                    cout<<"A";
                }

                else 
                {
                    cout<<" ";
                }            

            }

            else if (n==4)
            {
                cout<<"A";
            }

            else if (5<=n && n<=7)
            {
                if (col==1 || col==5)
                {
                    cout<<"A";
                }

                else
                {
                    cout<<" ";
                }

            }

        }

        cout<<endl;
        A(n+1);
    }

}

void B(int n)
{
    if (n==8)
    {
        return ;
    }

    else 
    {
        for (int col=1; col<=5; col++)
        {
            if (n==1 || n==4 || n==7)
            {
                if (col<5)
                {
                    cout<<"B";
                }

                else 
                {
                    cout<<" ";
                }
            }

            if (n==2 || n==3 || n==5 || n==6)
            {
                if (col==1 || col==5)
                {
                    cout<<"B";
                }
                else
                {
                    cout<<" ";
                }

            }

        }
        cout<<endl;
        B(n+1);

    }
}

// void space(int n)
// {

// }

// void print()

int main()
{
    // int n=7;
    A(1);
    cout<<endl<<endl;
    B(1);
    return 0;
}


