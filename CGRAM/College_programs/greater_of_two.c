#include<stdio.h>
// using trinary operator "?:"
int main()
{
    int a,b;
    printf("Enter two nos : ");
    scanf("%d%d",&a,&b);
    (a>b)?printf("%d",a):printf("%d",b);

    return 0;
}