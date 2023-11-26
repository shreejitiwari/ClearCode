#include<stdio.h>
int main()
{
    double msal,annual_sal, tax;
    printf("Enter your monthly salary : ");
    scanf("%lf",&msal);
    annual_sal = 12*msal;
    // printf("%f",annual_sal);

    if (annual_sal<=500000)
        tax = 0;
    else
        if (annual_sal<=1000000)
        {
            tax = (annual_sal-500000)*0.1;
        }
        else if (annual_sal<=1500000 && annual_sal>1000000)
        {
            tax = 50000 + (annual_sal-1000000)*0.15;
        }
        else
        {
            tax = 125000 + (annual_sal-1500000)*0.2;
        }

    printf("Tax on annual salary = %.2lf",tax);
    return 0;
}