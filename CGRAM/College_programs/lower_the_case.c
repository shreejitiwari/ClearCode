#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any upper case character : ");
    scanf("%c",&ch);
    printf("Charater %c in lower case : %c",ch,ch+32);
    return 0;
}

// pointer in C