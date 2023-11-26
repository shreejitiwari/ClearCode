#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5, percentage;
    printf("Enter marks in five subjects (out of 100 per subject)(separated by space) : ");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    percentage = (m1+m2+m3+m4+m5)/5;

    if (percentage>=80)
        printf("Grade : A+");
    else if (percentage >=75)
        printf("Grade : A");
    else if (percentage >=60)
        printf("Grade : B");
    else if (percentage >=45)
        printf("Grade : C");
    else if (percentage >=35)
        printf("Grade : D");
    else
        printf("Fail");

    return 0;
}