#include<stdio.h>
int main()
{   
    int a=10;
    int *p=&a;

    printf("a = %d",a);
    printf("\nAddress of 'a' = ",&a);
    printf("\nValue of p = %d",p);
    printf("\nValue at *p = %d", *p);
    printf("\nAddress of 'p' = %d", &p);
    printf("\nValue of 'a' = %d", *(&a));

    return 0;
}