#include<stdio.h>

union abc
{
    int a;
    char b;
}x;

void main()
{
    x.a = 'B';
    printf("Values of a = %d\n", x.a);
    printf("Value of b = %c\n",x.b );
    x.b=97;
    printf("Values of a = %d\n", x.a);
    printf("Value of b = %c\n",x.b );
    
}