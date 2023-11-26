#include<stdio.h>
#include "emotional_intelligence.h"


int main()
{
    int choice;
    char name[50]; int age;
    printf("Enter choice : \n\t1. Take Test\n\t2. See previous test\n\t3. Exit\nChoice : ");
    scanf("%d", &choice);
    getchar();

    switch (choice)
    {
        case 1:
            take_test();
            break;
        case 2:
            
            printf("Enter your name : ");
            gets(name);
            printf("Enter your age : ");
            scanf("%d", &age);
            see_results(name, age);
            break;

        case 3:
            return 0;

        default:
            printf("Only choose from 1,2,3");
    }


}