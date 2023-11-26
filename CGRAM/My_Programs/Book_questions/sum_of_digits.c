// used recursion
#include<stdio.h>

int get_digitSum(int);
int main()
{
    int num, sum;
    printf("Enter any Integer : ");
    scanf("%d", &num);
    sum = get_digitSum(num);
    printf("Sum of digits of %d = %d",num,sum);
    return 0;
}

int get_digitSum(int n)
{
    if (n==0)
        return 0;

    else
    {
        return n%10 + get_digitSum(n/10);
    }
    
}