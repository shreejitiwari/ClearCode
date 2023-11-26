#include<stdio.h>
#include<string.h>
// strcat(destination, source);
int main()
{
    char str[30]="", str2[30] = "";
    int i, len;
    printf("Enter a string 1 : ");
    gets(str);

    printf("Enter a string 2 : ");
    gets(str2);

    for (len=0; str[len] != '\0'; len++);

    for (i=0; str2[i]!='\0'; i++)
    {
        str[len-1+i] = str2[i];
    }
    str[len-1+i] = '\0';

    printf("\nConcatenated string = %s", str);

    return 0;
}