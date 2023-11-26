#include<stdio.h>

typedef struct
{
    char sname[20];
    int class;
    int marks;
    int enroll_no;

}student ;

void main()
{
    student s1;
    printf("Enter name of Student : ");
    gets(s1.sname);
    printf("Enter class marks and Enrollment number : ");
    scanf("%d%d%d", &s1.class, &s1.marks, &s1.enroll_no);
    printf("Name : %s\n", s1.sname);
    printf("Class : %d\n", s1.class);
    printf("Marks : %d\n", s1.marks);
    printf("Enrollment Number : %d", s1.enroll_no);
}
