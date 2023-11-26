#include<stdio.h>
int main()
{
    int c,p,b,res;
    printf("Enter base : ");
    scanf("%d",&b);
    printf("Enter power : ");
    scanf("%d",&p);

    res = 1;
    c=1;
    while (c<=p)
    {
        res *= b;
        c++;
    }

    printf("%d to the power %d = %d",b,p,res);



    return 0;
}