#include<stdio.h>
int main()
{
    int row=1,col=1, n;
    printf("Enter number of column : ");
    scanf("%d", &n);

    while (row<=n)
    {
        col = 1;
        while (col <= n-row+1)
        {
            printf("* ");
            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}