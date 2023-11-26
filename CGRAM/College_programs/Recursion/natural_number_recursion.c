#include<stdio.h>
void printNatural(int);
int main()
{
    int x, i;
    printf("Enter the range : ");
    scanf("%d", &x);
    printNatural(x);
    return 0;
}

void printNatural(int a)
{
    if (a==0)
        return;
    // printf("%d\n",a);
    printNatural(a-1);
    printf("%d\n",a);
}