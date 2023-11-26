#include<iostream>
using namespace std;

int main()
{
    int num, i=0;
    cout<<"Enter number : ";
    cin>>num;

    for (i=2;i<num; i++)
    {
        if (i%2!=0 && i%3!=0 && (i%6 ==1 || i%6 == 5) && i%5!=0)
            cout<<i<<endl;

        else if (i==2 || i==3)
        {
            cout<<i<<endl;
        }
        

    }

    return 0;
}