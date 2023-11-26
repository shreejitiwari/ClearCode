#include<stdio.h>
# define SIZE 5  // for constant array size

int main()
{
    int a1[SIZE], a2[SIZE], sum_array[SIZE];
    printf("Enter 5 elements for array 1 : \n");
    for (int i=0;i<SIZE;i++)   // for array 1
    {
        scanf("%d",&a1[i]);
    }


    printf("\nNow enter elements for array 2 : \n");
    for (int i=0;i<SIZE;i++)   // for array 2
    {
        scanf("%d",&a2[i]);
    }

    printf("\n\nNew array : \n");
    for (int i=0;i<SIZE;i++)   // to sum and print array
    {
        sum_array[i] = a1[i] + a2[i];
        printf("%d\n",sum_array[i]);
    }


    return 0;
}