/*

1 
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/


#include<iostream>
using namespace std;

int main()
{
    int row=1,col=1, count=1, n=5;

    for (row=1; row<=n; row++ )
    {   
        
        // for (col=1, count = row; col<=row; col++, count++)
        // {
        //     cout<<count<<" ";
        // }
        // // count--;
        // cout<<endl;

        // OR

        for (col=row; col<=(2*row)-1; col++)
        {
            cout<<col<<" ";
        }
        // count--;
        cout<<endl;


    }



    return 0;
}