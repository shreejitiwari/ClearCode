#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);

    switch (a>b)
    {
    case 0:
        printf("B is greater");
        break;

    case 1:
        printf("A is greater");
        break;

    }
}