#include<stdio.h>
int main()
{
    int num,revnum = 0, temp;
    printf("Enter any number : ");
    scanf("%d",&num);
    temp = num;
    
    while  (temp>0)
    {
        revnum = revnum*10 + temp%10;
        temp /= 10;

    }

    if (revnum == num)
    {
        printf("Palindrome.. hurray !!");

    }
    else
        printf("Not a palindrome...!! ");

    return 0;
}