#include<stdio.h>
# define SIZE 5

int main()
{
    int arr[SIZE], elem1;
    printf("Enter elements of array : \n");
    for (int i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }


    for (int i=0;i<SIZE-1;i++)
    {
        // elem1 = arr[i];
        for (int j=0;j<SIZE-1-i;j++)
        {   
            if (arr[j]>arr[j+1])
            {   elem1 = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = elem1;

            }
        }
    }
                                   
    printf("\n\nSORTED ARRAY : \n\n");
    for (int i=0;i<SIZE;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}