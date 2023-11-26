// 2.	WAP such that the total time complexity is O(n2).

#include<iostream>
using namespace std;

int main()
{
    int a[3][3];
    cout<<"Enter elements for a matrix of 3x3 : "<<endl;

    for (int i=0; i<3; i++)  //O(n2)
    {
        for (int j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }


    cout<<"Elements in the matrix are : "<<endl;
    for (int i=0; i<3; i++)  //O(n2)
    {
        for (int j=0; j<3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;

}