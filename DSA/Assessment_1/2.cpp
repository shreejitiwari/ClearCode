// 2.	Construct an array that takes input from user end.
// @Shreeji Tiwari

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Entr size of array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"OUTPUT : Entered elements of array : ";
    for (int i=0; i<size; i++)
    {
        cout<<arr[i]<<", ";
    }

    return 0;
}