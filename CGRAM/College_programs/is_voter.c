#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    (age >=18)?printf("Congrats..!! you can vote !!"):printf("Sorry, you cannot vote.");
    return 0;
}