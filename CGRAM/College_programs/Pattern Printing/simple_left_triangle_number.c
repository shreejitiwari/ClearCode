#include<stdio.h>
int main()
{
    int row=1, col=1, n;
    printf("Enter number of rows : ");
    scanf("%d", &n);

    while (row<=n)
    {   
        col = 1;
        while (col<=row)
        {
            printf("%d",col);
            col++;
        }
        printf("\n");
        row++;
    }
}