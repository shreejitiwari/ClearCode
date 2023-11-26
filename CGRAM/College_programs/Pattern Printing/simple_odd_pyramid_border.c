#include<stdio.h>
int main()
{
    int row=1, col=1, n, col1;
    printf("Enter n : ");
    scanf("%d", &n);

    while (row<=n)
    {
        col = col1 = 1;
        while(col1 <= n-row)
        {
            printf(" ");
            col1++;
        }

        // col = 1;
        while (col<=2*row-1)

        {   
            if (col == 1 || col == 2*row-1)
            {
                printf("*");
                col++;
            }

            else
            {
                printf(" ");
                col++;
            }
        }

        printf("\n");
        row++;
    }

    return 0;
}