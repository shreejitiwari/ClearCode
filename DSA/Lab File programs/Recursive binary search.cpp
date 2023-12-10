#include<iostream>
using namespace std;

int Binary_search(int a[], int left, int right, int key)
{
    if (left<=right)
    {
        int middle = (left+right)/2;
        if (key == a[middle])
            return middle;

        else if (key < a[middle])
            return Binary_search(a, left, middle-1, key);
        
        else if (key > a[middle])
            return Binary_search(a, middle+1, right, key);        
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

    int index = Binary_search(array, 0, size-1, element);
    if (index==-1)
        cout<<element<<" not found in the given array !"<<endl;
    
    else
        cout<<element<<" Found at "<<index<<" in the given array !"<<endl;

    return 0;
}