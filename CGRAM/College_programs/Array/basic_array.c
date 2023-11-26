/*
we use 
#define <variable_name> <value>
to define a constant variable
*/


#include<stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE] , i;
    printf("Enter 10 numbers : \n");

    for (i=0;i<=SIZE-1;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n\nHere is the content of array : \n");
    for (i=0;i<=SIZE-1;i++)
    {
        printf("At index %d : %d\n",i,arr[i]);
    }


    return 0;
}