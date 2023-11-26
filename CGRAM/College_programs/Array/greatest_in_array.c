/*
we use 
#define <variable_name> <value>
to define a constant variable
*/


#include<stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] , i, max;
    printf("Enter 5 numbers : \n");

    for (i=0;i<=SIZE-1;i++)
    {
        scanf("%d",&arr[i]);
        
    }

    max = arr[0];

    for (i=0;i<=SIZE-1; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
    }
    
    printf("\n\nGreatest element of the array = %d", max);

    return 0;
}