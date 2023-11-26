#include<stdio.h>
int fib(int);
int main()
{
    int x, i;
    printf("Enter the range : ");
    scanf("%d", &x);
    for (i=0; i<=x; i++)
        printf("%d\n", fib(i));
    return 0;
}

int fib(int a)
{
    if (a==1)
        return 1;

    else if (a==0)
        return 0;

    else
    {
        return fib(a-1)+fib(a-2);
    }
}