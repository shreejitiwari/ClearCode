/*
 a a a a a
 b b b b b
 c c c c c
 d d d d d
 e e e e e
*/

#include<stdio.h>
int main()
{
    int row=1, col=1, n;
    char ch='a';
    printf("Enter total number of column : ");
    scanf("%d", &n);
    while (row<=n)
    {
        
        col = 1;
        while (col<=n)
        {
            printf(" %c",ch);
     
            col++;
        }
        ch++;
        printf("\n");
        row++ ;
        }

    return 0;
}