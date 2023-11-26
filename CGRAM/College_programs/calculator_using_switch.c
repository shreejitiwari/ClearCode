/*
LEARNING :
Always enter character before any number
*/

#include <stdio.h>
int main()
{
    float a,b, result, check; char choice;
    printf("Which operation you want to perform ?\n1) + for Addition\n2) - for Subtraction\n3) * for Product\n4) / for Division\n\nYour choice : ");
    scanf("%c",&choice);
    printf("\nEnter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);


    switch (choice)
    {
    case '+':
        result = a+b;
        break;
    
    case '-':
        result = a-b;
        break;

    case '*':
        result = a*b;
        break;

    case '/':
        if (b!=0)
        {
            result=a/b;
        }
        else
        check = 0;

        break;

    default:
        printf("Invalid input !!");
        break;
    }

    if (check != 0)
    {printf("Output for %c  = %.2f ",choice,result);}
    else 
    {printf("Infinite ...");}

    return 0;
}