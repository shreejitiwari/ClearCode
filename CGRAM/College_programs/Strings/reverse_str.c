#include<stdio.h>
#include<string.h>

int main()
{
    char str[30]="", temp;
    int i, len;

    printf("Enter string : ");
    gets(str);

    for (len=0; str[len] != '\0' ; len++);

    for (i=0; i <= len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;

    }

    printf("Entered string in reverse form : %s", str);

    return 0;
}