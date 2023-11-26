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


    for (int i=0;i<=SIZE-1;i++)
    {
        // elem1 = arr[i];
        for (int j=i+1;j<=SIZE-1;j++)
        {   
            if (arr[i]>arr[j])
            {   elem1 = arr[i];
                arr[i] = arr[j];
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