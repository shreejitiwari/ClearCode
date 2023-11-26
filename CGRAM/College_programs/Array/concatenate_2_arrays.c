#include<stdio.h>
# define SIZE 5
// constant array size

int main()
{
    int a1[SIZE], a2[SIZE], new_array[SIZE*2];
    printf("Enter elements for array 1 : \n");
    for (int i=0;i<SIZE;i++)   // to store elements in array 1
    {
        scanf("%d",&a1[i]);
        // new_array[i]= a1[i];
    }

    printf("\nNow enter elements for array 2 : \n");
    for (int i =0; i<SIZE;i++)  // to store elements in array 2
    {
        scanf("%d",&a2[i]);
        // new_array[i+SIZE] = a2[i];
    }

    for (int i=0;i<SIZE; i++)    // to store elements in new array 
    {
        new_array[i] = a1[i];
        new_array[(SIZE+i)] = a2[i];

    }

    printf("\nnHere is the new array : \n");
    for (int i=0;i<2*SIZE;i++)        // to print new_array elements
    {
        printf("%d\n",new_array[i]);
    }

    return 0;
}