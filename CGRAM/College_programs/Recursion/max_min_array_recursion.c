#include<stdio.h>
#define SIZE 5

int max_arr(int *, int, int);
int min_arr(int *, int, int);

int main()
{
    int arr[SIZE]={0}, max, min;
    printf("Enter 5 elements of the array : ");
    for (int i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = max_arr(arr, SIZE, arr[0]);
    min = min_arr(arr, SIZE, arr[0]);

    printf("Max = %d\n", max);
    printf("Min = %d", min);

    return 0;
}

int max_arr(int *p, int size, int max)
{
    if (size == 0)
        return max;

    else
    {
        if (max<*p)
            max = *p;
        // printf("%d, ", *p);
        max_arr(++p, size-1,max );
    }
}

int min_arr(int *p, int size, int min)
{
    if (size == 0)
        return min;

    else
    {
        if (min>*p)
            min = *p;
        // printf("%d, ", *p);
        min_arr(++p, size-1,min);
    }
}