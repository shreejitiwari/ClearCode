#include<iostream>
using namespace std;

void printNto1(int n, int i=1)
{
    if (i>n) return;

    printNto1(n, 1+i);
    cout<<i<<endl;
}

int main()
{
    int n;
    cout<<"Enter the print range n to 1 (value for n) : ";
    cin>>n;
    printNto1(n);
    return 0;
}