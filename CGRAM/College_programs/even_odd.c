#include<stdio.h>
int main()
{   
    int a;
    printf("Enter any integer : ");
    scanf("%d",&a);
    (a%2==0)?printf("Even"):printf("Odd");

    return 0;
}