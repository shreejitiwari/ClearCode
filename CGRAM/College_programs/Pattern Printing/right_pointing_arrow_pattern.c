// Alternate : just add two programs

#include<stdio.h>
int main()
{
    int row,col,n,t=1;
    printf("Enter n : ");
    scanf("%d",&n);

    for (row=1;row<=2*n-1;row++)
    {
        if (row<=n)
        {
            for (col=1;col<=row;col++)
            {
                printf("*");
            }
            printf("\n");
        }
        

        else
        {
            for (int col1=1;col1<=n-t;col1++)
            {
                printf("*");
            }
            printf("\n");
            t++;

        }
    }

    return 0;
}