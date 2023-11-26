#include<stdio.h>
void main()
{
float p,r,t,si;
printf("\nThis is a program to find simple interest.\nPlease enter the following details : \n");
printf("Enter principal value : ");
scanf("%f",&p);
printf("Enter rate : ");
scanf("%f",&r);
printf("Enter time (in years) : ");
scanf("%f",&t);

si = p*r*t*0.01;
printf("\n\nSimple Interest = %f",si);

}