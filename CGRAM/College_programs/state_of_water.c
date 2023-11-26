#include<stdio.h>
int main()
{
    float Temp;
    printf("Enter the current temperature of water in degree celcius : ");
    scanf("%f",&Temp);

    (Temp >= 100)?printf("Gas"):(Temp<=0)?printf("Solid"):printf("Liquid");

    return 0;
}