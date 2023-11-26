#include<stdio.h>
# define SIZE 3

int main()
{
    int a1[SIZE][SIZE], a2[SIZE][SIZE], diff_arr[SIZE][SIZE], row, col;
    printf("Enter matrix 1 : \n");
    for (row = 0; row<SIZE; row++)
    {
        for (col=0; col<SIZE; col++)
        {
            scanf("%d", &a1[row][col]);
        }
    }

    printf("\nEnter matrix 2 : \n");
    for (row = 0; row<SIZE; row++)
    {
        for (col=0; col<SIZE; col++)
        {
            scanf("%d", &a2[row][col]);
        }
    }

    printf("\n\nMatrix difference : \n");
    for (row = 0; row<SIZE; row++)
    {
        for (col=0; col<SIZE; col++)
        {
            diff_arr[row][col] = a1[row][col] - a2[row][col];
            printf("%d ",diff_arr[row][col]);
        }
        printf("\n");
    }




    return 0;
}