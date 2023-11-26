#include<stdio.h>
#include<string.h>

int main()
{
    char str[30] = "";
    int i;
    printf("Enter any string : ");
    gets(str);

    for(i=0; str[i] != '\0'; i++);


    printf("Length of string = %d",i);

    return 0;
}