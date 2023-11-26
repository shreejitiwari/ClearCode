// 6.	Take two arrays A1 and A2 as input and print the combined output of both arrays.
// @Shreeji Tiwari


#include<iostream>
using namespace std;

int main()
{
    int size1, size2;
    cout<<"Entr size of the two arrays : ";
    cin>>size1>>size2;
    int A1[size1], A2[size2];
    cout<<"Enter elements of array 1 : ";
    for (int i=0; i<size1; i++)
    {
        cin>>A1[i];
    }
    cout<<"Enter elements of array 2 : ";
    for (int i=0; i<size2; i++)
    {
        cin>>A2[i];
    }
    int merged_arr[size1+size2];
    cout<<"OUTPUT : Merged Array : ";
    for(int i=0; i<size1+size2; i++)
    {
        if (i<size1)
            merged_arr[i] = A1[i];
        
        else
            merged_arr[i] = A2[i-size1];

        cout<<merged_arr[i]<<", ";
    }

    return 0;
}