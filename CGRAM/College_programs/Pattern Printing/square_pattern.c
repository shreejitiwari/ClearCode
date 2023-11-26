/*
12345
12345
12345
12345
12345
*/

#include<stdio.h>
int main()
{
    int row=1, col=1, n;
    printf("Enter total number of column : ");
    scanf("%d", &n);
    while (row<=n)
    {
        col = 1;
        while (col<=n)
        {
            printf(" %d",col);
            col++;
        }

        printf("\n");
        row++ ;
        }

    return 0;
}