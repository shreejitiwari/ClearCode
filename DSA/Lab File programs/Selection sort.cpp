#include<iostream>
using namespace std;

// write a function to print array
void print_array(int a[], int size)
{
    cout<<"Sorted array is: ";
    for (int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void Selection_sort(int a[], int size)
{
    int min, temp;
    for (int i=0; i<size-1; i++)
    {
        min = a[i];
        for (int j=i+1; j<size; j++)
        {
            if (min>a[j])
            {
                min = a[j];
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                print_array(a, size);
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
    Selection_sort(a, size);
    return 0;
}


