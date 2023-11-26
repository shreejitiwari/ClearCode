#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
    {
        ch = ch - 32;
    }
    else if (ch>='A' && ch<='Z')
    {
        ch = ch + 32;
    }

    printf("Ch = %c",ch);
    return 0;
}