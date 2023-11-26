// WAP to display sum of first n number of even numbers.
/*This method is more efficient than using if i%2 == 0 method. as this will use less time.*/
#include<stdio.h>
int main()
{
    int n,i=2,sum=0;
    printf("How many number you want to enter for sum : ");
    scanf("%d",&n);

    while (i<=2*n)
    {
        
        sum += i;
        
        i+=2;
    }

    printf("Sum of all entered numbers = %d",sum);
    return 0;
}