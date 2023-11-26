#include<stdio.h>
int main()
{
    int num, c, n1=1,n2=2,n3=3;
    printf("How many terms you want in fibonacci series : ");
    scanf("%d", &num);

    if (num==1)
        printf("%d, ", n1);
    else if (num==2)
    {
        printf("%d, ", n1);
        printf("%d, ", n2);
    }

    else
    {
        printf("%d, ", n1);
        printf("%d, ", n2);
        for (c=3; c<=num; c++)
        {
            printf("%d, ", n3);
            n1 = n2;
            n2 = n3;
            n3 = n1+n2;

        }

    }
    return 0;
}