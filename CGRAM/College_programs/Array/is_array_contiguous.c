#include<stdio.h>
#define SIZE 5

int main()
{
    long arr[SIZE] = {0},i;

    for (i=0;i<=SIZE-1; i++)
    {
        printf("\nAddress of %d at %d index element  =  %d",arr[i],i,&arr[i]);
    }

    return 0;
}