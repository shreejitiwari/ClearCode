#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter any number : ");
    scanf("%d",&num);

    while (num>0)
    {
        num/=10;
        i++;
    }

    printf("Number of digits in input = %d",i);
    return 0;
}