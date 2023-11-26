#include<stdio.h>

int main()
{
    int a1[3][3],a2[3][3], row, col, mul_arr[3][3]={0}, elem=0;

    printf("Enter elements of 1st 3x3 matrics : \n");

    for (int row=0;row<3;row++)
    {   
        for (int col=0;col<3;col++)
        {
            
            scanf("%d", &a1[row][col]);  // Even if we enter elements in matrics format this will be valid.
            
        }
        

    }

    printf("\nEnter elements of 2nd 3x3 matrics : \n");
    for (int row=0;row<3;row++)
    {   
        for (int col=0;col<3;col++)
        {
            
            scanf("%d", &a2[row][col]);  // Even if we enter elements in matrics format this will be valid.
            
        }
        

    }

    
    for (int row=0;row<3;row++)
    {   
        for (int col=0;col<3;col++)
        {   
            elem = 0;
            for (int i=0;i<3;i++)
            {   
                elem += a1[row][i]*a2[i][col]; 

            }

            mul_arr[row][col] = elem;
            elem = 0;
        }
        printf("\n");        

    }

    printf("\n\nSum array : \n");
    for (int row=0; row<3; row++)
    {
        for (int col = 0;col<3; col++)
        {
            printf("%d ", mul_arr[row][col]);
        }
        printf("\n");
    }


    return 0;

}