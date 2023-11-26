#include<stdio.h>
int main()
{
    int unit;float tax;
    printf("Enter electricity unit used : ");
    scanf("%d",&unit);

    if (unit<=50)
        tax = 0.50*unit;
    else if (unit <= 150)
        tax = 50*0.50 + (unit-50)*0.75;
    else if (unit <= 250)
        tax = 50*0.50 + 100*0.75 + (unit-150)*1.20;
    else if (unit > 250)
        tax = 50*0.50 + 100*0.75 + 100*1.20 + (unit-250)*1.50;

    tax += 0.2*tax;
    printf("Electricity bill : %.2f",tax);
    return 0;
}