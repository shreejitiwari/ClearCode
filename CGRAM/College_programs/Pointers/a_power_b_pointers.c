#include<stdio.h>
int main()
{
    int a,b,res=1;
    int *p=&a, *q=&b;

    printf("Enter a,b : \n");
    scanf("%d%d",p,q);

    for (int i=1; i<=(*q); i++)
    {
        res = (*p)*res;
    }

    printf("%d power %d = %d", *p,*q,res);


    return 0;
}