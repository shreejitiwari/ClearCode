#include<stdio.h>

int add(int , int);

int main()
{
    int a,b,sum;
    printf("Enter two nos : ");
    scanf("%d%d", &a,&b);
    sum = add(a,b);
    printf("%d + %d = %d", a,b,sum);
    return 0;
}

int add(int n1, int n2)
{
    return n1+n2;
}