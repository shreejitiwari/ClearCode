#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("How many number you want to enter for sum : ");
    scanf("%d",&n);

    while (i<=n)
    {
        sum += i;
        i++;
    }

    printf("Sum of all entered numbers = %d",sum);
    return 0;
}