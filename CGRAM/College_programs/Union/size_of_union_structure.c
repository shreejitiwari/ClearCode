#include<stdio.h>
union abc
{
    int a;
    double b;
}x;

struct xyz
{
    int a;
    double b;
}y;


void main()
{
    printf("Size of union = %d", sizeof(x));
    printf("\nSize of structure = %d", sizeof(y));
}



