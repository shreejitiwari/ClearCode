#include<stdio.h>
int sumNatural(int);
int main()
{
    int x, i;
    printf("Enter the range : ");
    scanf("%d", &x);
    printf("Sum of %d natural numbers = %d",x,sumNatural(x));
    return 0;
}

int sumNatural(int a)
{
    if (a==0)
        return 0;
    else
        return a + sumNatural(a-1);
}