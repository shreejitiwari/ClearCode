#include<iostream>
using namespace std;

void Bubble_sort(int a[], int size)
{
    int temp;
    for (int i=0; i<size-1; i++)
    {
        for (int j=0; j<size-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int a[size];
    cout<<"Enter the elements of array: ";
    for (int i=0; i<size; i++)
    {
        cin>>a[i];
    }
    Bubble_sort(a, size);
    cout<<"Sorted array is: ";
    for (int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}