#include<stdio.h>
int main()
{
    int num, row, col, col1;
    printf("Enter number of rows : ");
    scanf("%d",&num);

    for (row=1; row<=num; row++)
    {
        for (col1 = 1; col1<row; col1++)
        {
            printf(" ");
        }

        for (col=1;col<=num-row+1; col++)
        {
            printf(" *");
        }

        printf("\n");


    }

    return 0;
}