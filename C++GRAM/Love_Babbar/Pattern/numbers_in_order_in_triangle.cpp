/*

1 
2 3
4 5 6
7 8 9 10

*/


#include<iostream>
using namespace std;

int main()
{
    int  n=10;

    for (int row=1, count=1; count<=n; row++)
    {
        for (int col=1; col<=row; col++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;

        
    }


    return 0;
}