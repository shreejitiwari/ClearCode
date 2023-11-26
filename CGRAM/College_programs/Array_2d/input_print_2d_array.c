#include<stdio.h>
// # define SIZE 5

/*

Ways to initialise 2D array : 
1) int arr[3][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};

2) int arr[3][3] = {1,2,3,4,5,6,7,8,9};
3) int arr[3][3] ---> will store garbage value
4) int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
5) int arr[3][3] = {0};

*/

int main()
{
    int arr[3][3], row, col;

    printf("Enter elements of 3x3 matrics : \n\n");

    for (int row=0;row<3;row++)
    {
        for (int col=0;col<3;col++)
        {
            // printf("Element for row = %d, column = %d : ", row, col);
            scanf("%d", &arr[row][col]);  // Even if we enter elements in matrics format this will be valid.

        }
        // printf("\n");

    }


    printf("\n\nHere is the 2-D array created from your input : \n\n");
    for (int row=0;row<3;row++)
    {
        for (int col=0;col<3;col++)
        {
            printf("%d\t",arr[row][col]);
        }
        printf("\n");

    }


    return 0;
}