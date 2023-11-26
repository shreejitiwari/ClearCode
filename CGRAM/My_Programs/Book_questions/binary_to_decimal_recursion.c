/*
EXPLANATION VIA EXAMPLE : 

111

= 1 + (1 + (1)*2)*2
= 1 + 2 + 4
= 7

1101
= 1 + (0 + (1 + (2))*2)*2
= 1 + 16
= 17

*/

#include<stdio.h>
int bin_to_decimal(int);

int main()
{
    int b, decimal;
    printf("Enter binary number : ");
    scanf("%d",&b);

    decimal = bin_to_decimal(b);
    printf("\nDecimal of %d = %d", b, decimal);

    return 0;
}

int bin_to_decimal(int binary)
{
    printf("run\n");
    if (binary <= 1)
    {   
        return (binary%10);
    }
    else
    {
        return  (binary%10) + (bin_to_decimal(binary/10))*2;
    }

}