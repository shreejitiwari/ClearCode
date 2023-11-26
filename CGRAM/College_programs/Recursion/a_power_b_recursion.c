#include<stdio.h>
int power(int, int);
int main()
{
    int a, b, p;
    printf("Enter a and b : ");
    scanf("%d%d", &a,&b);
    p = power(a,b);
    printf("%d^%d = %d", a,b,p);
    return 0;
}

int power(int x,int y)
{
    if (y==1)
        return x;
    else
        return x*power(x,y-1);
}