#include<stdio.h>
int main()
{
    unsigned int year;
    printf("Enter year : ");
    scanf("%d",&year);

    if (year%100 == 0)
    {
        if (year%400==0)
        {
            printf("It is a leap year.");
        }
        else
        {
            printf("It is not a leap year.");
        }
    }

    else
    {
        if (year%4 == 0)
        {
            printf("It is a leap year.");
        }
        else
        {
            printf("It is not a leap year");
        }
    }
    return 0;
}