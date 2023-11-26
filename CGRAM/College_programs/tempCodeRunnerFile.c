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
    char ch;
    printf("Enter total number of column : ");
    scanf("%d", &n);
    while (row<=n)
    {
        ch = 'a';
        col = 1;
        while (col<=n)
        {
            printf(" %c",ch);
            ch++;
            col++;
        }

        printf("\n");
        row++ ;
        }

    return 0;
}