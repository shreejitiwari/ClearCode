#include<stdio.h>
int main()
{
    int a,b,sum;
    int *p=&a, *q; 
    q=&b;

    printf("Enter 2 numbers : \n");
    scanf("%d%d", p,q);
    sum = *p+*q;
    printf("Sum of %d and %d = %d", *p,*q,sum);

    return 0;
}