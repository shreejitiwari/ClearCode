#include<stdio.h>
#include<string.h>
// strcpy(destination, source);
int main()
{
    char str[30]="", str_copy[30] = "";
    int i;
    printf("Enter a string : ");
    gets(str);

    for (i=0; str[i]!='\0'; i++)
    {
        str_copy[i] = str[i];
    }
    str_copy[i] = '\0';

    printf("\nCopied string = %s", str_copy);

    return 0;
}