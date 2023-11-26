#include<stdio.h>
int main()
{
    int num;
    printf("Enter any integer : ");
    scanf("%d",&num);
    
    if (num%2 == 0)
    {
        printf("%d is Even",num);
    }
    else
    {
        printf("%d is Odd",num);
    }
    return 0;
}