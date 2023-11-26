#include<stdio.h>
int main()
{
    float r,h,area;
    printf("\nEnter radius of cone : ");
    scanf("%f",&r);
    printf("Enter height of cone : ");
    scanf("%f",&h);
    area = 3.14*r*r*h/3;
    printf("\nArea of Cone : %.2f", area);

    return 0;

}