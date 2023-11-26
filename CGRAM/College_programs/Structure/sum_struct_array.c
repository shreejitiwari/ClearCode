#include<stdio.h>

struct abc
{
    int a;
    int b;

}x[10];


void main()
{
    int i , suma=0, sumb = 0;
    for (i=0; i<10; i++)
    {
        printf("Enter a and b : ");
        scanf("%d%d", &x[i].a, &x[i].b);
        suma +=  x[i].a;
        sumb += x[i].b;
    }

    printf("Sum of a = %d\nSum of b = %d", suma, sumb);

}