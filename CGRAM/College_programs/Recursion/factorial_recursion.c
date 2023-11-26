#include<stdio.h>
int fact(int);
int main()
{
    int x,f;
    printf("Enter a value for factorial : ");
    scanf("%d",&x);
    f = fact(x);
    printf("%d ! = %d", x, f);
    return 0;
}

int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    else 
    {
        return n*fact(n-1);
    }
}