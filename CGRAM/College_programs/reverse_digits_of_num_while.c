
#include<stdio.h>
int main()
{
    int num,revnum=0;

    printf("Enter any number : ");
    scanf("%d",&num);

    while (num>0)
    {
        revnum = revnum*10 + num%10;
        num/=10;
  
    }

    // printf("Number of digits in input = %d",i);
    printf("Reverse of input = %d",revnum);
    return 0;
}