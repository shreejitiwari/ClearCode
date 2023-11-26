#include<stdio.h>
int main()
{
    int week_num;
    printf("Enter number of week : ");
    scanf("%d",&week_num);

    if (week_num == 1)
        printf("Monday");
    else if (week_num == 2)
        printf("Tuesday");
    else if (week_num == 3)
        printf("Wednesday");
    else if (week_num == 4)
        printf("Thursday");
    else if (week_num == 5)
        printf("Friday");
    else if (week_num == 6)
        printf("Saturday");
    else if (week_num == 7)
        printf("Sunday");

    else 
        printf("Invalid day number");
    return 0;
}