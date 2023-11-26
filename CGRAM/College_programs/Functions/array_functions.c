#include<stdio.h>
# define SIZE 5
void displayArray(int *, int);
int sumArray(int *, int);

int main()
{
    int arr[SIZE], i, sum;
    printf("Enter %d Number : ",SIZE);
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    displayArray(arr, SIZE);
    sum = sumArray(arr, SIZE);
    printf("\n\nSum of array = %d", sum);
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