#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter n : ");
    scanf("%d",&n);

    for (row=1; row<=n; row++)
    {

        for (col=1;col<=n-row+1;col++)
        {
            printf("*");
        }
   

        for (col=1; col<=2*row-3; col++)
        {
            printf(" ",col);
        }

        if (row==1)
        {
            for (int i =0; i<n-row; i++)
                printf("*");
        }

        else
        {
            for (col=1; col<=n-row+1;col++)
            {
                printf("*");
            }
        }
        printf("\n");
        
 
    }
    return 0;
}