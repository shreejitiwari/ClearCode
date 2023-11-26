#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z')
    {
        printf("Char is a small case alphabet");
    }
    else if (ch>='A' && ch<='Z')
    {
        printf("Char is an upper case alphabet");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("Char is a digit");
    }
    else
    {
        printf("Char is a special character");
    }
    
    return 0;
}