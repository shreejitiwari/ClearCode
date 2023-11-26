#include<stdio.h>
void left_triangle(int,int);

int main()
{
    int row, col;
    printf("Enter number of rows : ");
    scanf("%d",&row);

    left_triangle(row, col);

    return 0;

}

void left_triangle(int row, int col)
{

    if (row < col)
        return;

    else
    {
        printf("*");
    }

}