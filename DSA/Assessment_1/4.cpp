// 2.	Construct an array that takes input from user end.
// @Shreeji Tiwari

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Entr size of array : ";
    cin>>size;

    int arr[size], avg = 0;
    cout<<"Enter elements of array : ";
    for (int i=0; i<size; i++)
    {
        cin>>arr[i];
        avg += arr[i];
    }

    avg = avg/size;
    cout<<"OUTPUT : Average of all elements = "<<avg;

    return 0;
}