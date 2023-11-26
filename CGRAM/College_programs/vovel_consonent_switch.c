#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);

    if ('A'<=ch && ch<='Z')
    {
        ch += 32;
    }

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Char is vovel");
        break;

    default:
        printf("Char is consonent");
   
    }

    return 0;
}