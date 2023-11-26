// If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. 

#include<stdio.h>
int main()
{
    int num, sum, original_num;
    printf("Enter a 5 digit number : ");
    scanf("%d",&original_num);
    num = original_num;
    sum = num/10000;
    num =  num%10000;

    sum += num/1000;
    num =  num%1000;    
    
    sum += num/100;
    num =  num%100;
    
    sum += num/10;
    num =  num%10;

    sum += num/1;
    num = num%1;

    printf("Sum of digits of %d = %d",original_num, sum);

    return 0;
}