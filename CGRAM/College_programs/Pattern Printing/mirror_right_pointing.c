#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter n : ");
    scanf("%d",&n);

    for (row=1;row<=2*n;row++)
    {
        if (row<=n)
        {
            for (col=1;col<=row;col++)
            {
                printf("*");
            }
            printf("\n");
        }

        else if (row>n)
        {
            for (col=1; col<=2*n+1-row; col++)
            {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}