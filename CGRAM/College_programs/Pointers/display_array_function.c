#include<stdio.h>
# define SIZE 5
void displayArray(int *p, int x);
void main()
{
    int arr[SIZE], i;
    printf("Enter %d Number : ",SIZE);
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    displayArray(arr, SIZE);
}

void displayArray(int *p, int x)
{
    int i =0;
    for (i=0; i<x; i++)
    {
        printf("Value at index %d = %d\n", i, *p);
        p++;
    }
}