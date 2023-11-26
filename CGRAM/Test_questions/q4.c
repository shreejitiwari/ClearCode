#include<stdio.h>
# define SIZE 10
int main()
{
    int arr[SIZE], num_f, i, found = 0;

    // to input array elements
    for (i=0; i<SIZE; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to find in the array : ");
    scanf("%d", &num_f);

    // printf("")
    for (i = 0; i<SIZE; i++)
    {
        if (arr[i] == num_f)
        {
            printf("Element found at index : %d\n",i);
            found = 1;
        }
    }

    if (!found)
    {
        printf("\n%d is not found in the array !", num_f);
    }


    return 0;
}