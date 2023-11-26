#include<stdio.h>
int main()
{
    int num,i,sum=0;

    printf("Enter any number : ");
    scanf("%d",&num);

    while (num>0)
    {
        sum += num%10;
        num/=10;
        i++;
    }

    printf("Number of digits in input = %d",i);
    printf("\nSUM of digits in input = %d",sum);
    return 0;
}