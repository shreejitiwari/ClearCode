#include<stdio.h>
# define SIZE 5
int sumArray(int *p, int x);
void main()
{
    int arr[SIZE], i, sum;
    printf("Enter %d Number : ",SIZE);
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum = sumArray(arr, SIZE);
    printf("Sum of array = %d", sum);
}

int sumArray(int *p, int x)
{
    int i =0, sum=0;
    for (i=0; i<x; i++)
    {
        sum += *p;
        p++;
    }
    return sum;
}