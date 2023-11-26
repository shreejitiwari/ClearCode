#include<stdio.h>
int main()
{
    int num,onum, revnum;
    printf("Enter any 5 digit number : ");
    scanf("%d",&onum);
    num = onum;
    revnum = num/10000;
    num = num%10000;
    revnum += 10*(num/1000);
    num = num%1000;
    revnum += 100*(num/100);
    num = num%100;
    revnum += 1000*(num/10);
    num = num%10;
    revnum += 10000*(num/1);
    num = num%1;
    
    printf("Reverse of %d = %d",onum,revnum);
    return 0;
}