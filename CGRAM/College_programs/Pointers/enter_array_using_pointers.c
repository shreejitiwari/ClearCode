#include<stdio.h>
#define SIZE 5
int main()
{
    int arr[SIZE], i, *p;
    p = arr;
    printf("Enter %d numbers : ", SIZE);
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", p);
        p++;
    }

    p=arr;
    for (i=0; i<SIZE; i++)
    {
        printf("Value at index %d = %d\n", i, *p);
        p++;
    }
}