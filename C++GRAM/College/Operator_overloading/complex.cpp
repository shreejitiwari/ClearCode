#include<iostream>
using namespace std;

class complex
{
    private:
        double real, imag;

    public:
        complex()
        {
            real=0; imag=0;
        }

        complex(double r, double i)
        {
            real = r;
            imag = i;
        }

        complex(complex &c)
        {
            real = c.real;
            imag = c.imag;
        }

        void get_val()
        {
            cout<<"Enter real and imaginary part of complex number : ";
            cin>>real>>imag;
        }

        void show_val()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }

        complex operator+(complex c)
        {
            complex temp;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;

            return temp;
        }


};





int main()
{
    complex c1(4,5),c2,c3;    
    c2.get_val();

    cout<<"c1 = ";c1.show_val();
    cout<<"c2 = ";c2.show_val();

    c3 = c1 + c2;
    cout<<"c3 = c1 + c2 = ";c3.show_val();
    


}