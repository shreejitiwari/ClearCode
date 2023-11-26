#include<stdio.h>
int main()
{
    int mn;
    printf("Enter month number : ");
    scanf("%d",&mn);

    if (mn == 1)
        printf("January");
    else if (mn == 2)
        printf("February");
    else if (mn == 3)
        printf("March");
    else if (mn == 4)
        printf("April");
    else if (mn == 5)
        printf("May");
    else if (mn == 6)
        printf("June");
    else if (mn==7)
        printf("July");
    else if (mn==8)
        printf("August");
    else if (mn==9)
        printf("September");
    else if (mn==10)
        printf("October");
    else if (mn==11)
        printf("November");
    else if (mn==12)
        printf("December");
    else 
        printf("Invalid month number");
    return 0;
}