#include<stdio.h>
struct student
{
    char sname[30];
    int enroll;
    int class;
    int marks;

};

void main()
{
    struct student s[5];
    int i;
    printf("Enter name and marks of 5 students : \n");
    for (i=0; i<5; i++)
    {
        scanf("%s%d", &s[i].sname, &s[i].marks);
    }

    printf("Thanks for entering data. Here is the data entered : \n");
    for (i=0; i<5; i++)
    {
        printf("%s\t%d\n", s[i].sname, s[i].marks);
    }

    // printf("\nName = %s", s[1].sname);

}