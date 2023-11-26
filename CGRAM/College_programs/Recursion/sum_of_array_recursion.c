#include<stdio.h>
#define SIZE 5
int sumArr(int *, int);
int main()
{
    int arr[SIZE]={0}, sum;
    printf("Enter 5 elements of the array : ");
    for (int i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum = sumArr(arr, SIZE);
    printf("Sum = %d", sum);

    return 0;
}

int sumArr(int *p, int size)
{
    if (size == 0)
        return 0;

    else
    {
        return *p + sumArr(++p, size-1);
    }
}