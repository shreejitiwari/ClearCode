#include<stdio.h>

typedef struct 
{
    int date,month, year;
} date ;


int main()
{
    date dt;
    printf("Enter date in 'dd/mm/yyyy' format : ");
    scanf("%d%*c%d%*c%d", &dt.date, &dt.month, &dt.year );

    printf("Entered date in date format : \n%d/%d/%d", dt.date, dt.month, dt.year);
}