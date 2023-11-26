// 7.	Calculate the total c and print the inserted records either in ascending or in descending order.
// @Shreeji Tiwari

#include<iostream>
using namespace std;

int * bubble_sort(int a[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    return a;
}

int main()
{
    int size;
    int c;
    cout<<"Enter size of the array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter array's elements : ";
    for (c=0; c<size; c++)
    {
        cin>>arr[c];
    }

    cout<<"Total number of elements in array = "<<c<<endl;
    int *sorted_arr = bubble_sort(arr, size);

    cout<<"Sorted array is here : ";
    for (int i =0; i<size; i++)
    {
        cout<<sorted_arr[i]<<",";
    }
    
    return 0;


}