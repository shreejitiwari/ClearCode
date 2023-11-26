/*

    *
   ***
  *****
 *******
  *****
   ***
    *         


*/


#include<iostream>
using namespace std;

int main()
{
    int n, row, col, col2;
    cout<<"Enter n : ";
    cin>>n;
    // n = 4;

    for (row = 1; row<=n;row++)
    {
        for (col2=1; col2<=n-row; col2++ )
        {
            cout<<" ";
        }

        for (col=1; col<=2*row-1 ; col++)
        {
            cout<<"*";

        }
        cout<<endl;

    }


    for (row= row-2; row>=1; row--)
    {
        for (col2=1; col2<=n-row; col2++ )
        {
            cout<<" ";
        }

        for (col=1; col<=2*row-1 ; col++)
        {
            cout<<"*";

        }
        cout<<endl;

    }



}