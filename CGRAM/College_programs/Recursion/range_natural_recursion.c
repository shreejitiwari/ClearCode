#include<stdio.h>
void printNatural(int, int);
int main()
{
    int x, y, i;
    printf("Enter the range : ");
    scanf("%d%d", &x, &y);
    printNatural(x,y);
    return 0;
}

void printNatural(int a, int b)
{
    if (a==b+1)
        return;
    printf("%d\n",a);
    printNatural(a+1, b);
    // printf("%d\n",b);
}