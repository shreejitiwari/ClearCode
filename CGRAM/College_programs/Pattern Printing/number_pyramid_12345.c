#include<stdio.h>

int main()
{
    int row, col,n, c=1;
    printf("Enter number of rows : ");
    scanf("%d", &n);

    for (row=1; row<n; row++)
    {
        for (col=1;col<=n-row;col++)
        {
            printf(" ");
        }

        for (col=1;col<=row; col++)
        {
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }

    return 0;
}