#include<iostream>
using namespace std;

int sum(int , int);
int sum(int , int , int);
float sum(float, int);
char sum(char, char);



int main()
{
    int i1=5,i2=3;
    int i3 = sum(i1,i2);
    int i4 = sum(i1,i2,i3);
    float f1=4.5;
    float f2 = sum(f1, i1);
    char c1='a', c2 = 'b';
    char c3 = sum(c1,c2);

    cout<<"i3 = "<<i3<<endl;
    cout<<"i4 = "<<i4<<endl;
    cout<<"f2 = "<<f2<<endl;
    cout<<"c3 = "<<c3;


    return 0;
}


int sum(int a, int b)
{
    return (a+b);
}

int sum(int a, int b, int c)
{
    return (a+b+c);
}

float sum(float f, int i)
{
    return (f+i);
}

char sum(char c1, char c2)
{
    return (c1+c2);
}