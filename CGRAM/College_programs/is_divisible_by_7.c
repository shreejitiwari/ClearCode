#include<stdio.h>
int main()
{
    int num;
    printf("Enter any integer : ");
    scanf("%d",&num);
    
    if (num%7 == 0)
    {
        printf("%d is Divisible by 7",num);
    }
    else
    {
        printf("%d is not divisible by 7",num);
    }
    return 0;
}