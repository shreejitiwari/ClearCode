#include<iostream>
#include<math.h>
using namespace std;

class letter
{
    protected:
        int row, col, r_mid, c_mid;

    public:
        letter()              //default constructor
        {
            row=7;col=5;
            r_mid = ceil(double(row)/double(2));
            c_mid = ceil(double(col)/double(2));
        }

        letter(int i, int j)  //parametrized constructor
        {
            row=i; col=j;
            r_mid = ceil(double(row)/double(2));
            c_mid = ceil(double(col)/double(2));
        }

        void set_size(int i, int j)
        {
            row=i; col=j;
            r_mid = ceil(double(row)/double(2));
            c_mid = ceil(double(col)/double(2));
        }

        void get_size()
        {
            cout<<row<<"x"<<col<<endl;
        }

        void space()
        {
            for (int j=1; j<=8; j++)
            {
                cout<<" ";
            }
        }

        void new_line()
        {
            cout<<endl;
        }

        void A(int n, char ch='A');
        void B(int n, char ch='B');
        void C(int n, char ch='C');
        void D(int n, char ch='D');
        void E(int n, char ch='E');
        void F(int n, char ch='F');
        void G(int n, char ch='G');
        void H(int n, char ch='H');
        void I(int n, char ch='I');
        void J(int n, char ch='J');
        void K(int n, char ch='K');
        void L(int n, char ch='L');

        

};


        void letter::A(int n, char ch)   // to print A line by line
        {
        
            for (int j=1; j<=col; j++)
            {
                if (1<=n && n<=r_mid-1)
                {
                    if (j+n == r_mid || j-n==c_mid-1)
                    {
                        cout<<ch;
                    }

                    else 
                    {
                        cout<<" ";
                    }            

                }

                else if (n==r_mid)
                {
                    cout<<ch;
                }

                else if (r_mid<n && n<=row)
                {
                    if (j==1 || j==col)
                    {
                        cout<<ch;
                    }

                    else
                    {
                        cout<<" ";
                    }

                }

            }

            cout<<"   ";
        }

        void letter::B(int n, char ch)
        {

            for (int j=1; j<=col; j++)
            {
                if (n==1 || n==r_mid || n==row)
                {
                    if (j<col)
                    {
                        cout<<ch;
                    }

                    else 
                    {
                        cout<<" ";
                    }
                }

                if (n!=1 && n!=r_mid && n!=row)
                {
                    if (j==1 || j==col)
                    {
                        cout<<ch;
                    }
                    else
                    {
                        cout<<" ";
                    }

                }
            }

            cout<<"   ";
        }        

        void letter::C(int n, char ch)
        {
            for (int j=1; j<=col; j++)
            {
                if (1<n && n<row)    
                {
                    if (j==1)
                    {
                        cout<<ch;
                    }

                    else if (j==col && (n==2 || n==row-1))
                    {
                        cout<<ch;
                    }

                    else
                    {
                        cout<<" ";
                    }
                }

                else if (n==1 || n==row)
                {
                    if (1<j && j<col)
                    {
                        cout<<ch;
                    }

                    else
                    {
                        cout<<" ";
                    }
                }                                        
            }
            cout<<"   ";
                
            }

        void letter::D(int n, char ch)
        {
            for (int j=1; j<=col; j++)
            {
                if (n==1 || n==row)
                {
                    if (j<col)
                    {
                        cout<<ch;
                    }    

                    else 
                    {
                        cout<<" ";
                    }
                }

                else
                {
                    if (j==1 || j== col)
                    {
                        cout<<ch;
                    }

                    else 
                    {
                        cout<<" ";
                    }
                }
                           
            }
            cout<<"   ";
        }

        void letter::E(int n, char ch)
        {
            for (int j=1; j<=col; j++)
            {
                if (n==1 || n==row)
                {
                    cout<<ch;
                }

                else if (n==r_mid)
                {
                    if (j<=c_mid)
                    {
                        cout<<ch;
                    }

                    else
                    {
                        cout<<" ";
                    }
                }

                else 
                {
                    if (j==1)
                    {
                        cout<<ch;
                    }

                    else
                    {
                        cout<<" ";
                    }
                }
                
            }
            cout<<"   ";

        }

        void letter::F(int n, char ch)
        {
            for (int j=1; j<=col; j++)
            {
                if (n==1)
                {
                    cout<<ch;
                }

                else if (n==r_mid)
                {
                    if (j<=c_mid)
                    {
                        cout<<ch;
                    }

                    else
                    {
                        cout<<" ";
                    }
                }

                else
                {
                    if (j==1)
                    {
                        cout<<ch;
                    }
                    else 
                    {
                        cout<<" ";
                    }
                }
            }
            cout<<"   ";
        }

        void letter::G(int n, char ch)
        {
            for (int j=1; j<=col; j++)
            {
                if (n==1 || n==row)
                {
                    if (2<=j && j<col)
                    {
                        cout<<ch;
                    }
                    else
                    {
                        cout<<" ";
                    }
                }

                else if (n==r_mid)
                {
                    if (j>=c_mid)
                    {
                        cout<<ch;
                    }

                    else if (j==1)
                    {
                        cout<<ch;
                    }

                    else
                    {
                        cout<<" ";
                    }
                }

                else if (n<r_mid)
                {
                    if (j==1 || (j==col && n==2))
                    {
                        cout<<ch;
                    }

                    else
                    {
                        cout<<" ";
                    }
                }

                else if (n>r_mid)
                {
                    if (j==1 || j==col)
                    {
                        cout<<ch;
                    }

                    else 
                    {
                        cout<<" ";
                    }
                }

            }

            cout<<"   ";
        }

        void letter::H(int n, char ch)
        {
            for (int j=1; j<=col; j++)
            {
                if (n!=r_mid)
                {
                    if (j==1 || j==col)
                    {
                        cout<<ch;
                    }

                    else
                    {
                        cout<<" ";
                    }
                }

                if (n==r_mid)
                {
                    cout<<ch;
                }
            }
            cout<<"   ";
        }

        void letter::I(int n, char ch)
        {
            for (int j=1; j<=col; j++)
            {
                if (n==1 || n==row)
                {
                    cout<<ch;
                }

                else 
                {
                    if (j==c_mid)
                    {
                        cout<<ch;
                    }

                    else
                    {
                        cout<<" ";
                    }
                }
            }
            cout<<"   ";
        }

        void letter::J(int n, char ch)
        {
            for (int j=1; j<=col; j++)
            {
                if (n==1)
                {
                    cout<<ch;
                }

                else if (n==row)
                {
                    if (j>1 && j<=c_mid)
                    {
                        cout<<ch;
                    }

                    else
                    {
                        cout<<" ";
                    }                    
                }

                else if (n>r_mid && n<row)
                {
                    if (j==1 || j==c_mid)
                    {
                        cout<<ch;
                    }
                    else
                    {
                        cout<<" ";
                    }
                }

                else 
                {
                    if (j==c_mid)
                    {
                        cout<<ch;
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
            }
            cout<<"   ";
        }

        void letter::K(int n, char ch)
        {
            for (int j=1; j<=col; j++)
            {
                if (j==1)
                {
                    cout<<ch;
                }

                else if (j+n == r_mid+2 || n-j == r_mid-2)
                {
                    cout<<ch;
                }

                else
                {
                    cout<<" ";
                }
            }
            cout<<"   ";
        }

        void letter::L(int n, char ch)
        {
            for (int j=1; j<=col; j++)
            {
                if (n==row)
                {
                    cout<<ch;
                }

                else if (n<row)
                {
                    if (j==1)
                    {
                        cout<<ch;
                    }

                    else
                    {
                        cout<<" ";
                    }
                }
            }
            cout<<"   ";
        }




int main()
{
    letter lt(11,9);
    
    for (int i=1; i<=11; i++)
    {
        lt.A(i);
        lt.B(i);
        lt.C(i);
        lt.D(i);
        // lt.space();
        lt.E(i);
        lt.F(i);
        lt.G(i);
        lt.H(i);
        // lt.space();
        lt.I(i);
        lt.J(i);
        lt.K(i);
        lt.L(i);

        cout<<endl;
    }


    return 0;
}