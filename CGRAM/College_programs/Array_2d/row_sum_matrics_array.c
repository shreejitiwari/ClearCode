#include<stdio.h>


int main()
{
    int arr[3][3], row, col, row_sum_arr[3] = {0}, row_sum = 0;

    printf("Enter elements of 3x3 matrics : \n\n");

    for (int row=0;row<3;row++)
    {   
        for (int col=0;col<3;col++)
        {
            
            scanf("%d", &arr[row][col]);  // Even if we enter elements in matrics format this will be valid.
            
        }
        

    }


    printf("\nRow sum array : \n");
    for (int row=0;row<3;row++)
    {
        for (int col=0;col<3;col++)
        {
            row_sum_arr[row] += arr[row][col];
        }
        printf("%d\n", row_sum_arr[row]);

    }



    return 0;

}

