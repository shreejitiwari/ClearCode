#include<iostream>
using namespace std;

void print_array(int a[], int size)
{
    cout<<"Sorted array is: ";
    for (int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void Insertion_sort(int a[], int size)
{
    for (int i=0; i<size; i++)
    {
        int key = a[i];

        for (int j=i-1; j>=0 && key < a[j]; j--)
        {
            a[j+1] = a[j];
            a[j] = key;
        }
        print_array(a, size);        
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
    Insertion_sort(a, size);
    return 0;
}