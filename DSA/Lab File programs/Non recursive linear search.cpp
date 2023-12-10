#include<iostream>
using namespace std;


int Linear_search(int a[], int size, int key)
{
    for (int i=0; i<size; i++)
    {
        if (a[i]==key)
            return i;
    }
    return -1;
}

int main()
{
    int *array, size=0, element;
    cout<<"Enter array size : ";
    cin>>size;
    array = new int[size]; 
    cout<<"Enter array elements : ";
    for (int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    cout<<"Enter element to search in the array : ";
    cin>>element;

    int index = Linear_search(array, size, element);
    if (index==-1)
        cout<<element<<" not found in the given array !"<<endl;
    
    else
        cout<<element<<" Found at "<<index<<" in the given array !"<<endl;

    return 0;
}