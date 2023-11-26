#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("Entered value of \na = %d\nb = %d",a,b);
    
    a = a+b;
    b = a-b;
    a = a-b;

    printf("\nAfter swaping value of \na = %d\nb = %d",a,b);

    return 0;
}