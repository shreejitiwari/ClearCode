#include<iostream>
using namespace std;

void swap(int *q, int *p)
{
    int temp = *q;
    *q = *p;
    *p = temp;
}

void quicksort(int arr[], int low, int high)
{
    // Base case: If the array has less than 2 elements, it is already sorted
    if (low < high)
    {
        // Choose the rightmost element as the pivot
        int pivot = arr[high];
        
        // Initialize the partition index
        int i = low - 1;
        
        // Partition the array
        for (int j = low; j < high; j++)
        {
            // If the current element is smaller than or equal to the pivot
            if (arr[j] <= pivot)
            {
                // Increment the partition index and swap the elements
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
        
        // Swap the pivot element with the element at the partition index
        swap(&arr[i + 1], &arr[high]);
        
        // Recursively sort the subarrays before and after the partition
        quicksort(arr, low, i);
        quicksort(arr, i + 2, high);
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    quicksort(arr, 0, n-1);
    cout<<"The sorted array is: ";
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    return 0;
}
