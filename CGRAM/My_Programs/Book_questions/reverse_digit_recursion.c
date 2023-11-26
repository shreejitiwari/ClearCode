// used recursion

#include<stdio.h>

void rev_digit(int);

int main()
{
    int n;
    printf("Enter any integer : ");
    scanf("%d", &n);
    rev_digit(n);

    return 0;
}

void rev_digit(int num)
{
    if (num==0)
        return;
    else
    {
        printf("%d",num%10);
        rev_digit(num/10);
    }
}