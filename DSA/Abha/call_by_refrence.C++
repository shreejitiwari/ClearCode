#include<iostream>
using namespace std;

void func(int& aa, int& bb)
{
    int add = aa + bb;
    cout<<"Addtion of aa and bb = "<<add<<endl;
    cout<<"After swapping"<<endl;
    swap(&aa,&bb);
    cout<<" aa = "<<aa<<endl;
    cout<<"bb = "<<bb<<endl;
}

int main()
{
    int aa, bb;
    cout<<"Enter the value of aa "<<endl;
    cin>>aa;
    cout<<"Enter the value of bb "<<endl;
    cin>>bb;
    func(aa, bb);

    return 0;
}