#include<stdio.h>
# define SIZE 5
// to define constant array size

int main()
{
    int a1[SIZE], a2[SIZE], new_array[SIZE*2];  // size*2 because new array is concatenation of previous array of size SIZE. so new size = SIZE + SIZE
    printf("Enter elements for array 1 : \n");
    for (int i=0;i<SIZE;i++)     // to store elements in array 1
    {
        scanf("%d",&a1[i]);
        // new_array[i]= a1[i];
    }

    printf("\nNow enter elements for array 2 : \n");
    for (int i =0; i<SIZE;i++)        // to store elements in array 2
    {
        scanf("%d",&a2[i]);
        // new_array[i+SIZE] = a2[i];
    }

    for (int i=0;i<SIZE; i++)      // to store elements in new_array
    {
        new_array[2*i] = a1[i];
        new_array[2*i+1] = a2[i];

    }


/*
alternate values are being stored. So for
Even : 2i
Odd : 2i+1

*/

    printf("\nnHere is the new array : \n");
    for (int i=0;i<2*SIZE;i++)       // to print new_array
    {
        printf("%d\n",new_array[i]);
    }

    return 0;
}