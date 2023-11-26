#include<stdio.h>
#define SIZE 5

void dispArr(int *, int);
int main()
{
    int arr[SIZE]={0};
    printf("Enter 5 elements of the array : ");
    for (int i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    dispArr(arr, SIZE);

    return 0;
}

void dispArr(int *p, int size)
{
    if (size == 0)
        return;

    else
    {
        printf("%d, ", *p);
        dispArr(++p, size-1);
    }
}