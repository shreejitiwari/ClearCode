#include<stdio.h>
struct xyz
{
    int p;
    int q;

};

void main()
{
    struct xyz s1;
    printf("Enter two numbers : ");
    scanf("%d%d",&s1.p,&s1.q);
    printf("Value of p = %d\nValue of q = %d",  s1.p, s1.q);
    
    
}
