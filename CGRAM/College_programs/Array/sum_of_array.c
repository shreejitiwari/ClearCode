/*
we use 
#define <variable_name> <value>
to define a constant variable
*/


#include<stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE] , i, sum=0;
    printf("Enter 10 numbers : \n");

    for (i=0;i<=SIZE-1;i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    
    // for (i=0;i<=SIZE-1;i++)
    // {
    //     sum += arr[i];
    // }

    printf("\n\nSum of the array = %d", sum);

    return 0;
}