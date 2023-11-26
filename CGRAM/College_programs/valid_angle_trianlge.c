#include<stdio.h>
int main()
{
    unsigned int a1,a2,a3;
    printf("Enter three angles of trianlge (in degrees): ");
    scanf("%d%d%d",&a1,&a2,&a3);
    if (a1+a2+a3 == 180)
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("It is an invalid Triangle!!");
    }
    return 0;
}