/*
1. Start with the entire sorted array.
2. Set the left pointer to the first element of the array and the right pointer to the last element.
3. Calculate the middle index as (left + right) / 2.
4. Compare the middle element with the target value:
    - If they are equal, return the middle index as the result.
    - If the middle element is greater than the target value, set the right pointer to (middle - 1) and go to step 3.
    - If the middle element is less than the target value, set the left pointer to (middle + 1) and go to step 3.
5. Repeat steps 3-4 until the left pointer is greater than the right pointer.
6. If the left pointer is greater than the right pointer, the target value is not present in the array. Return -1 as the result.
*/

#include<iostream>
using namespace std;

int Binary_search(int a[], int size, int key)
{
    int left = 0, right=size-1, middle;
    middle = (left+right)/2;
    while (left<=right)
    {
        if (a[middle] == key)
            return middle;

        else if (key < a[middle])
            right = middle-1;
        
        else if (key>a[middle])
            left = middle+1;

        middle = (left+right)/2;
    }

    return -1;
}

int main()
{
    int *array, size=0, element;
    cout<<"Enter array size : ";
    cin>>size;
    array = new int[size]; 
    cout<<"Enter sorted array elements : ";
    for (int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    cout<<"Enter element to search in the array : ";
    cin>>element;

    int index = Binary_search(array, size, element);
    if (index==-1)
        cout<<element<<" not found in the given array !"<<endl;
    
    else
        cout<<element<<" Found at "<<index<<" in the given array !"<<endl;

    return 0;
}