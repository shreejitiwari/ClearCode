#include<stdio.h>

int main()
{
    float p,r,t,si;
    printf("\nThis is a program to calculate Simple Interest...\nPlease enter the following details to get the results : \n");
    printf("\nPrincipal Value : ");
    scanf("%f",&p);
    
    printf("Rate : ");
    scanf("%f",&r);
    
    printf("Time Period (in years): ");
    scanf("%f",&t);

    si = (p*r*t)/100;
    printf("\n\nSimple Interest : %.2f",si);


    return 0;

}